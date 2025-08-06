#include<stdio.h>
int main()
{
    printf("Hello_World!");
    return 0;     // 'N' character can be written alphabetical
}

#include <stdio.h>
int main()
{
    printf("%d", sizeof(int)); //unary operator, size of integer is of 4 bytes
    return 0;
}

#include<stdio.h>
int main(){
    printf("%d",printf("%s","Hello World!"));
    return 0;
}

#include <stdio.h>
int main()
{
    printf("%s\n", "Hello");
    printf("%10s", "Hello");
    return 0;
}

#include <stdio.h>
int main()
{
    char c = 255;
    c = c + 10;     // c=265 which is exceeding ASCII table's range so it follows 2^n rule  where n=8 bits for char
    printf("%d", c);// 265 % 2^8=9,so c=9 as reminder
    return 0;
}

#include <stdio.h>
int main()
{
    unsigned i = 1;
    int j = -4;
    printf("%u", i + j); // internal representation of -3 using 2's complement, integer value depends from machine to machine
    return 0;            // if %d then ans will be -3
}

/* Scope of the variable */
#include <stdio.h>
int main()
{
    int var = 34;
    printf("%d", var);
    return 0;
}

/* Local variable */
#include <stdio.h>
int main()
{
    int var = 3;
    {
        int var = 4;
        printf("%d\n", var);
    }
    printf("%d", var);
    return 0;
}

/*Global Variable */
#include <stdio.h>
int fun();
int var = 10;

int main()
{
    int var = 3;
    printf("%d\n", var);
    fun();
    return 0;
}

int fun()
{
    printf("%d", var);
}

#include <stdio.h>
extern int a;     // Ran on codeblocks
int main()
{
    printf("%d", a);
    return 0;
}

#include<stdio.h>
int a=9;
int main()
{
    extern int a;
    printf("%d", a);
return 0;
}

#include <stdio.h>
extern int a = 9;
int main()
{
    printf("%d", a);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("%d", value); //1
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    printf("%d", value); //3
    return 0;
}

#include<stdio.h>
#define add(x,y) x+y
int main()
{
printf("addition of two no.s:%d",add(4,3));
return 0;
}

#include <stdio.h>
#define greater(x, y)                          \
    if (x > y)                                 \
        printf("%d is greater than %d", x, y); \
    else                                       \
        printf("%d is greater than %d", y, x);
int main()
{
    greater(5, 6);
    return 0;
}

/* First expansion then evaluation */
#include <stdio.h>
#define add(x, y) x + y
int main()
{
    printf("result of expression a*b+c is:%d", 5 * add(4, 3));
    return 0;
}

/*some predefined macros like __DATE__,__TIME__ can print the current date and time */
#include <stdio.h>
int main()
{
    printf("Date:%s\n", __DATE__);
    printf("Time:%s\n", __TIME__);
    return 0;
}

#include <stdio.h>
int main()
{
    int var = 4;
    var = 5;
    printf("%d", var);   //var =5
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     const int var = 4;
//     var = 5;
//     printf("%d", var);   //will get an error
//     return 0;
// }

#include <stdio.h>
int main()
{
    int var = 052;  //octal no.
    printf("var = %d", var); // var=42
    return 0;
}

#include <stdio.h>
int main()
{
    int var = 052;
    printf("var = %o", var);  //var=52
    return 0;
}

#include <stdio.h>
#define STRING "%s\n"
#define hero "Welcome to hero Academy!"
int main()
{
    printf(STRING, hero);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two no.s:\n");
    scanf("%d%d", &a, &b);
    printf("%d+%d = %d", a, b, a + b);
    return 0;
}

#include <stdio.h>
int main()
{
    int var = 0x43ff;  //either capital or small ans is also
    printf("%x", var); // X or x ans 43ff hexad.
    return 0;
}

#include <stdio.h>
int main()
{
    int var = 0x43ff;
    printf("%d", var); //17407
    return 0;
}

#include <stdio.h>
static int i; // bss segment
static int i = 27;   //data segment
static int i;    //same thing before or after
int main()
{
    static int i;
    printf("%d", i); // ans 0 as preference is for local variable
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two no.s:\n");
    scanf("%d%d", &a, &b);
    printf("%d/%d=%d\n", a, b, a / b);
    printf("%d%%%d=%d", a, b, a % b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 2, b = 3, c = 4, d = 5;
    printf("%d*%d/%d=%d\n",a,b,c,a * b / c);
    printf("%d+%d-%d=%d\n",a,b,c, a + b - c);
    printf("%d+%d*%d-%d%%%d=%d",a,b,d,c,a, a + b * d - c % a);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    printf("%d", a++ + b); //ans 7
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    printf("%d", a + ++b); // ans 8
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a = 4, b = 3;
//     printf("%d", a++ ++ +b);   //ans Error
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a = 5, b = 3;
    int incr = (a < b) && (b++);
    printf("%d\n", incr);     // 0
    printf("%d", b);         //3
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 5, b = 3;
    int incr = (a > b) && (b++);
    printf("%d\n", incr);     // 1
    printf("%d", b);         // 4
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 5, b = 3;
    int incr = (a > b) || (b++);
    printf("%d\n", incr);     // 1
    printf("%d", b);         // 3
    return 0;
}

#include <stdio.h>
int main()
{
    char x = 1, y = 2; // x=1(0000 0001),y=2(0000 0010)
    if (x & y)         // 1&2= means false (0000 0000)
        printf("Result of x&y is 1");
    if (x && y)
        printf("Result of x&&y is 1"); // 1&&2=TRUE && TRUE =TRUE=1
    return 0;
}

/*left shift operator */
#include <stdio.h>
int main()
{
    char var = 3;  //Note 3 in binary=0000 0011
    printf("%d", var << 1);  //ans= 6[3x2^1](0000 0110) trilling position filled with 0
    return 0;                //left shifting is equivalent to  multiplication by var x 2^rightoperand
}

#include <stdio.h>
int main()
{
    char var = 3;
    printf("%d", var << 4); //ans= 3x2^4=48
    return 0;
}

/*Right shift operator */
#include <stdio.h>
int main()
{
    char var = 3; //(0000 0011)
    printf("%d", var >> 1); //ans=1 (0000 0001)
    return 0;                  //or [3/2^1=1.5]
}

#include <stdio.h>
int main()
{
    char var = 32;  //write char or int same as value is integer
    printf("%d", var >> 4); // ans =32/2^4=2
    return 0;
}

/* use case of XOR (4^3) SAME SAME 0 ELSE 1 */
#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR,a=%d and b=%d", a, b); //a=3 and b=4
    return 0;
}

#include <stdio.h>
int main()
{
    char a = 7;
    a ^= 5;
    printf("%d", printf("%d", a += 3)); /*inner one prints 5 and returns 1 so ans =51*/
    return 0 ;
}

#include <stdio.h>
int main()
{
    int var = 75;
    int var2 = 56;
    int num;
    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
    printf("%d", num); //ans =65
    return 0;
}

#include <stdio.h>
int main()
{
    int a = (3, 4, 8);
    printf("%d", a);   //ans 8
    return 0;
}

#include <stdio.h>
int main()
{
    int var = (printf("%s\n", "HELLO!"), 5);
    printf("%d", var); // output HELLO!
                       //        5

    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    a = 3, 4, 8;
    printf("%d", a); // ans=3
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a = 3, 4, 8; // int a=3;int 4;int 8;
//     printf("%d", a); // output error
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a = (3, 4, 8);
    printf("%d", a);  //ans 8
    return 0;
}

#include <stdio.h>
int main()
{
    int var;
    int num;
    num = (var = 15, var + 35);
    printf("%d", num);  //ans 50
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    if (a <= b == d > c)
    {
        printf("TRUE");    //ans is TRUE
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}

#include <stdio.h>
int fun1()
{
    printf("HERO");
    return 1;
}
int fun2()
{
    printf("Academy");
    return 1;
}
int main()
{
    int a;
    a = fun1() + fun2();
    printf("%d", a);       //cannot say ; undefined
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10 / 2 * 5;
    printf("%d", a);    //ANS 25
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10 + 2 - 5;
    printf("%d", a);     //ANS 7
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 5;
    int var = sizeof(i++);
    printf("%d %d", i, var); // 5 4
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    printf("%d %d %d %d ", d, c, b, a);  //ans 1 1 0 1
    return 0;
}

#include <stdio.h>
int var = 5;
int main()
{
    int var = var;
    printf("%d", var); //ans garbage value
    return 0;
}

#include <stdio.h>
int main()
{
    unsigned int var = 10;
    printf("%d", ~var);  // ans -11, using 2's complement
    return 0;
}

/*Loops*/
// example of while loop
#include <stdio.h>
int main()
{
    int i;
    i = 3;
    while (i > 0)
    {
        printf("%d ", i);
        i--;
    }
    return 0;
}

// for loop
#include <stdio.h>
int main()
{
    for (int i = 3; i > 0; i--)
    {
        printf("%d ", i);
    }
    return 0;
}

//Do while loop
#include <stdio.h>
int main()
{
    int i = 3;
    do
    {
        printf("%d ", i);
        i--;
    } while (i > 0);
    return 0;
}

/* wap which allows user to enter an integer until he/she enters a value zero */
// using while loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    while (n != 0)
    {
        printf("Enter an integer:\n");
        scanf("%d", &n);
    }
    printf("You are out of the loop");
    return 0;
}

// using do-while
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter an integer:\n");
        scanf("%d", &n);
    } while (n != 0);
    printf("You are out of the loop");
    return 0;
}

/* use case of break and continue*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n < 0)
            break;
        printf("Enter a number\n");
        scanf("%d", &n);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i, n = 2;
    for (i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 1024;  //(1024 ~ 2^10=100 0000 0000)
    for (; i; i >>= 1)
        printf("Hello World!\n"); //ans 11 times will print
    return 0;
}

#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i += 5;
        case 1:
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }
        printf("%d ", i); // 16 21
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i = -5;
    while (i <= 5)
    {
        if (i >= 0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("HERO");   // 0 times
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 0;
    for (printf("one\n"); i < 3 && printf(""); i++)
    {
        printf("Hi!\n");
    }
    return 0;       //output one
}


/* we know that size of unsigned int is of 4 bytes and its range lies from 0 to 4294967295, exceeds the range then
 again it will come to 0 as i++*/

#include <stdio.h>
    int main()
{
    unsigned int i = 500;
    while (i++ != 0);
    //  {

    //  };
    printf("%d", i); // 1
    return 0;
}
