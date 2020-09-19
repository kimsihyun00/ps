#include <iostream>
using namespace std;

#define MAX 1000

int main(void)
{
	int n=0;
	int arr[MAX]={0};
	int h[MAX]={0};

	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=0; i<n; i++)
	{
		h[i]=1;
		for(int j=0; j<i; j++)
			if(arr[i]>arr[j] && h[i]<=h[j])
			{
				h[i]=h[j]+1;
			}
	}
		
	int max=h[0];
	for(int i=0; i<n; i++)
	{
		if(max<h[i])
			max=h[i];
	}
	cout<<max<<endl;

	return 0;
}