/*

Date: 19th August 2021
Problem Name: Reverse a Linkedlist
Solution/Problem type: LinkedList
Time Complexity: O(n)
Space Complexity:O(1)

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

struct Node
{
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

Node *head = NULL;

void insert(int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}

void reverse(){
    Node *previous,*nextnode,*current;
    previous=0;
    current=nextnode=head;

    while(nextnode != NULL){
        nextnode = nextnode->next;
        current->next = previous;
        previous=current;
        current=nextnode;
    }
    head=previous;
}

void display()
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif
    ll test;
    cin >> test;

    while (test--)
    {
        int a;
        cin >> a;
        insert(a);
    }
    display();
    cout<<endl;
    reverse();
    display();
    return 0;
}
