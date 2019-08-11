/*
*
*
*    using C like struct implementation for circular queue
*
*
*/
#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int rear,front;
    int size;
    int* arr;//pointer to create dynamic array in c++ for queue
    Queue(int s)
    {
        front=rear=-1;
        size=s;
        arr = new int[s];
    }
    void enQueue(int val);
    int deQueue();
    void display();
};
void Queue :: enQueue(int val){
    if((front == 0 and rear == size-1 ) || (rear == (front-1)%(size-1))){
        cout<<"\nQueue is full\n";
        return;
    }
    else if(front == -1){
        front = rear = 0;
        arr[rear] = val;
    }
    else if(rear == size-1 and front!=0){
        rear=0;
        arr[rear]=val;
    }
    else{
        rear++;
        arr[rear]=val;
    }
}
int Queue::deQueue(){
    if(front == -1){
        cout<<"\nQueue is empty\n";
        return INT_MIN;
    }
    int data = arr[front];
    arr[front] = -1;
    if (front == rear){
        front = -1 ;
        rear = -1;
    }
    else if(front == size-1 ){
        front=0;
    }
    else front++;
    return data;
}
void Queue::display(){
    if(front == -1 ){
        cout<<"\n Queue is empty \n";
        return; 
    }
    cout<<"Elements in circular queue are \n";
    if(rear>=front){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=front;i<size;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    Queue q(4);
    q.enQueue(12);
    q.enQueue(121);
    q.enQueue(144);
    q.enQueue(11);
    q.enQueue(44);
    q.display();
}