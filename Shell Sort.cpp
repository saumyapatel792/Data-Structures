/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a[] = {44,33,11,55,77,90,40};
    int n = 7;

    for(int gap = n/2; gap > 0; gap = gap/2) {
        for(int i = gap; i < n; i++) {
            int temp = a[i];
            int j;

            for(j = i; j >= gap && a[j-gap] > temp; j = j-gap) {
                a[j] = a[j-gap];
            }

            a[j] = temp;
        }
    }

    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}