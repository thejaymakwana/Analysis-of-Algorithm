#include<stdio.h>

int main()
{
	int a[10],i,n;
	printf("Enter the size of Array:\->");
	scanf("%d",&n);
	printf("Enter the elements for sort:\->");
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	
	printf("\n-- Entered Element --");
	for(i=0; i<n; i++)
	printf("\n->%d",a[i]);
	
	insertionSort(a,n);
	return 0;
}

void insertionSort(int a[10],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp = a[i];
		j = i-1;
		
		while( (j>=0) && (a[j]>temp) )
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	printf("\n-- Sorted Array --");
	for(i=0; i<n; i++){
		printf("\n->%d",a[i]);
	}

}
