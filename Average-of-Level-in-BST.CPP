class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int siz=q.size();
            double sum=0.0;
            for(int i=0;i<siz;i++){
                TreeNode*curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            ans.push_back(sum/siz);
        }
        return ans;
    }
};