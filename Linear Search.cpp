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
    int arr[] = {11,77,33,22,66,55,44,88};
    int n=8;
    int key;
    
    cout << "Enter the element to search";
    cin >> key;
    
    for(int i = 0;i<n;i++)
    {
        if (arr[i] == key)
        {
        cout << "Element found at index i:" << i;
        return 0;
        }
        
    }
    cout << "Element not found";
    return 0;
    
}