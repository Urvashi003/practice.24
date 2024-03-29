//leetcode POTD

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        
        // Sort the balloons based on their ending points
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int arrows = 1; // Initialize arrows to 1 as we need at least one arrow
        int end = points[0][1]; // Initialize end to the ending point of the first balloon
        
        // Iterate through each balloon
        for (int i = 1; i < points.size(); ++i) {
            // If the current balloon's starting point is greater than end, shoot a new arrow
            if (points[i][0] > end) {
                arrows++;
                end = points[i][1]; // Update end to the ending point of the current balloon
            }
        }
        
        return arrows;
    }
};


//GFG POTD
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
     queue<Node*>qt;
     qt.push(root);
     vector<int> ans;
     while(!qt.empty())
     {
         Node* nxt = qt.front();
         qt.pop();
         ans.push_back(nxt->data);
         if(nxt->left)
         {
             qt.push(nxt->left);
         }
        if(nxt->right)
         {
             qt.push(nxt->right);
         }
     }
     return ans;
    }
};