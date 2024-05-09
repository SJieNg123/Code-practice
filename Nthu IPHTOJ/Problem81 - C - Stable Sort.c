#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int index;
    char name[21];
    int score;
} student;

int cmp(const void *a, const void *b)
{
    student *student_a = (student *)a;
    student *student_b = (student *)b;
    if (student_a->score != student_b->score)
        return student_b->score - student_a->score;
    else
        return student_a->index - student_b->index;
}

int main()
{
    int n;
    scanf("%d", &n);
    student students[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", students[i].name, &students[i].score);
        students[i].index = i;
    }

    qsort(students, n, sizeof(student), cmp);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", students[i].name);
    }
    return 0;
}