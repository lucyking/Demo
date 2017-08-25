#include <stdio.h>
int fx(int i);
int main()
{
	int i = 0;
	while(i<10)
	{
		printf("%x %d %d\n",&i,i,i*i);
		i=i+1;
	}
	fx(5);
}

int fx(int val)
{
	printf("%d %d\n",val,val&(val<<1));
	return 0;
}
