/*
Rotate a given n*n matrix clockwise and anticlockwise by 90 degrees
*/

#include <iostream>

void display ( int arr[][3] , int size ) 
{
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std ::cout << arr[i][j] << " ";
        }
        std ::cout << "\n";
    }
}

int main()
{
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    const int size = sizeof(arr) / sizeof(arr[0]);

    std ::cout << "Original Matrix: \n";
    display( arr , size );
   
//Solution 1
    std ::cout << "Clockwise Rotation : \n";

    int clock_mat[size][size] = {0};

    for (int i = 0, m = 0; i < size; i++, m++)
    {
        for (int j = size - 1, n = 0; j >= 0; j--, n++)
        {
            clock_mat[m][n] = arr[j][i];
        }
    }
    display( clock_mat , size );


    std ::cout << "Anticlockwise Rotation : \n";

    int anticlock_mat[size][size] = {0};

    for (int i = size - 1, m = 0; i >= 0; i--, m++)
    {
        for (int j = 0, n = 0; j < size; j++, n++)
        {
            anticlock_mat[m][n] = arr[j][i];
        }
    }
   display( anticlock_mat , size ) ;

}
