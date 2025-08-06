int a = 5;


int increment()
{
    int c = 0;
    c++;
    return c;
}


int c;
int increment()
{
    c++;
    return c;
}


static int c;     /** value is defined within the particular function or scope only */
int increment()
{
    c++;
    return c; //ans 3
}



int increment()
{
    static int c; /*initialize by 0 if not static then it will stores some garbage

                  value using static so c variable doesn't destroyed  */
    c++;
    return c;   // ans 3
}


int c;
int increment()
{
    static int c=3;  //static only stores constant values
    c++;
    return c;  //ans 6
}
