// #include <stdio.h>
// void main()
// {
//     int x = 10, *ptr = &x;
//     printf("%d ", *ptr); // 10
// }

// /* we can  also change the value */
// #include <stdio.h>
// void main()
// {
//     int x = 10, *ptr = &x;
//     *ptr = 4;
//     printf("%d ", *ptr); //4
// }

// #include <stdio.h>
// void main()
// {
//     int i = 10;
//     int *p, *q;
//     p = &i;
//     q = p;
//     printf("%d %d", *p, *q);   // 10 10
// }

// #include <stdio.h>
// void main()
// {
//     int i = 10, j = 20;
//     int *p, *q;
//     p = &i;
//     q = &j;
//     *q = *p;
//     printf("%d %d", *p, *q);  // 10 10
// }

// #include <stdio.h>
// void main()
// {
//     int i = 1;
//     int *p = &i;
//     q = p;
//     *q = 5;
//     printf("%d", *p); // output is error
// }

// #include <stdio.h>
// void main()
// {
//     int i = 1;
//     int *p = &i, *q;
//     q = p;
//     *q = 5;
//     printf("%d", *p);  // 5
// }

// /* find the min and max no. using pointers*/

// #include <stdio.h>
// void fun(int a[], int len, int *min, int *max)
// {
//     *min = *max = a[0];
//     for (int i = 1; i < len; i++)
//     {
//         if (a[i] > *max)
//             *max = a[i];
//         if (a[i] < *min)
//             *min = a[i];
//     }
// }
// void main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 3};
//     int min, max;
//     int len = sizeof(a) / sizeof(a[0]);
//     fun(a, len, &min, &max);
//     printf("\nMinumnu value is:%d and Maximun value is:%d", min, max);  // 1 6
// }

/* Returning pointers */

// /* findout the Mid of the array */

// #include <stdio.h>
// int *findMid(int a[], int n)
// {
//     return &a[n / 2];
// }
// void main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     int *mid = findMid(a, n);
//     printf("%d", *mid); // 3
// }

// /* Never ever try to return the address of an automatic variable */

// #include <stdio.h>
// int *fun()
// {
//     int i = 10;
//     return &i;   // i gets destroyed
// }
// void main()
// {
//     int *p = fun();
//     printf("%d", *p);
// }

// #include <stdio.h>
// void fun(const int *p)
// {
//     *p = 0;
// }
// void main()
// {
//     const int i = 10;     // error
//     fun(&i);
// }

/* How to print the address of a variable?
ans=>> use %p (hexadecimal) as a format specifier in printf function */

// #include <stdio.h>
// void main()
// {
//     int i = 10;
//     int *p = &i;
//     printf("The address of variable i is: %p", p);
// }

/* pointer arithmetic (addition)
addition of pointer and array
pointer subtraction must have to divide by no. of bytes */

/* increment and decrement operators in pointers */

// //post-increment
// #include <stdio.h>
// void main()
// {
//     int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
//     int *p = &a[0];
//     printf("%d ", *(p++));  // 5
//     printf("%d ", *p);       // 16
// }

// //pre-increment
// #include<stdio.h>
// void main()
// {
// int a[]={5, 16, 7, 89, 45, 32, 23, 10};
// int *p=&a[0];
// printf("%d ",*(++p));         // 16
// }

// /* pre and post decrement */
// #include <stdio.h>
// void main()
// {
//     int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
//     int *p = &a[2];
//     printf("%d ", *(--p));   // 16
//     printf("%d ", *(p--));    // 16
// }

// /* comparison of the pointers*/

// #include <stdio.h>
// void main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6};
//     int *p = &a[3];
//     int *q = &a[5];
//     printf("%d\n", p <= q);      // 1
//     printf("%d\n", p>= q);       // 0
//     q = &a[3];
//     printf("%d", p == q);        // 1
// }

// #include <stdio.h>
// void main()
// {
//     int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
//     int *p = &a[1], *q = &a[5];

//     printf("%d ", *(p + 3));     // output: 45 7 4 1 1
//     printf("%d ", *(q - 3));
//     printf("%d ", q - p);        // actually (q-p)/4 =4
//     printf("%d ", p < q);
//     printf("%d", *p < *q);
// }

// /* Sum of the elements of array */

// #include <stdio.h>
// void main()
// {
//     int a[] = {1, 2, 4, 5, 6, 7, 8};
//     int sum = 0, *p;
//     for (p = &a[0]; p <= &a[6]; p++)
//     {
//         sum += *p;
//     }
//     printf("\nSum is:%d ", sum);     //33
// }

/* Use array name as a pointer  but assiging a new address to them is not possible */

// #include <stdio.h>
// void main()
// {
//     int a[5];
//     *a = 10;         //&a[0]=10
//     printf("%d", a[0]);
// }

// #include <stdio.h>
// void main()
// {
//     int a[5];
//     *(a + 1) = 20;
//     printf("%d", a[1]);
// }

// #include<stdio.h>
// void main()
// {
// int a[5];
// *(a+2)=30;
// printf("%d",a[2])
// }

/*  So *(a+i) = a[i] */

// /* Sum of the elements of array */

// #include <stdio.h>
// void main()
// {
//     int a[] = {1, 2, 4, 5, 6, 7, 8};
//     int sum = 0, *p;
//     for (p = a; p <= a + 6; p++)
//     {
//         sum += *p;
//     }
//     printf("\nSum is:%d ", sum); // 33
// }

// #include <stdio.h>
// void main()
// {
//     int a[] = {11, 22, 33, 44, 5, 6};
//     int *p = a;
//     printf("%d ", a++);           // a=a+1 can't assign or change the address
// }

// #include <stdio.h>
// void main()
// {
//     int a[] = {11, 22, 33, 44, 5, 6};
//     int *p = a;
//     printf("%d ", a + 1);     //  22   // only accessing
// }

// /*Alternative */

// #include <stdio.h>
// void main()
// {
//     int a[] = {11, 22, 33, 44, 5, 6};
//     int *p = a;
//     printf("%d ", *(++p));     // 22
// }

// /* Reversing a series of NUmbers using pointers */

// #include <stdio.h>
// #define N 5
// void main()
// {
//     int a[N], *p;
//     printf("\nEnter the %d elements of array:", N);
//     for (p = a; p <= a + N - 1; p++)
//     {
//         scanf("%d", p);
//     }
//     printf("\nReversed Series is:\n");
//     for ( p = a + N - 1; p >= a; p--)
//     {
//         printf("%d ", *p);
//     }
// }

// /* Passing array name as an argument to a function */

// #include <stdio.h>
// int add(int b[], int len)       //   b[] ~ *b ,  b is ntg but pointer and by shifting we can add
// {
//     int sum = 0, i;
//     for (i = 0; i < len; i++)
//         sum += b[i];
//     return sum;
// }
// void main()
// {
//     int a[] = {1, 2, 3, 4};
//     int len = sizeof(a) / sizeof(a[0]);
//     printf("%d ", add(a, len)); // a ~ &a[0]
// }

/* Using pointers in 2D arrays */

/* 1D */

// #include <stdio.h>
// void main()
// {
//     int a[] = {1, 2, 3, 4};
//     int len = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// /* 2D */
// #include <stdio.h>
// void main()
// {
//     int i, j;
//     int a[2][2] = {{1, 2}, {3, 4}};
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//     }
// }

/* Using pointers */

// #include <stdio.h>
// void main()
// {
//     int *p;
//     int a[2][2] = {{1, 2}, {3, 4}};
//     for (p = &a[0][0]; p <= &a[1][1]; p++)
//     {
//         printf("%d ", *p);
//     }
// }

// // output :  2036 2036 2036 only address
// #include <stdio.h>
// void main()
// {
//     unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     printf("%u, %u, %u, %u", x + 3, *(x + 3), *(x + 2) + 3);
// }

/* pointers pointing to entire array */

// #include <stdio.h>
// void main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int *p = a;
//     printf("%d ", *p);  // output is 1
// }

// #include <stdio.h>
// void main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int (*p)[5] = &a;
//     printf("%d ", **p);   /* p represents entire array's  address, *p means address of 1 and **p means 1 */
// }

// /* output is 2 3 5 6*/

// #include <stdio.h>
// void main()
// {
//     // int a[][3] = {1, 2, 3, 4, 5, 6};
//     int a[][3] = {{1, 2, 3}, {4, 5, 6}};
//     int (*ptr)[3] = a;
//     printf("%d %d ", (*ptr)[1], (*ptr)[2]); // (*ptr)[1] ~ to  *((*ptr)+1)
//     ++ptr;
//     printf("%d %d ", (*ptr)[1], (*ptr)[2]);
// }

// #include <stdio.h>
// void f(int *p, int *q)
// {
//     p = q;
//     *p = 2;
// }
// int i = 0, j = 1;
// void main()
// {
//     f(&i, &j);
//     printf("%d %d\n", i, j);       /* output: 0 2 */
// }

// #include <stdio.h>
// int f(int *a, int n)
// {
//     if (n <= 0) return 0;
//     else if (*a % 2 == 0) return *a + f(a + 1, n - 1);
//     else return *a - f(a + 1, n - 1);
// }
// void main()
// {
//     int a[] = {12, 7, 13, 4, 11, 6};
//     printf("%d", f(a, 6));     //output: 15
//     getchar();
// }

// #include <stdio.h>
// int f(int x, int *py, int **ppz)
// {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }
// void main()
// {
//     int c, *b, **a;
//     c = 4, b = &c, a = &b;
//     printf("%d", f(c, b, a));    // output : 19
// }

// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     static int *temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// void printab()
// {
//     static int i, a = -3, b = -6;
//     i = 0;
//     while (i <= 4)
//     {
//         if ((i++) % 2 == 1) continue;
//         a = a + i;
//         b = b + i;
//     }
//     swap(&a, &b);
//     printf("a=%d, b=%d\n", a, b);
// }
// void main()
// {
//     printab(); // a=6, b=3
//     printab(); // a=15, b=12
// }

// #include <stdio.h>
// void main()
// {
//     int i, j;
//     char a[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
//     char b[3][2];
//     char *p = *b;
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             *(p + 2 * j + 1) = a[i][j];            // a d b e c f
//         }
//     }
// }

/* function pointers */

// #include <stdio.h>
// int add(int a, int b)
// {
//     return a + b;
// }
// void main()
// {
//     int (*ptr)(int, int) = add;
//     int result = ptr(10, 20);
//     printf("%d", result);
// }


/*Designing a calculator program using switch case */

// #include<stdio.h>
// float sum(float a, float b) { return (a+b); }
// float sub(float a, float b) { return (a-b); }
// float mul(float a, float b) { return (a*b); }
// float div(float a, float b) { return (a/b); }

// void main()
// {
// int ch;
// float a,b,result;
// printf("Enter the two numbers:\n");
// scanf("%f%f",&a,&b);
// printf("Enter your choice:0 for sum,1 for sub,2 for mul,3 for div:\n");
// scanf("%d",&ch);

// switch(ch)
// {
//     case 0: result=sum(a,b);break;
//     case 1: result=sub(a,b);break;
//     case 2: result=mul(a,b);break;
//     case 3: result=div(a,b);break;
// }
// printf("%f",result);
// }


// /* using function pointers */
// #include<stdio.h>
// #define ops 4
// float sum(float a, float b) { return (a+b); }
// float sub(float a, float b) { return (a-b); }
// float mul(float a, float b) { return (a*b); }
// float div(float a, float b) { return (a/b); }

// void main()
// {
// float (*ptrfun[ops])(float,float)={sum,sub,mul,div};
// int ch;
// float a,b;
// printf("Enter the two numbers:\n");
// scanf("%f%f",&a,&b);
// printf("Enter your choice:0 for sum,1 for sub,2 for mul,3 for div:\n");
// scanf("%d",&ch);
// printf("%f",ptrfun[ch](a,b));
// }