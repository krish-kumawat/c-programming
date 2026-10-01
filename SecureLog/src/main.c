#include <stdio.h>

void analyzeLog(const char *filename);

int main()
{
    printf("========================================\n");
    printf("           SECURELOG v1.0\n");
    printf("        C Security Log Analyzer\n");
    printf("========================================\n");

    analyzeLog("../../data/sample.log");

    return 0;
}
