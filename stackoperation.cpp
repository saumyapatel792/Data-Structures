/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX - 1){
        cout << "Stack Overflow !! Cannot Push!!" << value << endl;
    }
    else{
        top++;
        stack[top] = value;
        cout << value << " = pushed into stack" << endl;
    }
}

void pop(){
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop." << endl;
    } else {
        cout << stack[top] << " = popped from stack." << endl;
        top--;
    }
}

void display(){
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int ch , value;
    do{
        cout << "\n-------Stack Operation Menu------------\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        
        cout << "Enter Your Choice:";
        cin >> ch;
        
        switch(ch){
            
            case 1 :
             cout << "Enter value to push: ";
             cin >> value;
             push(value);
             break;
            
            case 2:
             pop();
             break;
            
            case 3:
             display();
             break;
            
            case 4:
             cout << "Exiting program." << endl;
             break;
             
            default:
             cout << "Invalid choice!" << endl;
        } 
    }while(ch != 4);
    return 0;
}