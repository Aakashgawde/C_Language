// #include <stdio.h>

int main()
{
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("the marks of student %d in subject %d is: %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}

// program 2
// #include <stdio.h>

// int main()
// {
//     int stud[4][2];
//     int i, j;

//     for (i = 0; i <= 3; i++)
//     {
//         printf("enter roll no. and marks\n");
//         scanf("%d%d", &stud[i][0], &stud[i][1]);
//     }
//     for (i = 0; i <= 3; i++)
//     {
//         printf("marks of roll no.%d is %d\n", stud[i][0], stud[i][1]);
//     }
//     return 0;
// }