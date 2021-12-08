//Merge two sorted array to third
#include<stdio.h>
int arr1[10],arr2[10],res[20];
void main()
{
	int m,n,i,j,k=0;
	printf("Enter the no. of elements in the first array\n");
	scanf("%d",&m);
	printf("\nEnter the first sorted array elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the no. of elements in the second array\n");
	scanf("%d",&n);
	printf("\nEnter the second sorted array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	i=0;
	j=0;
	while(i<m &&j<n)
	{
		if(arr1[i]<arr2[j])
		{
			res[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			res[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		res[k++]=arr1[i++];	
	}
	while(j<n)
	{
		res[k++]=arr2[j++];	
	}
	printf("\nMerged array\n");
	for(k=0;k<(n+m);k++)
	{
		printf("%d\t",res[k]);
	}
}
