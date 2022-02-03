// #include <stdio.h>

// int main()
// {
//     int avg, sum = 0;
//     int i;
//     int marks[30]; // array declaration
//     for (int i = 0; i <= 29; i++)
//     {
//         printf("enter marks:");
//         scanf("%d\n", &marks[i]); // store data in array
//     }
//     for (int i = 0; i <= 29; i++)
//         sum = sum + marks[i]; // read data from array
//     avg = sum / 30;
//     printf("average marks=%d\n");
//     return 0;
// }

//program 2

// #include <stdio.h>
// void display1(int);
// void display2(int *);
// int main()
// {
//     int i;
//     int marks[] = {55, 65, 75, 56, 78, 78, 90};
//     for (i = 0; i <= 6; i++)
//         display1(marks[i]);
//     for (i = 0; i <= 6; i++)
//         display2(&marks[i]);
//     return 0;
// }
// void display1(int m)
// {
//     printf("%d\n", m);
// }
// void display2(int *n)
// {
//     printf("%d\n", *n);
// }

// program 3

// #include <stdio.h>

// int main()
// {
//     int i = 3, *x;
//     float j = 1.5, *y;
//     char k = 'c', *z;
//     printf("value of i = %d\n", i);
//     printf("value of j = %f\n", j);
//     printf("value of k = %c\n", k);
//     x = &i;
//     y = &j;
//     z = &k;
//     printf("original address in x = %u\n", x);
//     printf("original address in y = %u\n", y);
//     printf("original address in z = %u\n", z);
//     x++;
//     y++;
//     z++;
//     printf("new address in x =%u\n", x);
//     printf("new address in y =%u\n", y);
//     printf("new address in z =%u\n", z);
//     return 0;
// }

// program 4
// #include <stdio.h>

// int main()
// {
//     int arr[] = {10, 20, 30, 45, 67, 56, 74};
//     int i = 4, *j, *k, *x, *y;
//     j = &i;
//     j = j + 9;
//     k = &i;
//     k = k - 3;
//     x = &arr[1];
//     y = &arr[5];
//     printf("%d\n", y - x);
//     j = &arr[4];
//     k = (arr + 4);
//     if (j == k)
//         printf("the two pointers point to the same location\n");
//     else
//         printf("the two pointers point to the different location\n");
//     return 0;
// }

//program 5
// #include <stdio.h>

// int main()
// {
//     int num[] = {24, 34, 12, 44, 56, 17};
//     int i, *j;
//     j = &num[0]; // assign address of zeroth element
//     for (i = 0; i <= 5; i++)
//     {
//         printf("address = %u element = %d\n", j, *j);
//         j++; // increment pointer to pointer to next location
//     }
//     return 0;
// }

// program 6
// #include <stdio.h>
// void display1(int *, int);
// void display2(int[], int);
// int main()
// {
//     int num[] = {24, 34, 12, 44, 56, 17};
//     display1(&num[0], 6);
//     display2(&num[0], 6);
//     return 0;
// }

// void display1(int *j, int n)
// {
//     int i;
//     for (i = 0; i <= n - 1; i++)
//     {
//         printf("element = %d\n", *j);
//         j++;
//     }
// }
// void display2(int j[], int n)
// {
//     int i;
//     for (i = 0; i <= n - 1; i++)
//     {
//         printf("element = %d\n", j[i]);
//     }
// }

// program 7
// #include <stdio.h>

// int main()
// {
//     int num[] = {24, 34, 12, 44, 56, 17};
//     int i;
//     for (i = 0; i <= 5; i++)
//     {
//         printf("address = %u", &num[i]);
//         printf("element = %d%d", num[i], *(num + i));
//         printf("%d%d\n", *(i + num), i[num]);
//     }
//     return 0;
// }

//program 8
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int max, i, *p;
//     printf("enter array size:");
//     scanf("%d", &max);
//     p = (int *)malloc(max * sizeof(int));
//     for (i = 0; i <= 5; i++)
//     {
//         p[i] = i * i;
//         printf("%d", p[i]);
//     }
//     return 0;
// }