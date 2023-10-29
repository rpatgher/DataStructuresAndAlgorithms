//
//  main.cpp
//  Pila Dinamica
//
//  Created by Remy Patgher on 02/10/23.
//

#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Stack{
private:
    Node *top;
    
public:
    Stack(){
        top = NULL;
    }
    
    int emptyStack(){
        if(top == NULL)
            return 1;
        return 0;
    }
    
    void push(int num){
        cout << endl << "New Element in Stack: " << num << endl;
        Node *element = new Node();
        element->data = num;
        element->next = top;
        top = element;
    }
    
    void pop(){
        if(emptyStack() == 1){
            cout << endl << "The Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        cout << endl << "Element deleted from Stack: " << temp->data << endl;
        delete temp;
    }
    
    void showData(){
        Node *temp = top;
        cout << endl << "Elements on Stack: " << endl;
        cout << "---------" << endl;
        while(temp != NULL){
            cout << "|\t" << temp->data << "\t|" << endl << "---------" << endl;
            temp = temp->next;
        }
    }
};


int main() {
    Stack stack;
    
    stack.push(5);
    stack.push(10);
    stack.push(4);
    stack.push(6);
    stack.push(7);
    stack.showData();
    stack.pop();
    stack.pop();
    stack.showData();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    
    return 0;
}
