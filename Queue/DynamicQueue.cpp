//
//  main.cpp
//  Cola Dinamica
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

class Queue{
private:
    Node *front;
    Node *back;
    
public:
    Queue(){
        front = NULL;
        back = NULL;
    }
    
    int emptyQueue(){
        if(front == NULL && back == NULL)
            return 1;
        return 0;
    }
    
    void enqueue(int num){
        cout << endl << "New Element on Queue: " << num << endl;
        Node *element = new Node();
        element->data = num;
        element->next = NULL;
        if(emptyQueue() == 1){
            front = element;
            back = element;
        }else{
            back->next = element;
            back = element;
        }
    }
    
    void dequeue(){
        if(emptyQueue() == 1){
            cout << endl << "The Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        if(front == back){
            front = NULL;
            back = NULL;
        }else
            front = front->next;
        cout << endl << "Element deleted from Queue: " << temp->data << endl;
        delete temp;
    }
    
    void showData(){
        Node *temp = front;
        cout << endl << "Data in Queue: " << endl;
        cout << "|";
        while(temp != NULL){
            cout << "\t" << temp->data << "\t|";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue queue;
    
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    queue.enqueue(7);
    queue.showData();
    queue.dequeue();
    queue.showData();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    
    
    
    return 0;
}
