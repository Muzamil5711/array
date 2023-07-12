#include<stdio.h>
int main ()
{
	int n=4,c=3;
	int a[n][c],b[n][c],add[n][c],sub[n][c];
	for(int i=0;i<n;i++){
		for (int j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		printf("second array \n ");
			scanf("%d",&b[i][j]);
	}}
	for (int i=0;i<n;i++){
		for (int j=0;j<c;j++){
			add[i][j]=a[i][j]+b[i][j];
			sub[i][j]=a[i][j]-b[i][j];
		}
		
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<c;j++)
		{
			printf("%d   ",add[i][j]);
			printf("%d   ",sub[i][j]);
		}
		printf("\n");
	}
}
