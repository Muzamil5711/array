#include<stdio.h>
#define row 2
#define col 2
#define size 2
void input(int A[][col]);
int main()
{
	 int a[row][col];
	 int b[row][col];
	 input(a);
	 input(b);
}
void input(int A[][col])
{
	  for(int i=0;i<row;i++)
	  {
	  	 for(int j=0;j<col;j++)
	  {
	  	   scanf("%d",&A[i][j]);
	  }
	  
	  }
	  printf("\n");
	  for(int i=0;i<row;i++)
	  {
	  	 for(int j=0;j<col;j++)
	  {
	  	   printf("%d\t",A[i][j]);
	  }
	  printf("\n\n");
	  }
	  
}

