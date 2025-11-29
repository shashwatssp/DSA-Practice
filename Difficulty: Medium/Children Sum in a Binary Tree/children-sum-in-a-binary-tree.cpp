/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/

class Solution {
  public:
    bool isSumProperty(Node *root) {
        if(root==nullptr || (root->left==nullptr && root->right==nullptr)) return true;
        
        int leftChildVal = root->left?root->left->data:0;
        int rightChildVal = root->right?root->right->data:0;
        
        
        if(root->data != (leftChildVal + rightChildVal))
        return false;
        
        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};