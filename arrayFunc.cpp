#include<iostream>
using namespace std;
 

 void printArray(int arr[] , int size){
    cout<<" printing an array"<<endl;
    for(int i=0 ; i<size ; i++){
        cout<< arr[i]<<" ";
    }
 }


  int main(){
    // int number[15];
    // cout<<"value at 14 index"<<" "<<number[14]<<endl;
    

    // int second[3]= {5,7,11};
    // cout<<"value at 2 index"<<second[2]<<endl;
    
    // int third[15] = {2,7};
    // int n =15;
    // printArray(third,15);

    char ch[5]= {'a' , 'b' , 'c' , 'd' ,'e'};
    cout<<ch[3]<<endl;

    cout<<"printing the array"<<endl;
    for(int i=0; i<5 ; i++){
        cout<< ch[i]<<" ";
    }



}