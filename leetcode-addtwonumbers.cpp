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
    ListNode* addTwoNumbers(ListNode* l2, ListNode* l2) {
        long long result_int1 = 0, result_int2 = 0;
        long long i = 0;
        ListNode* sum = new ListNode();
        while(l1){ 
            // (pow(10, i++) * l1->val) < 10 (i+1)++;
            result_int1 = result_int1 + (pow(10, i++) * l1->val);
            l1 = l1->next;
        } 
        i = 0;
        while(l2){
            result_int2 += pow(10, i++) * l2->val;
            l2 = l2->next;
        }
        string result = to_string(result_int1+result_int2); 
        reverse(result.begin(),result.end());
        ListNode * ans = new ListNode(result[0]-'0');
        ListNode * it = ans; 
        for (int j = 1; j < result.size(); j++)
            it = it->next = new ListNode(result[j]-'0', it->next);
        return ans;
    }
};