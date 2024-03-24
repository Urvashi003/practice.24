#include <iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
  int s=0; int e=v.size()-1;

  while(s<=e){
    swap(v[s], v[e]);
    s++;
    e--;
  }
  return v;
}

void print(vector<int>v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}



//merge 2 sorted arrays
// void merge(int arr1[], int n , int arr2[], int m, int arr3[]){
//   int i=0;
//   int j=0;
//   int k=0;
//   while(i<n &&j<m){
//     if(arr1[i]<arr2[j]){
//       arr3[k++]=arr1[i++];
//     }
//     else{
//       arr3[k++]=arr2[j++];
//     }
//   }
//   while(i<n){
//     arr3[k++]=arr1[i++];
//   }
//   while(j<n){
//     arr3[k++]=arr2[j++];
//   }
// }

// void print(int arr3[], int n){
//   for(int i=0;i<n;i++){
//     cout<<arr3[i]<<" ";
//   }
//   cout<<endl;
// }

int main() {
  cout << "Hello world!" << endl;
  vector<int>v;
  v.push_back(11);
  v.push_back(12);
  v.push_back(13);

  vector<int> ans = reverse(v);
  cout<<"printing reverse"<<endl;
  print(ans);
  return 0;

//    int arr1[5] ={1,3,5,6,7};
//   int arr2[3]={2,4,8};
//   int arr3[8]={0};

//   merge(arr1,5, arr2, 3, arr3);
//   print(arr3,8);

//   return 0;
}