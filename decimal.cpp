#include<iostream>
#include<math.h>
using namespace std;

// int main(){
//     int n;
//     cin>> n;

//     int ans = 0;
//     int i =0;
//     while(n != 0){
//         int bit = n & 1;
//         ans = (bit * pow(10,i)) + ans;

//         n = n>> 1;
//         i++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// int main() {

//     int n;
//     cin >> n;


//     int ans  = 0;
//     int i = 0;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     cout<<" Answer is " << ans << endl;
//     return 0;
// }

// bool isPowerofTwo(int n){
//     for(int i=0; i<=30 ; i++){
//         int ans = pow(2,i);
//         if(ans==n){
//             return true;
//         }
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//    cout<< isPowerofTwo(n) <<endl;
   
   

// }

bool isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"no is even"<<endl;
    }
    else{
        cout<<"no. is odd"<<endl;
    }
}