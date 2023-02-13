/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
//     void rec(TreeNode *root,int &h){
//         if(!root)return ;
        
//         int lefth=0;
//         int righth=0;
        
//         h=mini(lefth,righth);
 //   }
    int minDepth(TreeNode* root) {
        int mini=INT_MAX;
        
//         rec(root,0);
        
        queue<TreeNode*>q;
        
        if(!root)return 0;
        
        q.push(root);
        int count=0;
        
        while(!q.empty()){
            
            int sz=q.size();
             count++;
            for(int i=0;i<sz;i++){
            TreeNode *node=q.front();
            q.pop();
           
            if(!node->left && !node->right){
                 mini=count;
                 return  mini;
            }
            
            else {
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
            
      }        
        return mini;
    }
};