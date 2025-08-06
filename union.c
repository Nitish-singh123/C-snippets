// #include<stdio.h>
// union abc{
//     int a;
//     char b;
//     double c;
//     float d;
// };
// void main()
// {
// printf("%ld",sizeof(union abc));  // 8
// }

/* Accessing members using pointers */

// #include<stdio.h>
// union abc{
//     int a;
//     char b;
// }var;
// void main()
// {
//     // union abc var;
//     var.a=90;
//     union abc *p=&var;
//     printf("%d %c",p->a,p->b);   // 90 Z
// }

// struct{
//     short s[5];         // 5x2=10 bytes
//     union{
//         float y;       // +
//         long z;       // 8 bytes for union
//     }u;
// }t;        // 18 bytes for struct

/* printing the size of structure */

// #include <stdio.h>
// #pragma pack(1)
// struct store
// {
//     double price;
//     char *title;
//     char *author;
//     int num_pages;
//     int color;
//     int size;
//     char *design;
// }book;
// void main(){
//     // struct store book;
//     printf("%ld bytes",sizeof(book));  // 44 bytes but showing 32
// }

/* Application of union */

// #include<stdio.h>
// #pragma pack(1)
// struct store{
//     double price;
//     union{
//         struct{
//             char *title;
//             char *author;
//             int num_pages;
//         }book;
//         struct{
//             int color;
//             int size;
//             char *design;
//         }shirt;
//     }item;
// }s;
// void main()
// {
//     s.item.book.title=" Nitish ";
//     s.item.book.author=" Sonali";
//     s.item.book.num_pages=197;
//     printf("%s\n",s.item.book.title);  // Nitish
//     printf("%ld",sizeof(s));           // 20
// }

/* Array containing mixed type data */
// /* if we use struct then we will waste a lot memory so preferd one is union */

// #include <stdio.h>
// typedef union
// {
//     int a;
//     char b;
//     double c;
// } data;
// void main()
// {
//     data arr[10];
//     arr[0].a = 10;
//     arr[1].b = 'a';
//     arr[2].c = 10.178;
// }

/* Enumeration(enum) in C */

// #include<stdio.h>
// enum Bool {False,True};
// void main()
// {
//     enum Bool var;
//     var=True;
//     printf("%d", var);          // 1
// }

// #include<stdio.h>
// enum Bool {True,False};
// void main()
// {
//     enum Bool var;
//     var=True;
//     printf("%d", var);          // 0
// }

/* Enums can be declared in the local scopes
   Enums names are automatically initialized by the compiler */

// #include <stdio.h>
// void main()
// {
//     enum bool {False,True} var;   // same as like structure tag name
//     var = True;
//     printf("%d", var);          // 1
// }

// #include <stdio.h>
// void main()
// {
//     enum point {x = 0, y = 0, z = 0};
//     printf("%d %d %d", x, y, z);  // 0 0 0
// }

// #include<stdio.h>
// void main()
// {
// enum point {y=2,x=34,t,z=0};
// printf("%d %d %d %d",x,y,z,t);  // 34 2 0 35
// }

// #include<stdio.h>
// void main()
// {
// enum point {x=34,y=2.5,z=0};      // float value is not allowed
// printf("%d %d %d",x,y,z);
// }

// #include<stdio.h>
// void main()
// {
// enum point1 {x=34, y=2,  z=0};
// enum point2 {x=4,  p=25, q=1};  // Redeclaration of enumerator 'x'
// printf("%d %d %d %d %d",x,y,z,p,q);
// }

// /* Calculating area of rectangle using structure */
// #include <stdio.h>
// struct point
// {
//     int x, y;
// };
// struct rect
// {
//     struct point upr_left;
//     struct point lwr_right;
// } r;
// int area(struct rect r)
// {
//     int length, breadth;
//     length = r.lwr_right.x - r.upr_left.x;
//     breadth = r.upr_left.y - r.lwr_right.y;
//     return length * breadth;
// }
// void main()
// {
//     printf("Enter the upper left coordinates of rectangle:\n");
//     scanf("%d %d", &r.upr_left.x, &r.upr_left.y);
//     printf("Enter the lower right coordinates of the rectangle:\n");
//     scanf("%d %d", &r.lwr_right.x, &r.lwr_right.y);
//     printf("Area of the rectangle is: %d", area(r));
// }

/* case of packing ( leaves no holes)*/

// struct{
//     double a;
//     union{
//         char b[4];
//         double c;
//         int d;
//     }e;
//     char f[4];
// }s;                  // s will allocate 20 bytes sapces

// union{
//     double a;     // 8
//     struct{
//         char b[4];
//         double c;
//         int d;
//     }e;           // 4+8+4=16 bytes
//     char f[4];   // 4
// }u;                  // u will allocate 16 bytes sapces

#include <stdio.h>
#pragma pack(1)
struct
{
    double a;
    union
    {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;

union
{
    double a; // 8
    struct{
        char b[4];
        double c;
        int d;
    } e;       // 4+8+4=16 bytes
    char f[4]; // 4
} u;           // u will allocate 16 bytes sapces

void main()

{
    printf("%ld %ld", sizeof(s), sizeof(u)); // 20 16
}
