/*2D Array - Matrix in diagonal Order
Given a 2D matrix, print all elements of the given matrix in diagonal order. 

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and these values should be separated by space.
Then after that, each line will represent will represent each row and you need to enter numbers which each rows should have separated by a space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix in the diagonal wave from as specified to the stdout.*/

#include <iostream>
using namespace std;
int main()
{   long i,j,row,col,a[1000][1000],n=0,t,k;
    cin>>row>>col;
    for(i=0;i<row;i++)
	{	for(j=0;j<col;j++)
		{ cin>>a[i][j];
		}
	}
	t=row*col;
    for(k=0;k<t;k++)
	{	for(i=0;i<col;i++)
		{	for(j=0;j<row;j++)
		    {	if(i+j==n)
                cout<<a[j][i]<<" ";
			}
		}
		cout<<endl;
		n++;
	}
}
