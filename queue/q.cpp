#include<iostream>
using namespace std;

class Queue{
    public:

    int* arr;
    int front;
    int rear;
    int size;


Queue(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
}
void push(int val){
    //check full
    if(rear==(size-1)){
        cout<<"overflow"<<endl;
        return;
    }
    else if(front == -1 && rear==-1){
        //empty case
        front++;
        rear++;
        arr[rear]=val;
    }
    else{
        //normal case
        rear++;
        arr[rear] = val;
    }
}

void pop(){
    //underflow
    if(front== -1 && rear ==-1){
        cout<<"queue underflow"<<endl;
        return;
    }
    else if(front==rear){
        //single element hai

       arr[front]= -1;
       front = -1;
       rear = -1;
    }
    else{
        //normal case
        arr[front] = -1;
        front++;
    }

}

int getSize(){
    //bhul jaate hai
    if(front== -1 && rear == -1){
        return 0;
    }
    else{
        return rear-front+1;
    }

}

int getFront(){
    if(front== -1){
        cout<<"no element in queue, cant give front element"<<endl;
        return -1;
    }
    else{
        return arr[front];
    }
}
void print(){
    cout<<"printing queue:"<< " ";
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
};

int main(){
    Queue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.push(100);
    q.print();

    q.pop();
     q.pop();

    q.pop();
     q.pop();

 q.pop();

q.print();

q.push(1000);
q.print();

cout<<"size is"<< q.getSize();




    
}