/*Addition In Matrix 
Given a 2D array, Sum the elements of the array.

Input Format
You will taking two integers as input on one line separated by space representing rows and columns of the matrix. Following lines after that will be elements of the matrix with each element separated by space.

Constraints
1 <= n,m <= 1000

Output Format
Print the sum to the STDOUT.*/

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
