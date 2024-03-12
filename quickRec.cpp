#include<iostream>
using namespace std;

int partition(int arr[] , int s , int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i =s+1 ; i<=e ; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right solve ab
    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[] , int s , int e){
    //base case
    if(s>=e)
    return ;

    //partition karenge
    int p = partition(arr,s,e);

    //left sort
    quickSort(arr,s,p-1);

    //right sort
    quickSort(arr,p+1,e);
}

int main(){
    int arr[10] = {9,8,7,6,5,4,3,1,2,10};
    int n = 10;

    quickSort(arr,0,n-1);
    for(int i=0; i<n ; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}