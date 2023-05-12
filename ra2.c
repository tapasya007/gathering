#include<stdio.h>

avg(int marks[])
{
	int i,sum=0,aver;
	for(i=0;i<=4;i++)
	{
		sum=sum+marks[i];
	}
	aver=sum;
	printf("average=%d\n",aver);
}
main()
{
	int arr[]={78,98,79,85,85};
	int a[]  ={89,96,87,79,89};
	avg(arr);
	avg(a);

}
