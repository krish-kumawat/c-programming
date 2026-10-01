#include <stdio.h>
#include <string.h>

void analyzeLog(const char *filename)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error: Could not open log file.\n");
        return;
    }

    char line[200];
    char user[50];

    int totalEvents = 0;
    int successfulLogins = 0;
    int failedLogins = 0;

    int adminFailed = 0;
    int user01Failed = 0;
    int user02Failed = 0;

    while (fgets(line, sizeof(line), file))
    {
        totalEvents++;

        if (strstr(line, "LOGIN_SUCCESS") != NULL)
        {
            successfulLogins++;
        }

        if (strstr(line, "LOGIN_FAILED") != NULL)
        {
            failedLogins++;

            if (strstr(line, "| admin |") != NULL)
            {
                adminFailed++;
            }
            else if (strstr(line, "| user01 |") != NULL)
            {
                user01Failed++;
            }
            else if (strstr(line, "| user02 |") != NULL)
            {
                user02Failed++;
            }
        }
    }

    printf("\n========== SECURITY REPORT ==========\n");
    printf("Total Events       : %d\n", totalEvents);
    printf("Successful Logins  : %d\n", successfulLogins);
    printf("Failed Logins      : %d\n", failedLogins);

    printf("\n--- Failed Attempts By User ---\n");
    printf("admin  : %d\n", adminFailed);
    printf("user01 : %d\n", user01Failed);
    printf("user02 : %d\n", user02Failed);

    printf("\n--- Suspicious Activity ---\n");

    if (adminFailed >= 5)
    {
        printf("WARNING: admin has suspicious activity!\n");
    }

    if (user01Failed >= 5)
    {
        printf("WARNING: user01 has suspicious activity!\n");
    }

    if (user02Failed >= 5)
    {
        printf("WARNING: user02 has suspicious activity!\n");
    }

    printf("=====================================\n");

    fclose(file);
}