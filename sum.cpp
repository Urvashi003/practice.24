#include <iostream>
using namespace std;
// int main (){
//    int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
//    int n = 7, sum = 0;
//    for(int i = 0; i<n ; i++){
//       sum+=arr[i];
//    }
//    cout<<"The array sum is "<<sum;
//    return 0;
// }

//input take

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0 ; i<size ; i++){
        cin>>num[i];
    }
    int sum=0;
    for(int i=0 ;i<size ; i++){
        
        sum = sum + num[i];
    }
    cout<<"sum is" << sum;
    return 0;
}