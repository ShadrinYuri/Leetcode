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
		ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
				ListNode* l = new ListNode(0);
				ListNode* ptr = l;
				
				while(l1 != nullptr && l2 != nullptr) {
						if (l1->val <= l2->val) {
								l->next = new ListNode(l1->val);
								l1 = l1->next;
						} else {
								l->next = new ListNode(l2->val);
								l2 = l2->next;
						}
						l = l->next;
				}
				
				if (l1 == nullptr) {
						l->next = l2;
				} else {
						l->next = l1;
				}
				
				return ptr->next;
		}
};
