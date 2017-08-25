#include <stdio.h>
int main()
{
	int i = 0;
	while(i<10)
	{
		printf("%x %d %d\n",&i,i,i*i);
		i=i+1;
	}
}
