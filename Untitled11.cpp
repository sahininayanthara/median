#include <stdio.h>
int main()
{
	int i,j,n,x,array[100];
	float f;
	printf("Enter total number of elements\n");
	scanf("%d",&n);
	
	printf("Enter elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
			x=array[i];
			array[i]=array[j];
			array[j]=x;
		}
		}
	}
	if(n%2==0)
	{
	f=array[n/2]+array[n/2-1]/2.0;
}	else{
	
	f=array[(n)/2];
	printf("\nMedian=%f",f);
}
	return 0;
}