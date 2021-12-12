/*

Date: 21th August 2021
Problem Name: Remove duplicate from unsorted  Linkedlist 
Solution/Problem type: LinkedList
Time Complexity: O(n)
Space Complexity:O(1)

*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
     map<int,int>m;
     Node *current=head;
     m[current->data]=1;
     
     Node *previous=current;
     current=current->next;
     
     while(current!=NULL){
         if(m[current->data]){
            previous->next=current->next;
            free(current);
         }
         else{
             m[current->data]=1;
             previous=current;
         }
         current=previous->next;
     }
     return head;
    }
};



int main() {
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
} 