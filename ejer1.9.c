#include <stdio.h>

int main()
{
    int c, s1;
    s1=0;
    while ((c=getchar())!=EOF)
    {
        if (c!=' ' || s1!=' ')
            putchar(c);
        s1=c;
    }
}
