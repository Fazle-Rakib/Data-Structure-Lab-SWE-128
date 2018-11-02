#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int dataP)
    {
        data = dataP;
        next = NULL;
    }
};
void insertAtHead(Node** head, int data)
{
    Node* newNode=new Node(data);
    newNode->next =(*head);
    (*head) = newNode;

}
void traverse(Node* head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
         head=head->next;
    }
    cout << endl;
}
void Length(Node* head)
{
    int i = 1;
    while(head->next != NULL)
    {
        head = head->next;
        i++;
    }
    cout << "Length of Link-list : " << i << endl;
}

void insertAfterPos(Node* head,int pos, int data)
{
    int i=1;
    Node*tmp=NULL;


        while(i<=pos)
        {
            tmp=head;
            head=head->next;
            ++i;
        }

        Node* newNode = new Node(data);
        newNode->next = tmp->next;
        tmp->next = newNode;
}
void deleteHead(Node** head)
{
    if(*head == NULL)
    {
        return;
    }
    else
    {
        Node* temp = (*head);
        *head = temp->next;
        return;
    }
}
void deleteTail(Node** head)
{
    Node* temp = (*head);
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
void deletePos(Node**head,int pos)
{
    int i=1;
    Node* tmp=(*head);

    if(pos==1)
    {
        //(*head)=tmp->next;
        deleteHead(head);
        return;
    }
    while(i < pos-1 && tmp != NULL) // i < pos-1
    {
        tmp = tmp->next;
        ++i;
    }
    tmp->next = tmp->next->next;

}
void insertAtTail(Node* head,int data)
{
    while(head->next != NULL)
    {
        head=head->next;
    }

    Node* newNode=new Node(data);
    newNode->next = NULL;
    head->next = newNode;
}
int main()
{
    struct Node*head=NULL;
    insertAtHead(&head,5);
    insertAtHead(&head,10);
    insertAfterPos(head,1,4);
    insertAtTail(head,7);
    insertAtHead(&head,12);
    insertAtHead(&head,63);
    insertAfterPos(head,1,43);
    insertAtTail(head,71);

    cout << "Full Link-list : ";
    traverse(head);

    deletePos(&head,1);
    cout << "After deleting Head : ";
    traverse(head);

    deleteTail(&head);
    cout << "After deleting Tail : ";
    traverse(head);

    Length(head);

    return 0;

}
