//leetcode POTD

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
       int cnt = 0;
       ListNode* slow = NULL;
       ListNode* first = NULL;
       ListNode* fast = NULL;
        while(temp1)
        {
            slow = temp1;
            temp1 = temp1->next;
            cnt++;
            if(cnt ==a)
            {
             first = slow;
            }
            if(cnt == b+1)
            {
             fast = temp1;
            }
        }
       first->next = list2;
       while(temp2)
       {
       temp2= temp2->next;
      if(temp2->next == NULL)
      {
        temp2->next = fast;
        break;
      }
     
       }
        return list1;
        }
};

//gfg potd
class Solution
{
public:
    int m = 0;
    int ans = 0;
    void solve(Node* root, int h, int s)
    {
        if(!root)
        {
            return ;
        }
        // leaf node ki condition check krenge 
        if(root->left == NULL && root->right ==NULL)
        {
             s = s+root->data;
            if(h>m)
            {
                m=h;
                ans = s;
            }
            else if(h == m)
            {
                ans = max(ans,s);
            }
            return ;
        }
        s = s+root->data;
        solve(root->left,h+1,s);
        solve(root->right,h+1,s);
        // return sum;
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
     solve(root,0,0);
    return ans;
    }
};