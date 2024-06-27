#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d", &a);
	if(a%2!=0 || a==2)
	{
		printf("NO");
	}
	else
	{
		b=a/2;
		if(b%2==0)
		{
			printf("YES");
		}
		else
		{
			c=b-1;
			d=b+1;
			if(c%2==0 && d%2==0)
			{
				printf("YES");
			}
		}
	}
	
}
