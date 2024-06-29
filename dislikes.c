#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int count=0;
		int i=1;
		while(1)
		{
			if(i%3!=0 && i%10!=3)
			{
				count++;
				if(count==n)
				{
					printf("%d\n",i);
					break;
				}
			}
			i++;
		}
	}
	return 0;
}
