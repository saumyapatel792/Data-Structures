/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

#define SIZE 5   // Maximum size of queue

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(){
    int item;
    if(rear == SIZE -1){
        cout << "Queue Overflow !!" << endl;
    }
    else{
        if(front == -1 )
          front = 0;
          cout << "Enter Elements To insert : ";
          cin >> item;
          rear ++;
          queue[rear] = item;
          cout << "Element Inserted Successfuly!!" << endl;
    }
}

void dequeue(){
    if(front == 1 || front > rear)
    {
        cout << "Queue Underflow !!" << endl;
        
    }
    else{
        cout << "Deleted Element:" << queue[front] << endl;
        front ++;
        
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- Queue Operations Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
