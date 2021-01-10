/*Count Zeros 
Given a 2D array, Count the number of zeros of the array.

Input Format
You will taking two integers as input on one line separated by space representing rows and columns of the matrix. Following lines after that will be elements of the matrix with each element separated by space.

Constraints
1 <= n,m <= 1000

Output Format
Print the count to the STDOUT.*/

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
