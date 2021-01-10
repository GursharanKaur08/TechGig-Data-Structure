#include <iostream>
using namespace std;
int main()
{
	int r,c,n;
    cin>>r>>c;
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
			      if(arr[i][j]%2!=0)
			      n++;
        }
    }
	cout<<n;
}
