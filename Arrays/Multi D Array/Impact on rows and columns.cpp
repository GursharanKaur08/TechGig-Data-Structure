/*2D Array - Impact on rows and columns 
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1. 

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and these values should be separated by space.Then after that, each line will represent will represent each row and you need to enter numbers which each rows should have separated by a space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix to the stdout where each each line should represent each row and values in the row should be separated by a space.*/

#include <iostream>

int main()
{
    int r, c, i, j;
    std::cin >> r ;
    std::cin >> c ;
    int arr[r][c];
    int arrTemp[r][c] ;
    
    for ( i = 0 ; i < r ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            std::cin >> arr[i][j] ;
        }
    }
    
    for( i = 0 ; i < r ; i++ )
    {
        for( j = 0 ; j < c ; j++ )
        {
            arrTemp[i][j] = 0 ;
        }
    }
    
    for( i = 0 ; i < r ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            if ( arr[i][j] == 1 )
            {
                for( int k = 0 ; k < c ; k++  )
                    arrTemp[i][k] = 1 ;
                for( int l = 0 ; l < r ; l++ )
                    arrTemp[l][j] = 1 ;
            }
        }
    }
    
    for( i = 0 ; i < r ; i++ )
    {
        for( j = 0 ; j < c ; j++ )
        {
            if(j != c-1) 
		std::cout << arrTemp[i][j] << ' ' ;
	    else
		std::cout << arrTemp[i][j]; 
			
        }
        std::cout << '\n' ;
    }
    return 0;
}


