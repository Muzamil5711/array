#include<stdio.h>
void input(int num);
int main ()
{
	int n;
	printf("Enter number which represents number of elements in array =");
	scanf("%d",&n);
	input(n);

}
void input(int num){
	int arrat[num],large=1,large2=1;
	for(int i=0;i<num;i++){
		
		printf("Enter %d element =\n",i);
		scanf("%d",&arrat[i]);
		if(arrat[i]>large){
			large=arrat[i];
		
		}
			if(arrat[i]>large2 && arrat[i]!=large)
			large2=arrat[i];
	}
	printf("Large number in array is %d",large);
		printf(" second Large number in array is %d",large2);
}
