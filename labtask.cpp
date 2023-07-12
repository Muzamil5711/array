#include<stdio.h>
int main ()
{
	int num=3;
	int a[num];
	for(int i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	int index=a[0];
	for(int i=0;i<num;i++){
		if(a[i]>index)
		index=i;
	}
	printf(" ans %d ",index);
}
