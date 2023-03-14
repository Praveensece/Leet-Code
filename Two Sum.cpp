#include<iostream>
using namespace std;
int main()
{
	int n,i,j,target,found=0,in=0,out=0;
	cout<<"Enter the Size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of an array :";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the target :";
	cin>>target;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{

			if(arr[i]+arr[j]==target)
			{
				found=1;
				in=i;
				out=j;
				break;
			}
		    
		}
	}
	if(found==1)
	cout<<"["<<in<<","<<out<<"]";
	else
	cout<<"Not exist";
	return 0;
}
