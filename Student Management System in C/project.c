
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

    struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
void showStatistics(struct Student students[], int count);

int main()
{
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do
    {
        printf("\n====================================\n");
        printf("     STUDENT MANAGEMENT SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Show Statistics\n");
        printf("7. Exit\n");
        printf("====================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students, &count);
            break;

        case 2:
            displayStudents(students, count);
            break;

        case 3:
            searchStudent(students, count);
            break;

        case 4:
            updateStudent(students, count);
            break;

        case 5:
            deleteStudent(students, &count);
            break;

        case 6:
            showStatistics(students, count);
            break;

        case 7:
            printf("\nThank you for using the Student Management System!\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}

void addStudent(struct Student students[], int *count)
{

    if (*count >= MAX_STUDENTS)
    {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;

    printf("\nStudent added successfully!\n");
}

void displayStudents(struct Student students[], int count)
{

    if (count == 0)
    {
        printf("\nNo students available.\n");
        return;
    }

    printf("\n--------------------------------------------------\n");
    printf("%-10s %-25s %-10s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-10d %-25s %-10.2f\n",
               students[i].rollNo,
               students[i].name,
               students[i].marks);
    }

    printf("--------------------------------------------------\n");
}

void searchStudent(struct Student students[], int count)
{

    int roll;
    int found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {

        if (students[i].rollNo == roll)
        {

            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", students[i].rollNo);
            printf("Name        : %s\n", students[i].name);
            printf("Marks       : %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void updateStudent(struct Student students[], int count)
{

    int roll;
    int found = 0;

    printf("\nEnter Roll Number to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {

        if (students[i].rollNo == roll)
        {

            printf("\nEnter New Name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("\nStudent updated successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void deleteStudent(struct Student students[], int *count)
{

    int roll;
    int found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < *count; i++)
    {

        if (students[i].rollNo == roll)
        {

            for (int j = i; j < *count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            (*count)--;

            printf("\nStudent deleted successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void showStatistics(struct Student students[], int count)
{

    if (count == 0)
    {
        printf("\nNo student data available.\n");
        return;
    }

    float total = 0;
    float highest = students[0].marks;
    float lowest = students[0].marks;

    int highestIndex = 0;
    int lowestIndex = 0;

    for (int i = 0; i < count; i++)
    {

        total += students[i].marks;

        if (students[i].marks > highest)
        {
            highest = students[i].marks;
            highestIndex = i;
        }

        if (students[i].marks < lowest)
        {
            lowest = students[i].marks;
            lowestIndex = i;
        }
    }

    float average = total / count;

    printf("\n========== STATISTICS ==========\n");
    printf("Total Students : %d\n", count);
    printf("Average Marks  : %.2f\n", average);

    printf("\nHighest Marks  : %.2f\n", highest);
    printf("Top Student    : %s\n", students[highestIndex].name);

    printf("\nLowest Marks   : %.2f\n", lowest);
    printf("Lowest Student : %s\n", students[lowestIndex].name);

    printf("================================\n");
}
