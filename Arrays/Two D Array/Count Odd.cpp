/*Count Odd
Given a 2D array, count the odd numbers out of it.
</

Input Format
You will taking two integers as input on one line separated by space representing rows and columns of the matrix. Following lines after that will be elements of the matrix with each element separated by space.

Constraints
1 <= n,m <= 1000

Output Format
Print the count of odd elements.*/

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
