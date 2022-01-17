#include<stdio.h>

int main()
{
	int n,i,j,temp;
	
	printf("//** SELECTION SORT **//\nEnter the size of ARRAY\n->");
	scanf("%d", &n);
	int array[n];
	
	printf("Enter elements of array\n->");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
		}
		
	for(i=0; i<n-1; i++)
	{
		int min;
		min = i;
		for(j=1+i; j<n; j++)
		{
			if(array[j] < array[min])
				min = j;
		}
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
    }
		for(i=0; i<n; i++)
		{
			printf("->%d", array[i]);
		}

	return 0;	
}
