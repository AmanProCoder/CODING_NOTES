#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    
        ListNode *addTwoNumbers(ListNode * l1, ListNode * l2)
        {
            ListNode *l3=new ListNode(0);
            ListNode *head=l3;
            int carry=0;
            int flag=1;
            while(l1!=NULL && l2!=NULL)
            {
                int x=(l1->val+l2->val+carry);
                carry=x/10;
                // if(flag)
                // {
                //     flag--;
                //     l3->val=x%10;
                // }
                // else
                l3->next=new ListNode(x%10);
                l1=l1->next;
                l2=l2->next;
            }
            while(l1!=NULL )
            {
                int x=(l1->val+carry);
                carry=x/10;
                l3->next=new ListNode(x%10);
                l1=l1->next;
            } 
            while(l2!=NULL)
            {
                int x=(l2->val+carry);
                carry=x/10;
                l3->next=new ListNode(x%10);
                l2=l2->next;
            }
            return head;
            
        }
    };