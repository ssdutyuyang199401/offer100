/*
输入一个链表，按链表值从尾到头的顺序返回一个ArrayList
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* next;
};
class Solution{
public:
    vector<int> printListFromTailToHead(ListNode* head){
        vector<int> result;
        stack<ListNode*> nodes;
        ListNode * pNode = head;
        while(pNode != nullptr){
            nodes.push(pNode);
            pNode = pNode->next;
        }
        while(!nodes.empty()){
            pNode = nodes.top();
            result.push_back(pNode->val);
            nodes.pop();
        }
        return result;
    }
};