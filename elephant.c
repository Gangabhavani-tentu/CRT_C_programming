#include<stdio.h>
int main()
{
	int a,b,d;
	scanf("%d", &a);
	if(a>0 && a<5)
	{
		b=1;
	}
	else
	{
		b=a/5;
		d=a%5;
		if(d==1 || d==2 || d==3 || d==4)
		{
			b=b+1;
		}
	}
	printf("%d",b);	
}
