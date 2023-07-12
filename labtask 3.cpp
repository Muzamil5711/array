#include<stdio.h>
int main ()
{
	int num=5;
	int a[num];

for(int i=0;i<num;i++){
	scanf("%d",&a[i]);   
}	
int large=a[0],large2=a[0];
for(int i=0;i,num;i++)
{
	if(a[i]>large){
	
	large=a[i];}
	if(a[i]>large2 &&large2!=large)
	large2=a[i];
	}
printf("%d is large in array",large);
}

