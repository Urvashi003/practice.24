#include<iostream>
#include<stack>
using namespace std;

// class Stack{
//    //prop
//    public:
//    int *arr;
//    int size;
//    int top;

//    //beahvior
//    Stack(int size){
//     this->size = size;
//     arr = new int[size];
//     top = -1;
//    }

//    void push(int element){
//     if((size-top)>1){
//         top++;
//         arr[top] = element;
//     }
//     else{
//         cout<<"stack overflow"<<endl;
//     }
//    }

//    void pop(){
//     if(top>=0){
//         top--;
//     }
//     else{
//         cout<<"stack underflow"<<endl;
//     }
//    }

//    int peek(){
//     if(top>=0)
//     return arr[top];
//     else{
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
//    }

//    bool isEmpty(){
//     if(top==-1){
//         return true;
//     }
//     else{
//         return false;
//     }
//    }

// };

// int main(){
//     Stack st(5);
//     st.push(8);
//     st.push(9);

//     st.pop();

//     cout<< st.peek() <<endl;

// }

// class Node{
//     public:
//     int data;
//     Node* next;
// };

// class Stack{
//     private:
//     Node* top;
//     public:
//     Stack(){
//         top = NULL;
//     }

//     void push(int x){
//         Node* newNode = new Node();
//         newNode-> data = x;
//         newNode-> next = top;
//         top = newNode;
//     }
//     void pop(){
//         if(top==NULL){
//             cout<<"empty"<<endl;
//             return;
//         }
//         Node* temp = top;
//         top = top-> next;
//         delete temp;
//     }
//     void display(){
//         if(top==NULL){
//             cout<<"empty"<<endl;
//             return ;
//         }
//         Node* temp = top;
//         cout<<"stack elements are:"<<" ";
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp-> next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.display();
//     s.pop();
//     s.display();
    

// }



int main(){
    string str = "urvashi";
    stack<char>s;

    for(int i=0; i<str.length(); i++){
      char ch = str[i];
      s.push(ch);
    }
    string ans = " ";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans<<endl;
    return 0;
}