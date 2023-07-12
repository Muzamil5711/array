#include<stdio.h>
int main ()
{
	int num=5,a[num];
	for(int i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	
	
	for(int i=0;i<num;i++)
	{ int count =0;
		for(int j=0;j<=9;j++)
		{
			if(a[i]==j)
		{
				count++;}
		}
		if (count)
		printf("\n %d occurs %d times",a[i],count);
		
		else printf("Not ");
	}
}
