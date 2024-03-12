#include<iostream>
using namespace std;

bool CheckPalindrome(string str , int i , int j){
    if(i>j)
    return true;

    if(str[i] != str[j])
    return false;

    else{
        //rec call
        return CheckPalindrome(str , i+1 , j-1);
    }
}

int main(){
    string name = "abcde";
    cout<<endl;

    bool isPalindrome = CheckPalindrome(name , 0 , name.length()-1);

    if(isPalindrome){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}