// /* Use case of Macro */

// #include <stdio.h>
// #define n 5
// int main()
// {
//     int a[n], i;
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the input for index %d:", i);
//         scanf("%d", &a[i]);
//     }
//     printf("\nArray elements are eas follows:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// /* wap to print the numbers in reverse order */
// #include <stdio.h>
// int main()
// {
//     int i, a[5] = {1, 2, 3, 4, 5};
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\nReverse Order:\n");
//     for (i=4; i >= 0; i--)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

/* Variable length array */

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("\nEnter the no. of elements you want to reverse:\n");
//     scanf("%d", &n);
//     int i, arr[n];
//     printf("\nEnter all the %d elements:\n", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d ", &arr[i]);
//     }
//     printf("\n Elements in reverse order are:\n");
//     for (i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// /* wap to chk whether any of the digits in a no. appears more than once */

// #include <stdio.h>
// int main()
// {
//     int n, r, a[10] = {0};
//     printf("\nEnter the number:");
//     scanf("%d", &n);
//     while (n > 0)
//     {
//         r = n % 10;
//         if (a[r] == 1)
//             break;
//         a[r] = 1;
//         n = n / 10;
//     }
//     if (n > 0)
//         printf("Yes");
//     else
//         printf("No");
//     return 0;
// }

// /* wap to print the no. of element in the array*/
// #include <stdio.h>
// int main()
// {
//     int a[] = {1, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 9, 0, 3};
//     printf("%d ", sizeof(a) / sizeof(a[0]));
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

/* Multidimensional array*/

// #include <stdio.h>
// int main()
// {
//     // int a[2][3] = {1, 2, 3, 4, 5, 6};
//     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 printf("%d ", a[i][j]);
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 printf("%d ", a[i][j][k]);
//             }
//         }
//     }
//     return 0;
// }

/* wap that reads a 5x5 array of integers andthen print the row sum and the column sum */

// #include <stdio.h>
// int main()
// {
//     int i, j, sum = 0;
//     int a[5][5] = {
//         {8, 3, 9, 0, 10},
//         {3, 5, 17, 1, 1},
//         {2, 8, 6, 23, 1},
//         {15, 7, 3, 2, 9},
//         {6, 14, 2, 6, 0},
//     };
//     printf("\nRow total:");
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             sum += a[i][j];
//         }
//         printf(" %d ", sum);
//         sum = 0;
//     }
//     printf("\nColumn total:");
//     for (j = 0; j < 5; j++)
//     {
//         for (i = 0; i < 5; i++)
//         {
//             sum += a[i][j];
//         }
//         printf(" %d ", sum);
//         sum = 0;
//     }
//     return 0;
// }



/* Matrix multiplication */

// #include <stdio.h>
// #define MAX 50
// int main()
// {
//     int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
//     int arows, acolumns, brows, bcolumns;
//     int i, j, k;
//     int sum=0;

//     printf("\nEnter the rows and columns of matrix a:");
//     scanf("%d %d", &arows, &acolumns);
//     printf("\nEnter the elements of matrix a:\n");
//     for (i = 0; i < arows; i++)
//     {
//         for (j = 0; j < acolumns; j++)
//         {
//             scanf("%d ", &a[i][j]);
//         }
//     }
//     printf("\nEnter the rows and columns of matrix b:");
//     scanf("%d %d", &brows, &bcolumns);
//     if (brows != acolumns)
//     {
//         printf("Sorry! multiplication is not possible\n");
//     }
//     else
//     {
//         printf("Enter the elements of matrix b:\n");
//         for (i = 0; i < brows; i++)
//         {
//             for (j = 0; j < bcolumns; j++)
//             {
//                 scanf("%d ", &b[i][j]);
//             }
//         }
//     }
//     printf("\n");
//     for (i = 0; i < arows; i++)
//     {
//         for (j = 0; j < bcolumns; j++)
//         {
//             for (k = 0; k < brows; k++)
//             {
//                 sum += a[i][k] * b[k][j];
//             }
//             product[i][j] = sum;
//             sum = 0;
//         }
//     }
//     printf("\nResultant matrix\n");
//     for (i = 0; i < arows; i++)
//     {
//         for (j = 0; j < bcolumns; j++)
//         {
//             printf("%d ", product[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


