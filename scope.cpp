#include<iostream>
using namespace std;
 


void update(int arr[] , int n){
    cout<< endl <<"inside th main function" <<endl;
    //printing the array
    for(int i=0 ; i<3 ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"goinn back"<<endl;
}
int main(){
    
    int arr[3]={1,2,3};
    update(arr,3);

    //printing the array
    cout<<endl<<"printing the main function"<<endl;
    for(int i=0 ; i<3 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}