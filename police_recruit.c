#include<stdio.h>
int main()
{
	int n,p=0,unsolved=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int event;
		scanf("%d",&event);
		if(event==-1)
		{
			if(p>0)
			{
				p--;
			}
			else
			{
				unsolved++;
			}
		}
		else
		{
			p=p+event;
		}
	}
	printf("%d",unsolved);
}
