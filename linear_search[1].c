#include<stdio.h>
int linearsearch(int arr[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return-1;
}
int main()
{
	int arr[]={5,10,15,20,25,30,35,40,45,50,77};
	int size=sizeof (arr)/sizeof(arr[0]);
	int target;
	printf("enter the number to search");
	scanf("%d",&target);
	int index=linearsearch(arr,size,target);
	if(index!=-1)
	{
		printf("number %d found at index %d.\n",target,index);
	}
	else
	{
		printf("number %d not found in the array.\n",target);
	}
	return 0;
}

