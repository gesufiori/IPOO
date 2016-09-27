#include<stdio.h>
#include <stdio.h>

int main()
{
	int c,n1,t1,s1;
	n1=0;
	t1=0;
	s1=0;
	while((c=getchar())!=EOF)
		if(c=='\n')
			++n1;
		else if (c=='\t')
			++t1;
		else if (c==' ')
			++s1;
	printf("saltos de linea: %d\ntabulaciones: %d\nespacios: %d\n",n1,t1,s1);
}
