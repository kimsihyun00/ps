#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 500

int main(void)
{
	int n=0;
	int arr[MAX][MAX]={};
	int best[MAX][MAX]={};
	
	cin>>n;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<=i; j++)
			cin>>arr[i][j];
	
	best[0][0]=arr[0][0];
	for(int i=1; i<n; i++)
		for(int j=0; j<=i; j++)
		{
			if(j-1<0)
				best[i][j]=arr[i][j]+best[i-1][j];
			else if(j>i-1)
				best[i][j]=arr[i][j]+best[i-1][j-1];
			else
				best[i][j]=arr[i][j]+max(best[i-1][j-1],best[i-1][j]);
		}
		
	int max=best[n-1][0];
	for(int j=0; j<n; j++)
		if(max<best[n-1][j])
			max=best[n-1][j];
			
	cout<<max<<endl;
	return 0;
}