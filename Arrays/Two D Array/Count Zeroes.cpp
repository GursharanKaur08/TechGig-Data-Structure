#include <iostream>
using namespace std;
int main()
{
	int i,j,r,c,n=0;
	cin>>r>>c;
	int a[r][c];
	
  for(i=0;i<r;i++)
	{	
    for(j=0;j<c;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0)
			n++;
		}
	}
	cout<<n;
}
