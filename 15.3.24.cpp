#include<iostream>
#include<vector>
#include<math.h>
#include<set>
#include<algorithm>
using namespace std;

void swapAlternative(int arr[], int n){
    for(int i=0; i<n ; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}

// int findUnique(int arr[], int n){
//     int ans =0;

//     for(int i=0; i<n ;i++){
//         ans =ans^arr[i];
//     }
//     cout<< ans;
// }

// bool uniqueOccurances(vector<int>& arr){
//      int i=0;
//      sort(arr.begin(), arr.end());
//      vector<int>ans;
//      while(i<arr.size()){
//         int count=1;
//         for(int j=i+1; j<arr.size() ; j++){
//             if(arr[i]==arr[j])
//             count++;
//         }
//         ans.push_back(count);
//         i=i+count;
//      }
//      sort(ans.begin(), ans.end());
//      for(int i=0; i<ans.size()-1; i++){
//         if(ans[i]==ans[i+1])
//         return false;
//      }
//      return true;
// }

// int findDuplicates(int arr[], int n){
//     int ans=0;
//     for(int i=0; i<n ; i++){
//         ans = ans^arr[i];
//     }
//     for(int i=1; i<n; i++){
//         ans = ans^i;
//     }
//     cout<< ans;
// }

vector<int> findDuplicates(vector<int> &nums){
    set<int>st;
    vector<int>v;

    for(int i=0; i<nums.size();i++){
        if(st.count(nums[i])){
            //if present
            v.push_back(nums[i]);
        }
        else{
            //not present
            st.insert(nums[i]);
        }
    }
    return v;
}

int main(){
    // int arr[7] = {1,2,3,4,5,6,7};
    // swapAlternative(arr,7);
    // printArray(arr,7);
    // int brr[7] ={1,1,2,2,3,0,3};
    // findUnique(brr,7);
    //  vector<int> test1 = {1, 2, 2, 1, 1, 2};
//    cout<< uniqueOccurances(test1);

// int find[5]={1,2,3,3,4};
// findDuplicates(find,5);
vector<int> nums ={4,3,2,7,8,2,3,1};
vector<int> duplicates = findDuplicates(nums);
cout << "Duplicate elements: ";
 for(int num : duplicates) {
        std::cout << num << " ";
    }
    return 0;

}

