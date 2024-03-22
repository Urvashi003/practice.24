#include<iostream>
using namespace std;
//gfg potd
class Solution
{
    public:
    void solve(Node* root,map<int,int>& val , int level)
    {
        if(!root) return ;
        
        val[level] = val[level]+ root->data;
        
        
        solve(root->left,val,level+1);
        solve(root->right,val,level);
        return ;
    }
    vector <int> diagonalSum(Node* root) {
     map <int,int> val;
     solve(root,val,0);
     
     vector<int> ans;
     
     for(auto m: val)
     {
         ans.push_back(m.second);
     }
     return ans;
    }
};

// int getPivot(int arr[], int n){
//     int s =0;
//     int e= n-1;
//     int mid = s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e =mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[5] ={8,10,17,1,3};
//     cout<<"pivot is"<< getPivot(arr,5)<<endl;

//     cout<<"hello"<<endl;
//     return 0;
// }

//leetcode potd

class Solution {
public:


    ListNode* Middle(ListNode* head)
    {
        ListNode* fast= head;
        ListNode* slow = fast;
        while(fast->next != NULL && fast->next->next !=NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head2)
    {
        ListNode* curr = head2;
        ListNode* prev = NULL;
        while(curr!=NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
              prev= curr;
            curr = next;
            head2 = prev;
        }
        return prev;
    }
    bool check(ListNode* head,ListNode* head2)
    {
      
        while(head2!=NULL)
        {
       if(head->val == head2->val)
        {
            head = head->next;
            head2 = head2->next;
        }
        else
        {
            return false;
        }
        }
      
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middleNode = Middle(head);
        ListNode* head2 = middleNode->next;
        head2 = reverse(head2);
      bool ans = check(head,head2);
      return ans;
    }
};