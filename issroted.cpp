#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){
  //bc
  if(size==0 || size==1){
    return true;
  }
  
  if(arr[0]>arr[1])
      return false;
  else{
     bool remainingPart = isSorted(arr+1 , size-1);
     return remainingPart;
  }
   
}

int main(){
  int arr[5] = {2,1,3,6,7};
  int size = 5;
  bool ans = isSorted(arr,size);
  if(ans){
    cout<<"sorted"<<endl;
  }
  else{
    cout<<"not sorted"<<endl;
  }
  return 0;

}