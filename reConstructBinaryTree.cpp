/*
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树
*/
#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        right = nullptr;
        left = nullptr;
    }
};
class Solution{
public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin){
        int length = pre.size();
        if(pre.empty() || vin.empty() || length <= 0)
            return nullptr;
        vector<int> leftpre, leftin, rightpre, rightin;
        TreeNode* pNode = new TreeNode(pre[0]);
        int root = 0;
        for(int i = 0; i < length; i++){
            if(vin[i] == pre[0]){
                root = i;
            }
        }
        for(int i = 0; i < root; i+=){
            leftpre.push_back(pre[i+1]);
            leftin.push_back(vin[i]);
        }
        for(int i = root + 1; i < length; i++){
            rightpre.push_back(pre[i]);
            rightin.push_back(vin[i]);
        }
        pNode->left = reConstructBinaryTree(leftpre, leftin);
        pNode->right = reConstructBinaryTree(rightpre, rightin);
        return pNode;
    }
};