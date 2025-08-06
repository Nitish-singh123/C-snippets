#include <stdio.h>
    int main()
{
    int x = 3;
    if (x == 2); x = 0;
    if (x == 3) x++;
    else x += 2;

    printf("x=%d", x); // x=2
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("How many rows want in the pyramid?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/* Palindrome number */
#include <stdio.h>
int main()
{
    int n, r, rev = 0, prev;
    printf("Enter the number:\n");
    scanf("%d", &n);
    prev = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (rev == prev)
        printf("%d is palindrome", prev);
    else
        printf("%d is not palindrome", prev);
    return 0;
}

/* Armstrong number */
#include<stdio.h>
int main()
{
int r,n=153,arm=0;
int prev=n;
while(n!=0)
{
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}
if(arm==prev)
printf("%d is armstrong no.",prev);
else
    printf("%d is not armstrong no.",prev);
return 0;
}

#include <stdio.h>
int main()
{
    int a, n, c = 0, cnt, arm = 0, rem, mul = 1;
    printf("Enter the number:\n");
    scanf("%d", &a);
    n = a;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    cnt = c;
    n = a;
    while (n != 0)
    {
        rem = n % 10;
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        arm = arm + mul;
        cnt = c;
        n = n / 10;
        mul = 1;
    }
    if (arm == a)
        printf("%d is a armstrong num", a);
    else
        printf("%d is not a armstrong num", a);
    return 0;
}

/* factorial of number*/

#include <stdio.h>
int main()
{
    int n, i, f = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if (n == 0)
        printf("Factorial = 1");
    else
    {
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("Factorial = %d", f);
    }
    return 0;
}

#include <stdio.h>
int fact(int);
void main(int n)
{
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, fact(n));
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

/*wap to check whether the given no. is strong or not */

#include <stdio.h>
int main()
{
    int n, a, rem, i, f = 1, str = 0;
    printf("\nEnter the number:");
    scanf("%d", &a);
    n = a;
    while (n != 0)
    {
        rem = n % 10;
        for (i = 1; i <= rem; i++)
        {
            f = f * i;
        }
        str = str + f;
        f = 1;
        n = n / 10;
    }
    if (str == a)
        printf("%d is a strong number", a);
    else
        printf("%d is not a strong number", a);
    return 0;
}

/* Fibonacci Series */
#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("\nEnter the number of terms:");
    scanf("%d", &n);
    printf("Fibonacci series\n");
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("\nEnter the number of terms:");
    scanf("%d", &n);
    printf("Fibonacci series\n");
    printf("%d %d ", a, b);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}

#include <stdio.h>
int fib(int);
void main(int n)
{
    printf("\nEnter the number of terms:");
    scanf("%d", &n);
    printf("Fibonacci Series\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

/* wap to check whether the no. is prime or composite */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, n1, n2, c = 0;
    printf("\nEnter the number(n>1):");
    scanf("%d", &n);
    n1 = ceil(sqrt(n));
    n2 = n;

    for (i = 2; i <= n1; i++)
    {
        if (n2 % i == 0)
            c = 1;
    }
    if ((c == 0 && n2 != 1) || n2 == 2 || n2 == 3)
        printf("%d is a prime number", n2);
    else
        printf("%d is a composite number", n2);
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i, c = 0;
    printf("\nEnter the number(n>1):");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
        printf("%d is a prime number", n);
    else
        printf("%d is a composite number", n);
    return 0;
}

/* perfect number*/

#include <stdio.h>
int main()
{
    int n, i, r, sum = 0;
    printf("\nEnter the number:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        r = n % i;
        if (r == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);
    return 0;
}

/* leap year */

#include <stdio.h>
int main(int y)
{
    printf("\nEnter the year:");
    scanf("%d", &y);
    if (y % 400 == 0)
        printf("%d is a leap year", y);
    else if (y % 100 == 0)
        printf("%d is not a leap year", y);
    else if (y % 4 == 0)
        printf("%d is a leap year", y);
    else
        printf("%d is not a leap year", y);
    return 0;
}

/* power of an integer */

#include <stdio.h>
int main()
{
    int x, y, p, z = 1;
    double z1 = 1.0;
    printf("\nEnter the base:");
    scanf("%d", &x);
    printf("Enter the exponent:");
    scanf("%d", &y);
    p = y;
    if (y > 0)
    {
        while (y != 0)
        {
            z = z * x;
            y--;
        }
        printf("%d raise to the power %d = %d", x, p, z);
    }
    else
    {
        while (y != 0)
        {
            z1 = z1 * (1.0 / x);
            y++;
        }
        printf("%d raise to the power %d = %.5f", x, p, z1);
    }
    return 0;
}

/* sum of the two numbers without using the + operator(using inrement/decrement) */

#include <stdio.h>
int main()
{
    int x, y;
    printf("\nEnter the two numbers:");
    scanf("%d%d", &x, &y);
    if (y > 0)
    {
        while (y != 0)
        {
            x++;
            y--;
        }
    }
    else
    {
        while (y != 0)
        {
            x--;
            y++;
        }
    }
    printf("Sum of the two numbers is %d", x);
    return 0;
}

/* USE OF HALF ADDER METHOD (it doesn't work for 0) */

#include <stdio.h>
int main()
{
    int x, y, sum, carry;
    printf("\nEnter the two numbers:");
    scanf("%d %d", &x, &y);
    while (y != 0)
    {
        sum = x ^ y;
        carry = (x & y) << 1;
        x = sum;
        y = carry;
    }
    printf("Sum of the two numbers is:%d", sum);
    return 0;
}

/* Floyd's triangle */
#include <stdio.h>
int main()
{
    int rows, n = 1,i,j;
    printf("\nEnter the no. of rows:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}

/* Binary to decimal */
#include <stdio.h>
int main()
{
    int binary, decimal = 0, num, rem, weight = 1;
    printf("\nEnter the binary number:");
    scanf("%d", &binary);
    num = binary;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * weight;
        binary = binary / 10;
        weight = weight * 2;
    }
    printf("Decimal equivalent of binary number %d is : %d", num, decimal);
    return 0;
}

/* Functions in C */

#include <stdio.h>
float area(float, float);
void main()
{
    float l, b;
    printf("\nEnter the length and breadth of rectangle:");
    scanf("%f%f", &l, &b);
    printf("Area of the rectangle is: %.3f", area(l, b));
}
float area(float a, float b)
{
    return a * b;
}

#include <stdio.h>
char fun();
int main()
{
    char c = fun();
    printf("Character is: %c", c);
    return 0;
}
char fun()
{
    return 'a';
}


#include <stdio.h>
char fun()
{
    return 'a';
}
int main()
{
    char c = fun();
    printf("Character is: %c", c);
    return 0;
}


/* call by value*/

#include <stdio.h>
int add(int, int);  //parameter(formal parameter)
int main(int a, int b)
{
    printf("\nEnter the two numbers:");
    scanf("%d%d", &a, &b);   //argument(actual parameter)
    printf("Sum of %d and %d is: %d", a, b, add(a, b));
    return 0;
}
int add(int x, int y)  //parameter(formal parameter)
{
    return x + y;
}

/* call by reference */
// wap to swap to numbers

#include <stdio.h>
int swap(int *, int *);
void main()
{
    int x, y;
    printf("\nEnter the two numbers:");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("X=%d and y=%d ", x, y);
}
int swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

#include <stdio.h>
int func(int);
int main()
{
    int n = 435, C;
    C = func(n);
    printf("%d ", C);    // C=9
    return 0;
}
int func(int n)
{
    int C = 0;
    while (n)     // n ~ n!=0 until number exist whatever it is upto becomes 0
    {
        C++;
        n >>= 1;
    }
    return (C);
}

#include <stdio.h>
int func(int);
int main()
{
    int n = 435, C;
    C = func(n);
    printf("%d ", C); // C=7
    return 0;
}
int func(int n)
{
    int C = 2;
    while (n)
    {
        C++;
        n >>= 2;
    }
    return (C);
}

#include <stdio.h>
void f1(int a, int b);      // not gonna return any value as the values get destroyed
void f2(int *a, int *b);    // indirectly return values to the function as we are using the pointer
int main()
{
    int a = 4, b = 5, c = 6;
    f1(a, b);
    f2(&b, &c);               //takes latest changeable value
    printf("%d", c - a - b);   // -5
    return 0;
}
void f1(int a, int b)
{
    int c;
    c = a; a = b; b = c;
}
void f2(int *a, int *b)
{
    int c;
    c = *a; *a = *b; *b = c;
}

#include <stdio.h>
int fun()
{
    static int num = 16;
    return num--;
}
int main()
{
    for (fun(); fun(); fun())
        printf("%d ", fun());   // 14 11 8 5 2
    return 0;
}

/* Use CodeBlocks*/

#include <stdio.h>
#include <stdlib.h>
int fun(int, int);
int main()
{
    int sum = fun(3, 4);
    printf("%d", sum);  //7
    return 0;
}

int fun(int a, int b)    // if static
{
    int c = a + b;
    return c;
}

/* preliminaries /basics */
/* Concepts of stack(call stack) and activation record */

#include <stdio.h>
int fun1(int a)
{
    int b = 5;
    b = b + a;
    return b;
}
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);    // 15
}

/* static or lexical scoping */

#include <stdio.h>
int fun1(int);
int fun2(int);
int a = 5; // initialized data segment
int main() // call stack
{
    int a = 10;
    a = fun1(a);
    printf("%d", a); // 25
    return 0;
}
int fun1(int b)
{
    b = b + 10;
    b = fun2(b);
    return b;
}
int fun2(int b)
{
    int c;
    c = a + b;
    return c;
}

/* If dynamically scoping then output will be 30 */
/* C always follows static scoping */

// /* If statically scoping  */
#include <stdio.h>
int a, b;
void print()
{
    printf("%d %d", a, b); // 3 1
}
int fun1()
{
    int a, c;
    a = 0;
    b = 1; // this modifies global b=1  bcz no local b is not declared
    c = 2; // after f1 a=2 and b=1
    return c;
}
void fun2()
{
    int b;
    a = 3; // global  a=3
    b = 4;
    print();
}
int main()
{
    a = fun1();
    fun2();
}

/* If dynamically scoping (hypothetical) */
#include <stdio.h>
int a, b;
void print()
{
    printf("%d %d", a, b); // 2 4
}
int fun1()
{
    int a, c;
    a = 0;
    b = 1;
    c = 2;
    return c;
}
void fun2()
{
    int b;
    a = 3;   // global
    b = 4;
    print();
}
int main()
{
    a = fun1();
    fun2();
}

/* statically(x=10) and if dynamically (y=20) */

/* #include <stdio.h>
int i;
program main()
{
    i = 10;  //global so i=10
    call f() ;
}

procedure f()
{
    int i = 20;
    call g();
}
procedure g()
{
    print i;
}
    */

/* what will be the output of the following pseudocode when parameters are passed by reference (pointers) and dynamic
 scoping is assumed ?*/
/*
#include <stdio.h>
a = 3;        // *a=3
void n(x)     //&x ~ to &a =2
{
   x = x * a;   //*x=2 and a=2
   printf(x);    // 4
}
void m(y)     // y ~ to &a
{
   a = 1;
   a = y - a;  //*y =3  a=2
   n(a);
   printf(a);     // 4     so output: 4 4
}
void main()
{
   m(a);           //a ~ to &a
}
*/

/* Recursion */

// 1) Direct Recursion

#include <stdio.h>
int fun(int n)
{
    if (n == 1)
        return 1;
    else
        return 1 + fun(n - 1);
}
int main()
{
    int n = 3;
    printf("%d", fun(n)); // Output: 3
    return 0;
}

#include <stdio.h>
int fun(int n)
{
    if (n == 0)
        return 1;
    else
        return 7 + fun(n - 2);
}
int main()
{
    printf("%d", fun(4));   //15
    return 0;
}

/* Factorial */
#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    printf("\nEnter the non-negative number:");
    scanf("%d", &n);
    printf("Factorial of %d is:%d", n, fact(n));
    return 0;
}

/*wap to print no.c from 1 to 10(n=10) in such a way that when
no. is odd, add 1 and when no. is even, subtract 1*/
#include <stdio.h>
int fun(int n)
{
    if (n % 2 == 0)
        return n - 1;
    else
        return n + 1;
}
int main()
{
    int n=10;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fun(i));
    }
    return 0;
}

/* same program using Indirect recursion */

#include <stdio.h>
void odd();
void even();
int n = 1;
int main()
{
    odd();
    return 0;
}
void odd()
{
    if (n <= 10)
    {
        printf("%d ", n + 1);
        n++;
        even();
    }
    return;
}
void even()
{
    if (n <= 10)
    {
        printf("%d ", n - 1);
        n++;
        odd();
    }
    return;
}

/* Tail recursion */

#include <stdio.h>
void fun(int n)
{
    if (n == 0)
        return;
    else
        printf("%d ", n);    //output:3 2 1
    return fun(n - 1);
}
int main()
{
    fun(3);
    return 0;
}

/* Non- tail recursive */
#include <stdio.h>
void fun(int n)
{
    if (n == 0)
        return;
    fun(n - 1);
    printf("%d ", n);    // output: 1 2 3
}
int main()
{
    fun(3);
    return 0;
}

#include <stdio.h>
int fun(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + fun(n / 2);
}
int main()
{
    printf("%d", fun(8));    // output: 3
    return 0;
}

#include <stdio.h>
int fun(int n)
{
    int x = 1, k;
    if (n == 1) return x;
    for (k = 1; k < n; ++k)
        x = x + fun(k) * fun(n - k);
    return x;
}
int main()
{
    printf("%d ",fun(5));  //output:51
    return 0;
}

#include <stdio.h>
void count(int n)
{
    static int d = 1;
    printf("%d ", n);
    printf("%d ", d);
    d++;
    if (n > 1)
        count(n - 1);
    printf("%d ", d);  //Output: 3 1 2 2 1 3 4 4 4 
}
int main()
{
    count(3);
    return 0;
}

