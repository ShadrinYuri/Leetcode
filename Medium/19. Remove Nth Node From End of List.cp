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
		int sizeList(ListNode* head) {
			int count = 0;
			while (head != NULL) {
				count++;
				head = head->next;
			}
			
			return count;
		}
	
		ListNode* removeNthFromEnd(ListNode* head, int n) {
			int len = sizeList(head);
			
			if(len == n) {
				return head->next;
			}
			
			ListNode* ptr = head;
			
			while(len - n - 1 > 0) {
				ptr = ptr->next;
				len--;
			}
			
			ptr->next = ptr->next->next;
			
			return head;
		}
};
