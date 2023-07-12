#include<stdio.h>
main ()

{ int t=0;
	int num=5;
	int a[num];
	for (int i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	 int k = 0;
    for (int j = num - 1; j >= num / 2; j--) {
        int temp = a[k];
        a[k] = a[j];
        a[j] = temp;
        k++;
    }
	for (int i=0;i<num;i++)
	{
		printf("%d",a[i]);
	}
}
