/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {77,33,44,11,88,22,66,55};
    int n = 8;

    for(int i = 0; i < n - 1; i++)
    {
        int SmallestIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[SmallestIndex])
            {
                SmallestIndex = j;
            }
        }

        swap(arr[i], arr[SmallestIndex]);
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}