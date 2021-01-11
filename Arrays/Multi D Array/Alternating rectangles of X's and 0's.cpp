/*2D Array - Alternating rectangles of O and X
Write a code which inputs two numbers m and n and creates a matrix of size m x n (m rows and n columns) in which every elements is either X or 0. The Xs and 0s must be filled alternatively, the matrix should have outermost rectangle of Xs, then a rectangle of 0s, then a rectangle of Xs, and so on.. 

Input Format
You need to tell that how many rows and columns your matrix need to have and these values should be separated by space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix to the stdout.*/

using namespace std;
#include<iostream>
int main()
{
   int m,n,top=0,bottom,left=0,right,i;
   char x='X',a[20][20];
   cin>>m>>n;
   right=n-1;
   bottom=m-1;
	
   while(top<=bottom && right>=left)
   {
       for(i=left;i<=right;i++)
       {
           a[top][i]=x;
       }
       top++;

       for(i=top;i<=bottom;i++)
       {
           a[i][right]=x;
       }
       right--;
       
       for(i=right;i>=left;i--)
       {
           a[bottom][i]=x;
       }
       bottom--;
       
       for(i=bottom;i>=top;i--)
       {
           a[i][left]=x;
       }
       left++;
       
	   if (x=='X')
			x='0';
	   else
	   		x='X';
   }

   for(i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(j != n-1) 
		   cout << a[i][j] << ' ' ;
	       else
		   cout << a[i][j]; 
		   
       }
       cout<<"\n";
       
   }
    return 0;
}
