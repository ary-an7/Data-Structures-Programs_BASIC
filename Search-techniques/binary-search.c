#include<stdio.h>
#include<conio.h>
void binarysearch(int a[],int n,int key)
{
	int low =0;
	int high=n-1;
	while(low<=high)
	{
		int mid=((low+high)/2);
		if(key==a[mid])
		{
			printf("The key %d is found..!\n",key);
			return;
		}
		if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	printf("The key %d is not found\n",key);
}
void main()
{
	int n,a[20],i,key;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	printf("Enter the elements of array in sorted format(ascending): \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the key to be searched: \n");
	scanf("%d",&key);
	binarysearch(a,n,key);
	getch();
}
