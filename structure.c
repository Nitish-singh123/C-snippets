/* Structure in Global scope */

// #include <stdio.h>
// struct
// {
//     char *engine;
// } car1, car2;
// void main()
// {
//     car1.engine = "DDis 190 Engine";
//     car2.engine = "1.2 L kappa Dual VTVT ";
//     printf("%s\n", car1.engine);
//     printf("%s", car2.engine);
// }

/* Structure in Local scope */

// #include <stdio.h>
// struct
// {
//     char *name;
//     int age;
//     int salary;
// } emp1, emp2;

// int manager()
// {
//     struct
//     {
//         char *name;
//         int age;
//         int salary;
//     } manager;
//     manager.age = 27;
//     if (manager.age > 30)
//         manager.salary = 65000;
//     else
//         manager.salary = 55000;
//     return manager.salary;
// }
// void main()
// {
//     printf("Enter the salary of employee1:");
//     scanf("%d", &emp1.salary);
//     printf("Enter the salary of employee2:");
//     scanf("%d", &emp2.salary);
//     printf("Employee 1 salary is: %d\n", emp1.salary);
//     printf("Employee 2 salary is: %d\n", emp2.salary);
//     printf("Manager's salary is: %d", manager());
// }

// /* structure tag */

// #include <stdio.h>
// struct employee
// {
//     char *name;
//     int age;
//     int salary;
// } emp1, emp2;

// int manager()
// {
//     struct employee manager;    // structure tag
//     manager.age = 27;
//     if (manager.age > 30)
//         manager.salary = 65000;
//     else
//         manager.salary = 55000;
//     return manager.salary;
// }
// void main()
// {
//     // struct employee emp1;
//     // struct employee emp2;
//     printf("Enter the salary of employee1:");
//     scanf("%d", &emp1.salary);
//     printf("Enter the salary of employee2:");
//     scanf("%d", &emp2.salary);
//     printf("Employee 1 salary is: %d\n", emp1.salary);
//     printf("Employee 2 salary is: %d\n", emp2.salary);
//     printf("Manager's salary is: %d", manager());
// }

/* using typedef */

// struct car
// {
//     char engine[50];
//     int seating_cap;
// } c1;

// struct car{
//     char engine[50];
//     int seating_cap;
// };
// int main(){
//     struct car c1;
// }

// typedef struct car        // old type
// {
//     char engine[50];
//     int seating_cap;
// } car;      // new type
// void main()
// {
//     car c1;
// }

/* initializing structure variable and accessing members */

// struct abc
// {
//     int p, q;
// };
// void main()
// {
//     struct abc x = {23, 34};
// }

// typedef struct abc
// {
//     int p, q;
// } c1;
// void main()
// {
//     c1 x = {23, 34};
// }

// struct car
// {
//     int fuel_tank_cap;
// } c1, c2;
// void main()
// {
//     c1.fuel_tank_cap = 45;
//     c2.fuel_tank_cap = 30;
//     printf("%d %d", c1.fuel_tank_cap, c2.fuel_tank_cap);
// }

/* Designated initialization */

// #include<stdio.h>
// struct abc
// {
//     int x, y, z;
// };
// void main()
// {
//     struct abc a = {10,20,30};
//     printf("%d %d %d", a.x, a.y, a.z);
// }

// #include<stdio.h>
// typedef struct abc
// {
//     int x, y, z;
// }c1;
// void main()
// {
//     c1 a = {10,20,30};
//     printf("%d %d %d", a.x, a.y, a.z);
// }

// #include <stdio.h>
// struct abc
// {
//     int x, y, z;
// };
// void main()
// {
//     struct abc a = {.y = 20, .x = 10, .z = 30};
//     printf("%d %d %d", a.x, a.y, a.z);
// }

// /* Declaring Array of structure */
// #include <stdio.h>
// struct car{
//     int fuel_tank_cap;
//     int seating_cap;
//     float city_mileage;
// };
// void main(){
//     struct car c[2];
//     int i;
//     for (i = 0; i < 2; i++)
//     {
//         printf("Enter the car %d fuel tank capacity:", i + 1);
//         scanf("%d", &c[i].fuel_tank_cap);
//         printf("Enter the car %d seating capacity:", i + 1);
//         scanf("%d", &c[i].seating_cap);
//         printf("Enter the car %d city mileage:", i + 1);
//         scanf("%f", &c[i].city_mileage);
//     }
//     printf("\n");
//     for (i = 0; i < 2; i++)
//     {
//         printf("\nCar %d details:\n", i + 1);
//         printf("fuel tank capacity:%d\n", c[i].fuel_tank_cap);
//         printf("seating capacity:%d\n", c[i].seating_cap);
//         printf("city mileage: %f\n", c[i].city_mileage);
//     }
// }

/* Accessing members of structure using structure pointer */

// #include <stdio.h>
// struct abc
// {
//     int x, y;
// };
// void main()
// {
//     struct abc a = {0, 1};
//     struct abc *ptr = &a;            // ptr=&a
//     printf("%d %d\n", ptr->x, ptr->y); // ptr->= (*ptr).x= a.x
// }

/* structure padding  in 32 bits architecture*/

// #include<stdio.h>
// struct abc{
//     char a;
//     char b;
//     int c;
// };
// void main()
// {
// struct abc var;
// printf("%d",sizeof(var));     // 8
// }

// #include<stdio.h>
// struct abc{
//     char a;
//     int b;
//     char c;
// }var;
// void main()
// {
// printf("%d",sizeof(var));     // 12
// }

/* structure packing */

// #include <stdio.h>
// #pragma pack(1) // saves memory size but wastes cpu cycle
// struct abc
// {
//     char a;
//     int b;
//     char c;
// } var;
// void main()
// {
//     printf("%d", sizeof(var)); // 6
// }

// #include <stdio.h>
// struct point
// {
//     int x, y, z;
// };
// void main()
// {
//     struct point p1 = {.y = 0, .z = 1, .x = 2};
//     printf("%d %d %d",p1.x,p1.y,p1.z);  // 2 0 1
// }

// #include <stdio.h>
// struct Ournode
// {
//     char x, y, z;
// };
// void main()
// {
//     struct Ournode p = {'1', '0', 'a'+2};  // a=97 99=c
//     struct Ournode *q = &p;
//     printf("%c, %c", *((char *)q + 1), *((char *)q + 2));   // 0, c
// }


// struct node
// {
//     int i;
//     float j;
// };
// struct node *s[10];














