//
//  main.cpp
//  Cola Estatica
//
//  Created by Remy Patgher on 02/10/23.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

#define maxQueue 5

class Queue{
private:
    int values[maxQueue];
    int front;
    int back;
    
public:
    Queue(){
        front = 0;
        back = 0;
    }
    
    int emptyQueue(){
        if(front == back){
            cout << "The Queue is empty" << endl;
            return 1;
        }else
            return 0;
    }
    
    int fullQueue(){
        if(back == maxQueue){
            cout << "The Queue is full" << endl;
            return 1;
        }else
            return 0;
    }
    
    void enqueue(int num){
        cout << endl << "New element on Queue: " << num << endl;
        if(fullQueue() == 1)
            return;
        values[back] = num;
        back++;
    }
    
    void dequeue(){
        cout << endl << "Deleting elemento from Queue: " << values[front] << endl;
        if(emptyQueue() == 1)
            return;
        values[front] = 0;
        for(int i = 0; i < (back - 1); i++)
            values[i] = values[i+1];
        back--;
    }
    
    void showQueueQueueElements(){
        cout << "Elements on Queue: " << endl;
        cout << "|";
        for(int i = front; i < back; i++)
            cout << "\t" << values[i] << "\t|";
        cout << endl;
    }
};

int main() {
    
    Queue queue;
    queue.enqueue(5);
    queue.enqueue(3);
    queue.enqueue(8);
    queue.enqueue(9);
    queue.enqueue(1);
    queue.showQueueQueueElements();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.showQueueQueueElements();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    
    return 0;
}
