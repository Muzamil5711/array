#include<stdio.h>

#define num 10 
int main ()
{
	int arrnum;
	printf("Enter a number ,for arrays elements =");
	scanf("%d",&arrnum);
	int arr[arrnum];
	
	for(int i=0;i<arrnum;i++){
		
		scanf("%d",&arr[i]);
	}
	int count[num]={0};
	
	for(int i=0;i<arrnum;i++){
		count[arr[i]]++;
	}
	for(int i=0;i<num;i++){
		if (count[i]>0)
		printf("%d occurs %d times \n ",i,count[i]);
	}
	
}
