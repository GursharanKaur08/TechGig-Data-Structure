/*Print Even
Given a 2D array, print the even numbers of it.

Input Format
You will taking two integers as input on one line separated by space representing rows and columns of the matrix. Following lines after that will be elements of the matrix with each element separated by space.

Constraints
1 <= n,m <= 1000

Output Format
Print the even elements of the matrix with each element separated by space.*/

#include <iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cin>>r>>c;
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 
			if(a[i][j]%2==0)
			{
				cout<<a[i][j]<<" ";
			}
		}
	}
}
