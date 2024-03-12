#include<iostream>
#include<math.h>
using namespace std;

//FIBONACCI
// int main(){
//     int n;
//     cin>>n;

//     int ans =1;
//     int first =1;
//     int second =1;
//     if(n==1)
//     cout<<ans<<endl;
//     else if(n==2)
//     cout<<ans<<endl;

//     else{
//         for(int i =2; i<n ;i++){
//             ans = first+second;
//             first= second;
//             second =ans;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

//SUM OF EVEN ODD
// int main(){
//     int n;
    

//     int digit, oddSum=0 , evenSum =0;
//     cin>>n;
//     while(n != 0){
//         digit = n%10; //extracting the last digit
//         if(digit%2==0){
//             evenSum += digit;
//         }
//         else{
//             oddSum += digit;
//         }
//         n=n/10; //remove last digit

//     }
//     cout<<"evensum"<<evenSum<<" "<<"oddsum"<< oddSum<< endl;
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int start =1;
//     for(int i=0; i<n ;i++){
//         if(i%2==0) start =1;
//         else start =0;
//         for(int j=0; j<=i; j++){
//             cout<<start;
//             start = 1-start;
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n ; i++){
//         for(int j=0 ;j<n-i-1; j++){
//             cout<<" ";
//         }
//         //char
//         char ch ='A';
//         int breakpoint = (2*i+1)/2;
//         for( int j =1; j<=2*i+1 ; j++){
//             cout<<ch<<" ";
//             if(j<=breakpoint) ch++;
//             else ch--;
//         }

//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int rev=0;
//     while(n>0){
//         int ld =n%10;
//         rev = (rev*10)+ld;
//         n=n/10;
//     }
//     cout<<rev;
// }

// int main(){
//     int n;
//     cin>>n;

//     int rev=0;
//     int dup=n;

//     while(n>0){
//         int ld =n%10;
//         rev = (rev*10)+ld;
//         n=n/10;
//     }
//     if(rev==dup) cout<< "true";
//     else cout<<"false";

// }

// void  printDivisors(int n){
//     for(int i=1; i<=sqrt(n) ;i++){
//        if(n%i==0){
//         cout<<i<<" ";
       
//        if((n/i) != i){
//         cout<<n/i<<" ";
//        }
//     }
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     printDivisors(n);

//     return 0;
// }

// int getIthBit(int n, int i){
//      int mask = 1>>i;
//      int ans = n&mask;
//      if(ans==0)
//      return 0;
//      else
//      return 1;
// }

// int main(){
//     // int n;
//     // cin>>n;

//     int ans =  getIthBit(10,2);
//     cout<<ans<<endl;
// }

int main()
{
    // Declare array with negative size
    int arr[-2];
    arr[0] = -1;
 
    return 0;
}