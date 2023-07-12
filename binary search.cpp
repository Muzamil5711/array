#include<stdio.h>
# define num 5
void sort (int s[]);
int binarysearch(int b[],int);
void input (int i[]);
void print(int p[]);
main ()
{
	int a[num];
	input(a);
	sort(a);
	print(a);
	
	int searchnum;
	printf("Enter a search num ");
	scanf("%d",&searchnum);
	if(binarysearch(a,searchnum))
	{
		printf("%d found in array",searchnum);
	}
	else
	{
		printf("Not found");
	}
	
}
void input(int inp[]){
	for (int i=0;i<num;i++){
		printf("Enter %d element =",i+1);
		scanf("%d",&inp[i]);
	}}
	void sort (int s[])
	{
		
		for (int i=0;i<num;i++){
			int small=s[i];
			int si=i;
			for ( int j=i+1;j<num;j++){
				if(s[j]<small){
					si=j;
					small=s[j];
				}
			}
			int temp=s[si];
			s[si]=s[i];
			s[i]=temp;
		}
		
	}
	void print(int p[]){
		for(int i=0;i<num;i++){
			printf("%d",p[i]);
		}
	}
	int binarysearch( int b[],int search)
	{
		int low=0;
		int high=num-1;
		while (low<=high){
			int mid=(low+high)/2;
			if(search==b[mid])
			{
				return mid;
			}
			else if (b[mid]> search ){
				high=mid-1;
			}
			else {
				low= mid+1;
			}
		}
		return -1;
		
	}

