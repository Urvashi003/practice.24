#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


// int main(){
//   int n= 5;
//   if(n&1){
//     cout<<"no is odd";
//   }
//   else{
//     cout<<"no is even";
//   }
//     return 0;
// }

// int getIthBit(int n, int i){
//     int mask = 1<<i;
//     int ans = n&mask;
//     if(ans==0)
//     return 0;
//     else
//     return 1;
// }

// void setIthBit(int n , int i){
//     int mask = 1<<i;
//     int ans = n | mask;
//     cout<<"after setting:"<<ans <<endl;
// }

// void clearIthBit(int n, int i){
//     int mask = ~(1<<i);
//     int ans = n& mask;
//     cout<<"after clearing: "<<ans<<endl;
// }

// void clearIthBits(int n, int i){
//     int mask = (-1<<i);
//     n = n&mask;
//     cout<<"after clearing last i bits"<<n <<endl;
// }

// int countSetBits(int n){
//     int count = 0;
//     while(n != 0){
//         int lastBit = n&1;
//         if(lastBit)
//         count++;
//         //right shift
//         n= n>>1;
//     }
//     return count;
// }

// int countSetBitsFast(int n){
//     int count =0;
//     while(n != 0){
//         n = n&(n-1);
//         count ++;
//     }
//     return count;
// }

// void clearBitsInRange(int n, int i, int j){
//     int a = (-1<<(i+1));
//     int b = (1<<j)-1;
//     int mask = a|b;
//     n = n&mask;
//     cout<<"after clearing in range"<<n<<endl;
// }

// void getSubsequences(string str){
//     vector<string>ans;

// }
// int main(){
    // int ans = getIthBit(10,1);
    // cout<<ans<<endl;

    // setIthBit(10,2);
//    clearIthBit(10,1);
// int n =7;
// clearIthBits(n,2);
// cout<<countSetBits(16)<<endl;
// cout<<countSetBitsFast(9)<<endl;

// clearBitsInRange(15, 2, 0);

//     auto number = 0b111;
//     cout << number;
    
//     return 0;
// }

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Function to calculate the total count of set bits from 1 to N
int totalCountSetBits(int N) {
    int totalCount = 0;
    for (int i = 1; i <= N; ++i) {
        totalCount += countSetBits(i);
    }
    return totalCount;
}

int main() {
    // Example usage
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    int result = totalCountSetBits(N);
    
    std::cout << "Total count of set bits from 1 to " << N << ": " << result << std::endl;

    return 0;
}