#include<stdio.h>
void search(int a[]);
int main ()
{
	int num=10,a[num];
	
for(int i=0;i<num;i++){
	scanf("%d",&a[i]);
}	
search(a);
}
void search(int a[]){
	int num,res=0;
	printf("Enter a search number ");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		if(num==a[i])
		res=i;
	
		
	}
	if(res!=0)
	printf("%d is index and number is %d",res,num);
	else printf("-1");
	
}
