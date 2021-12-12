/*

Date: 19th August 2021
Problem Name: Reverse a Linkedlist in a group
Solution/Problem type: LinkedList
Time Complexity: O(n)
Space Complexity:O(1)

*/

#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};



class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node *nex,*prev=NULL,*current=head;
        int count=0;

        while(current!=NULL && count<k){
            nex=current->next; 
            current->next=prev;
             prev=current;
            current=nex;
            count++;
        }

        if(nex!=NULL){
            head->next=reverse(nex,k);
        }
        return prev;
    }
};
/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int main(void)
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}