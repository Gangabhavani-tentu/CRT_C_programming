#include<stdio.h>
int main()
{
	int a,b,c,i,output;
	int count=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=c;i++)
	{
		count=count+(a*i);
	}
	if(count>b)
	{
		output=count-b;
		printf("%d",output);
	}
	else
	{
		printf("0");
	}
}
