/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        int res=0;
        vector<int> valid;
        for(int i=1;i<temp.size()-1;i++){
            if(temp[i]>temp[i-1] && temp[i]>temp[i+1]) valid.push_back(i);
            if(temp[i]<temp[i-1] && temp[i]<temp[i+1]) valid.push_back(i);

        }
        if(valid.size()<2) return {-1,-1};
        int low = INT_MAX;
        int high = valid.back()-valid.front();

        for(int i=1;i<valid.size();i++){
            low=min(low,valid[i]-valid[i-1]);
        }

        return {low,high};
      

    }
};