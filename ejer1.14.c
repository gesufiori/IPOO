#include <stdio.h>

int main()
{
    int c,d;

    while ((c=getchar())!=EOF)
    {
        if (c!='\n')
        {
            for (d=0;d<c;++d)
                putchar('*');
            putchar('\n');
        }
    }
}
