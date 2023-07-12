#include<stdio.h>
main ()
{
	int num=5;
	float float_array[num];
	
	for(int i=0;i<num;i++){
		scanf("%f",&float_array[i]);
	}
	
	for(int j=0;j<num;j++){
		printf("\n");
		printf("%.2f",float_array[j]);
	}
}
