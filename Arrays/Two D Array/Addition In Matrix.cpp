#include <iostream>
using namespace std;
int main()
{
	int r,c;
    cin>>r>>c;
    int arr[r][c],sum=0;
    int i,j;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
			sum+=arr[i][j];
        }
		
    }
	cout<<sum;
}
