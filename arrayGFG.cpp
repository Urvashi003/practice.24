#include<iostream>
using namespace std;

//ascending order
bool checkCircularSorted(int arr[], int n)
{
	int count = 0;
    for(int i =1; i<n ;i++){
        if(arr[i-1]>arr[i]){
            count ++;
        }
    }
        if(count==1){
            return arr[0]>arr[n-1];
        }
            else{
                return false;
            
        }
    }


int main()
{

	// Given array
	int arr[] = { 23, 34, 45, 12, 17, 19 };

	// size of array
	int N = sizeof(arr) / sizeof(arr[0]);

	// Calling function to check
	// cirularly sorted array
	bool result = checkCircularSorted(arr, N);

	// Print result
	if (result) {
		cout << "Array is circularly sorted";
	}
	else {
		cout << "Array is not circularly sorted";
	}
}
