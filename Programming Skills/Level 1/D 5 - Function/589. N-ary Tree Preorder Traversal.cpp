/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void Helper(Node* root, vector<int> &v) {
        if(root == NULL) return;
        
        v.push_back(root->val);
        
        for(int i=0; i<root->children.size(); i++)
        {
            Helper(root->children[i], v);
        }
    }
    
    vector<int> preorder(Node* root) {
        if(root == NULL) return {};
        
        vector<int> res;
        Helper(root, res);
        
        return res;
    }
    
    /*
    // Recursive
    vector<int> ans;
    vector<int> preorder(Node* root) {
        if(root!=NULL){
            ans.push_back(root->val);
            for(Node* child : root->children){
                preorder(child);
            }
        }
        return ans;
    }
    */
};