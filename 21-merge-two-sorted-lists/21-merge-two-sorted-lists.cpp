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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(list1 ==NULL) return list2;
      if(list2 ==NULL) return list1;
        ListNode * temp = list1, *prev = NULL;
      vector<int> o;
      while(temp!= NULL) {
        o.push_back(temp->val);
        prev = temp;
        temp= temp->next;
      }
      prev->next = list2;
      temp = list2;
      while(temp!= NULL) {
        o.push_back(temp->val);
        temp= temp->next;
      }
      temp = list1;
      int i=0;
      sort(o.begin(), o.end());
      while(temp!=NULL) {
        temp->val = o[i];
        i++;
        temp= temp->next;
      }
      return list1;
    }
};