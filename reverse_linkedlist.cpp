/*Reverse a linked list 
kind of a easier program yet highly important to understand linked lists

so lets get into it 

u are given a linked list you have to reverse it

input 2 , 4 ,5 ,6 ,7
output 7 , 6, 5 ,4 , 2  simple enough*/

class Solution {

    ListNode* reverseList(ListNode* head){
        ListNode* node = nullptr;

        while(head != nullptr){
            ListNode* temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }
        return node;
    }
};