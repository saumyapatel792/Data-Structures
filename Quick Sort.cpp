/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high) {
    int i = low, j = high;
    int pivot = a[(low + high) / 2];

    while (i <= j) {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (low < j)
        quickSort(a, low, j);
    if (i < high)
        quickSort(a, i, high);
}

int main() {
    int a[] = {44, 33, 11, 55, 77, 90, 40};
    int n = 7;

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}