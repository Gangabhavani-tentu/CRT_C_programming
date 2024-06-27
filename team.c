#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	int count=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d", &a,&b,&c);
		if(a==1 && b==1 && c==1 || a==1 && b==1 && c==0 || a==0 && b==1 && c==1 || a==1 && b==0 && c==1)
		{
			count=count+1;
		}
		else
		{
			count=count;
		}
	}
	printf("%d",count);
}
