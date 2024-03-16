#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int arr[], int n){
    int i=0; 
    int j= n-1;
    while(i<j){
        while(arr[i]==0)
       {
          i++;
       }
       while(arr[j]==1){
        j--;
       }    
       swap(arr[i], arr[j]);
       i++;
       j--;
       
       }


}

void sort012 (int arr[], int n){
    int l=0;
    int m=0;
    int h= n-1;

    while(m<=h){
        switch(arr[m]){
            case 0: 
            swap(arr[m], arr[l]);
            l++;
            m++;
            break;

            case 1:
            m++;
            break;

            case 2:
            swap(arr[m], arr[h]);
            h--;
            break;
        }
    }
}

int binarySearch(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int firstOcc(int arr[], int n, int k){
     int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(k > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(k< arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k){
      int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(k > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(k < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    // int arr[4] ={1,1,0,0};
    // sortOne(arr,4);
    // printArray(arr,4);
    
    // int brr[6]={0,1,2,0,1,2};
    // sort012(brr,6);
    // printArray(brr,6);

    // int even[4]= {1,2,3,4};
    // int index = binarySearch(even,4,3);
    // cout<<"index of key element is"<< index <<endl;

    int arr[8] ={1,2,3,3,3,3,4,5};
    cout<<firstOcc(arr,8,3)<<" "<<lastOcc(arr,8,3)<<endl;

    return 0;
}