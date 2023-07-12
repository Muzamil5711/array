#include<stdio.h>
int main ()
{
	int num =5;
	int a[num];
	for (int i=0;i<num;i++){
		scanf("%d",&a[i]);
	}

/*	for(int i=0;i<num;i++){
		int s=a[i];
		int si=i;
		for(int j=i+1;j<num;j++){
			if(a[j]<s)
		{
		
		s=a[j];
		si=j;}}
		int t=a[si];
		a[si]=a[i];
		a[i]=t;
	}
	*/
	for (int i=0;i<num;i++){
		for (int j=0;j<num-1-i;j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for (int i=0;i<num;i++){
		printf("%d",a[i]);
	}
}
