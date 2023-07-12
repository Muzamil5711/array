#include<stdio.h>
int main ()
{
	int num=10,a[num],j=0;
	for(int i=0;i<num;i++){
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<=num;i++){
		if(a[i]==a[num-1-i]);
	j++;
	}
	if(j==5)
	printf("palindrome");
	else 
	printf("not palindrome");
}
