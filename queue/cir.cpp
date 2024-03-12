#include<iostream>
using namespace std;

class Cqueue{
    public:

    int* arr;
    int front;
    int rear;
    int size;

    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        //overflow
        if((front==0 && rear == size-1) || (rear == front-1)){
            cout<<"overflow"<<endl;
        }
        else if(front== -1 &&rear == -1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear == size-1 && front != 0){
            rear =0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        //underflow
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = -1;
            front =0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    void print(){
        cout<<"printing queue:"<<" ";
        for(int i=0 ; i<size ;i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Cqueue q(5);
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

    q.push(200);
    q.print();

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();

    q.push(100);
    q.print();

    q.push(200);
    q.print();

    q.push(300);
    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.push(400);
    q.print();


}