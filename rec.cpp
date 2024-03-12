#include<iostream>
using namespace std;

// int factorial(int n){

//     //Base case
//     if(n==0)
//     return 1;

//     return n*factorial(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = factorial(n);

//     cout<<ans<<endl;

//     return 0;
// }

// int power(int n){
//     //base case
//     if(n==0)
//     return 1;

//     //rr
//     return 2*power(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = power(n);
//     cout<<ans<<endl;

//     return 0;
// }

void sayDigit(int n , string arr[]){
    //bc
    if(n==0)
    return;

    int digit = n%10;
    n=n/10;
   

    //rc
    sayDigit(n,arr);
     cout<<arr[digit]<<" ";
}

int main(){
    string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};

    int n;
    cin>>n;

    cout<<endl;
    sayDigit(n , arr);
    cout<<endl;
    return 0;
}