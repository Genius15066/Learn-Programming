#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* front;
Node* rear;

void enQueue(int num)
{
    Node* newNode = new Node();
    newNode->data = num;
    newNode->next =NULL;

    if(front == NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}

void deQueue()
{
    if (front == NULL)
    {
        cout << "underflow" << endl;
    }
   else{
       front=front->next;
   }
}
void display()
{
    Node *temp = front;
    if (front == NULL && rear == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
     enQueue(10);
    enQueue(20);

    display();
}