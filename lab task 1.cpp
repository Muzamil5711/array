#include<stdio.h>
void input(int a[],int);
void out(int a[],int);
main ()
{
int n=5;
//printf("Enter a number of elements =")
	int a[n];
	
	input(a,n);
	
	out(a,n);
	
}
void input(int a[],int n){
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void out(int a[],int n)
{
for(int i=0;i<n;i++){
	printf(".............\n");
	printf("%d\n",a[i]);
}	
}
