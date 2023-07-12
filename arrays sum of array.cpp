#include<stdio.h>
void input( int n);

main (){
	int n;
printf("Enter a number for total number of elements =");
scanf("%d",&n);
input(n);	
}

void input(int n)

{
int a[n];int b[n];
	int c[n];
	for(int i=0;i<n;i++){
		printf("Array of first \n")
		;scanf("%d",&a[i]);
		printf("Array of second\n");
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
	}
	for(int j=0;j<n;j++){
		printf("%d ",c[j]);
	}
}

