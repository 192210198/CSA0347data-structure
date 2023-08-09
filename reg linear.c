#include<s#tdio.h>
int linearsearch(int arr_regno[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(arr_regno[i]==target)
		{
			return i;
		}
	}
	return-1;
}
int main()
{
	int arr_regno[]={192210288,192210198,192210259,192210441};
	int size=sizeof (arr_regno)/sizeof(arr_regno[0]);
	int target;
	printf("enter the number to search");
	scanf("%d",&target);
	int index=linearsearch(arr_regno,size,target);
	if(index!=1)
	{
		printf("number %d found at index %d.\n",target,index);
	}
	else
	{
		printf("number %d not found in the array.\n",target);
	}
	return 0;
}

