#include<stdio.h>
int main()
{
	int ch =0;
	while((ch=getchar())!=EOF)//ctrl+z
		putchar(ch);
	return 0;
}