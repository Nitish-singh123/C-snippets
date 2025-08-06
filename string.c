/* string literals(constant)*/

// #include <stdio.h>
// void main()
// {
//     printf("%s", "Hello everyone!");
// }

// #include <stdio.h>
// void main()
// {
//     // printf("%s\n", "Nitish Singh. \ 
//     //     --Maahi jha");

//     printf("%s", "Nitish Singh. "
//                  "Maahi jha");
// }

/* String copy */

// #include <stdio.h>
// void main()
// {
//     char s[5] = "Hello";
//     char t[5];
//      int i;
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         t[i] = s[i];
//     }
//     printf("%s", t);    /* undefined behavior */
// }

// #include <stdio.h>
// void main()
// {
//     char s[6] = "Hello";
//     char t[6];
//     int i;
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         t[i] = s[i];
//     }
//     t[i] = '\0';
//     printf("%s", t);
// }

/* So Omitting the lenght */

// /* writing srting using printf */

// #include <stdio.h>
// void main()
// {
//     char *s = "Hello World!";
//     printf("%.5s\n", s);
//     printf("%6.5s", s);
// }

// /* using Puts()*/

// #include <stdio.h>
// void main()
// {
//     char *s = "Hello";
//     puts(s);
//     puts(s);
// }

/* Reading string using scanf( ignores white spaces and then  stops ) */

// #include <stdio.h>
// void main()
// {
//     char a[10];
//     printf("Enter the string:\n");
//     scanf("%s", a);
//     printf("%s", a);
// }

// #include <stdio.h>
// void main()
// {
//     char a[10];
//     printf("Enter the string:\n");  //youaremostwelcome
//     scanf("%9s", a);
//     printf("%s", a);                //youaremos
// }

// /* using gets() */

// #include <stdio.h>
// void main()
// {
//     char a[10];
//     printf("Enter the string:\n"); // if the input is YOU ARE MOST WELCOME then the program may crash bcz of array size but not now
//     gets(a);
//   printf("%s", a);
// }
/* gets() function is unsafe so not to use  */

/* Designing our own input function using getchar() */

// #include <stdio.h>
// int input(char str[], int n)
// {
//     int ch, i = 0;
//     while ((ch = getchar()) != '\n')
//         if (i < n)
//             str[i++] = ch;
//     str[i] = '\0';
//     return i;
// }
// void main()
// {
//     char str[100];
//     int n = input(str, 5);     // is the input is Hello,Hoe are you?
//     printf("%d %s", n, str);  //  5 Hello
// }

// /* putchar() */

// #include <stdio.h>
// void main()
// {
//     int ch;
//     for (ch = 'A'; ch <= 'Z'; ch++)
//     putchar(ch);
// }

/* strcpy() function */

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[10] = "Hello";
//     char str2[10];

//     printf("%s\n", strcpy(str2, str1)); // Hello
//     printf("%s", str2);                 // Hello
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[10] = "Hello";
//     char str2[10];
//     char str3[10];

//     strcpy(str3, strcpy(str2, str1));
//     printf("%s %s", str2, str3);   // Hello Hello
// }

/* strncpy() function  ignores to fill \0 while copying*/

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[6] = "Hello";
//     char str2[4]; // may show undefined behavior but actually not
//     strcpy(str2, str1);
//     printf("%s", str2);
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[6] = "Hello";
//     char str2[4];
//     strncpy(str2, str1, sizeof(str2));
//     printf("%s", str2);      // Hell    but shows an undefined behavoir
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[6] = "Hello";
//     char str2[5];
//     strncpy(str2, str1, sizeof(str2));
//     // str2[sizeof(str2 - 1)] = '\0';    //Hell
//     printf("%s", str2);     // Hello
// }

/* strlen() function */
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *str = "Hello World";  // *str=str[]=str[100]
//     printf("%d", strlen(str));    // 11
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[100], str2[100];
//     strcpy(str1, "Welcome to ");
//     strcpy(str2, "Our Academy");
//     strcat(str1, str2);
//     printf("%s", str1);  // Welcome to Our Academy
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[100], str2[100];
//     strcpy(str1, "Welcome to ");
//     strcpy(str2, "Our Academy");
//     strcat(str1, str2);
//     printf("%s", str1);  // Welcome to Our Academy
// }

/* Strncat() function adds null character at the end of the resultant string  */

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str1[5], str2[100];
//     strcpy(str1, "He");
//     strcpy(str2, "ll0!");
//     strncat(str1, str2,sizeof(str1)-strlen(str1)-1);  // Hell
//     printf("%s", str1);
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *s1 = "abcd";
//     char *s2 = "abce";
//     if (strcmp(s1, s2) < 0)
//         printf("s1 is less than s2");// output
//     else
//         printf("s1 is greater than or equal to s2");
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *s1 = "abcd";
//     char *s2 = "bbce";
//     if (strcmp(s1, s2) < 0)
//         printf("s1 is less than s2");// output
//     else
//         printf("s1 is greater than or equal to s2");
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *s1 = "bace";  // or char *s1=abce
//     char *s2 = "abce";
//     if (strcmp(s1, s2) < 0)
//         printf("s1 is less than s2");
//     else
//         printf("s1 is greater than or equal to s2"); // output
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *s1 = "abc";
//     char *s2 = "abcd";
//     if (strcmp(s1, s2) < 0)
//         printf("s1 is less than s2");  // output
//     else
//         printf("s1 is greater than or equal to s2"); // output
// }

// /* Array of string */

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *fruits[] = {"2 Oranges", "2 Apples", "3 Bananas", "1 Pineapple"};
//     if (strcmp(fruits[1], fruits[2]) < 0)
//         printf("%s are lesser than %s", fruits[1], fruits[2]);   // 2 Apples are lesser than 3 Bananas
//     else if (strcmp(fruits[1], fruits[2]) >0)
//         printf("%s are greater than %s", fruits[1], fruits[2]);
// }

// /* output :  No output is printed */
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char p[20];
//     char *s = "string";    // last position is automatically filled with null character
//     int length = strlen(s);
//     int i;
//     for (i = 0; i < length; i++)
//         p[i] = s[length - i];
//     printf("%s", p);
// }

// /* Output : 2011 */
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char c[] = "GATE2011";
//     char *p = c;
//     printf("%s", p + p[3] - p[1]);   // 1000+E-A=1000+69-65=2011
// }

// /* output: DCBA*/

// #include <stdio.h>
// #include <string.h>
// void foo(char *a)
// {
//     if (*a && *a !=' ')
//     {
//         foo(a + 1);
//         putchar(*a);
//     }
// }
// void main()
// {
//     char c[] = "ABCD EFGH";
//     foo(c);
// }

// /* output is: Hi BYE BYE Hi */
// #include <stdio.h>
// void fun1(char *s1, char *s2)
// {
//     char *tmp;
//     tmp = s1;
//     s1 = s2;
//     s2 = tmp;
// }
// void fun2(char **s1, char **s2)
// {
//     char *tmp;
//     tmp = *s1;
//     *s1 = *s2;
//     *s2 = tmp;
// }
// void main()
// {
//     char *str1 = "Hi", *str2 = "BYE";
//     fun1(str1, str2); printf("%s %s", str1, str2);
//     fun2(&str1, &str2); printf("%s %s", str1, str2);
// }


// /* Output is :2 */
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char *c = "GATECSIT2017";
//     char *p = c;
//     printf("%d", (int)strlen(c + 2 [p] - 6 [p] - 1));     // 2[p] = *(2+p)   (int represent type casting )
// }                                                          // strlen returns a size  t_type data 




























