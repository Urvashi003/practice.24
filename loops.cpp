#include<iostream>
using namespace std;

// int main(){
//     char ch;
//     cout<<"enter your data"<<endl;
//     cin>>ch;

//     if(ch>='A' && ch<='Z'){
//         cout<<"uppercase"<<endl;
//     }
//     else if(ch>='a' && ch<='z'){
//         cout<<"lowercase"<<endl;
//     }
//     else if(ch>='0' && ch<='9'){
//         cout<<"number"<<endl;

//     }
//     else{
//         cout<<"oopsie"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i= i+1;
//     }
    
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int sum =0;
//     while(i<=n){
//         sum = sum +i;
//         i= i+1;
//     }
//     cout<<sum<<endl;
// }

// int main(){
//     int n;
//     cin>>n;

//     int i= 2;
//     int sum =0;
//     while(i<=n){
//         sum = sum+i;
//         i= i+2;
//     }
//     cout<<sum<<endl;
// }

// int main(){
//     float c, f;
//     cin>>f;
//     c = 5*(f-32)/9;

//     cout<<c<<endl;
// }

int main(){
    int n;
    cin>>n;

    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime for"<<i<<endl;
        }
        else{
            cout<<"prime for"<<i<<endl;
        }
        i= i+1;
    }
}