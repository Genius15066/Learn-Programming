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

void insertAfter(int val,int key){
    Node *temp = head;
    Node *newnode = new Node(key);
    while(temp->data != val){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void insertBefore(int val,int key){
    Node *previous,*current;
     Node *newnode = new Node(key);
   current=previous=head;

   while(current->data!=val){
       previous=current;
       current=current->next;
   }
   newnode->next=previous->next;
   previous->next=newnode;
}
void Delete(int val){
   Node *previous,*current;
   current=previous=head;

   while(current->data!=val){
       previous=current;
       current=current->next;
   }
   previous->next=current->next;
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
    Delete(4);
    Delete(7);
    display();
    cout<<endl;
    insertAfter(3,4);
    insertBefore(8,7);
    display();
    return 0;
}
