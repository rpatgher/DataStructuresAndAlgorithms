//
//  main.cpp
//  Pila Estatica
//
//  Created by Remy Patgher on 02/10/23.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

#define maxStack 5

class Stack{
private:
    int values[maxStack];
    int top;
public:
    // Init Stack
    Stack(){
        top = -1;
    }
    
    int fullStack(){
        if(top == maxStack - 1){
            cout << "The Stack is full" << endl;
            return 1;
        }else
            return 0;
    }
    
    int emptyStack(){
        if(top == -1){
            cout << "The Stack is empty" << endl;
            return 1;
        }else
            return 0;
    }
    
    void push(int newNum){
        cout << endl << "New element on Stack: " << newNum << endl;
        if(fullStack() == 1)
            return;
        top++;
        values[top] = newNum;
    }
    
    void pop(){
        cout << endl << "Deleting element from Stack: " << values[top] << endl;
        if (emptyStack() == 1)
            return;
        values[top] = 0;
        top--;
     }
    
    void showStackElements(){
        int i;
        cout << endl << "Elements on Stack: " << endl;
        cout << "---------" << endl;
        for(i = top; i >= 0; i--)
            cout << "|\t" << values[i] << "\t|" << endl << "---------" << endl;
    }
};

int main() {
    Stack stack;
    
    stack.push(3);
    stack.push(4);
    stack.push(6);
    stack.push(5);
    
    stack.showStackElements();
    
    stack.pop();
    stack.pop();
    stack.pop();
    
    stack.showStackElements();
    
    stack.pop();
    stack.pop();
    
    
    
    
    
    return 0;
}
