#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp1(const void *a, const void *b)
{
    Grade *grade1 = (Grade *)a;
    Grade *grade2 = (Grade *)b;

    // sort grades and student ID ascendingly
    if (grade1->total != grade2->total)
        return grade1->total - grade2->total;
    if (grade1->Chinese != grade2->Chinese)
        return grade1->Chinese - grade2->Chinese;
    if (grade1->English != grade2->English)
        return grade1->English - grade2->English;
    if (grade1->math != grade2->math)
        return grade1->math - grade2->math;
    if (grade1->science != grade2->science)
        return grade1->science - grade2->science;
    return grade1->ID - grade2->ID;
}

int cmp2(const void *a, const void *b)
{
    Grade *grade1 = (Grade *)a;
    Grade *grade2 = (Grade *)b;

    // sort grades decendingly, student ID ascendingly
    if (grade1->total != grade2->total)
        return grade2->total - grade1->total;
    if (grade1->Chinese != grade2->Chinese)
        return grade2->Chinese - grade1->Chinese;
    if (grade1->English != grade2->English)
        return grade2->English - grade1->English;
    if (grade1->math != grade2->math)
        return grade2->math - grade1->math;
    if (grade1->science != grade2->science)
        return grade2->science - grade1->science;
    return grade1->ID - grade2->ID;
}

void sortGrade(Grade *gList, int n, char *order)
{
    for (int i = 0; i < n; i++)
        gList[i].total = gList[i].Chinese + gList[i].English + gList[i].math + gList[i].science;
    if (!(strcmp(order, "ascending")))
        qsort(gList, n, sizeof(Grade), cmp1);
    else
        qsort(gList, n, sizeof(Grade), cmp2);
    return;
}

// below is the given half done code
/*
typedef struct
{
    int ID;
    int Chinese, English, math, science;
    int total;
} Grade;

int main()
{
    int n, i;
    char order[20];
    Grade gradeList[1000];
    scanf("%d%s", &n, order);
    for (i = 0; i < n; i++)
        scanf("%d%d%d%d%d", &gradeList[i].ID, &gradeList[i].Chinese, &gradeList[i].English, &gradeList[i].math, &gradeList[i].science);
    sortGrade(gradeList, n, order);
    for (i = 0; i < n; i++)
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", gradeList[i].ID, gradeList[i].total, gradeList[i].Chinese, gradeList[i].English, gradeList[i].math, gradeList[i].science);
    return 0;
}
*/
