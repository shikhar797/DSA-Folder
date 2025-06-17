#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void print(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
node *InserAtEnd(node *head, int key)
{
    node *curr = head;
    node *temp = new node(key);
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
int search(node *haed, int key)
{
    node *curr = haed;
    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == key)
            return pos;
        pos++;
        curr = curr->next;
    }
    return -1;
}
node *insert(node *head, int pos, int key)
{
    node *curr = head;
    node *temp = new node(key);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    while (pos - 2 && curr->next != NULL)
    {
        curr = curr->next;
    }
    if (curr->next == NULL)
    {
        return head;
    }
    node *temp2 = NULL;
    temp2 = curr->next;
    curr->next = temp;
    temp->next = temp2;

    return head;
}
node *del(node *head)
{
    if (head->next == NULL || head == NULL)
        return NULL;
    node *temp = head->next;
    delete head; // here delete is used for memory de allocation
    return temp;
}
node *insertAtBegin(node *head, int key)
{
    node *temp = head;
    node *temp2 = new node(key);
    temp2->next = temp;
    return temp2;
}
node *create()
{
    int n;
    cout << "enter the number of element";
    cin >> n;
    node *head = NULL;
    node *curr = head;
    for (int i = 0; i < n; i++)
    {
        int a;
        cout << "enter the number of element " << i + 1 << endl;
        cin >> a;
        if (i == 0)
        {
            curr = new node(a);
            head = curr;
        }
        else
        {
            node *temp = new node(a);
            curr->next = temp;
            curr = curr->next;
        }
    }
    return head;
}
node *InsertInSorted(node *head, int x)
{
    if (head == NULL)
    {
        head = new node(x);
        return head;
    }
    if (head->data > x)
    {
        node *temp1 = new node(x);
        temp1->next = head;
        return temp1;
    }
    node *curr = head;
    while (curr->next->data < x && curr->next != NULL)
    {
        curr = curr->next;
    }
    node *temp = new node(x);
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int size(node *head)
{
    if (head == NULL)
        return -1;
    int c = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}
void *MiddleElement(struct node *head, int size)
{
    int c = (size / 2);
    while (c)
    {
        c--;
        head = head->next;
    }
    cout << head->data;
}
node *rev(node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    vector<int> v;
    node *curr = head;
    while (curr != NULL)
    {
        v.push_back(curr->data);
        curr = curr->next;
    }
    curr = head;
    while (curr != NULL)
    {
        curr->data = v.back();
        v.pop_back();
        curr = curr->next;
    }
    return head;
}
void searchNth(node *head, int len)
{
    if (len == 0)
    {
        cout << head->data;
        exit(0);
    }
    if (len < 0)
    {
        cout << "not possible";
        exit(0);
    }
    while (len)
    {
        len--;
        head = head->next;
    }
    cout << head->data;
}
void searchNthNode(node *head, int size)
{
    node *curr = head;
    while (size)
    {
        curr = curr->next;
        size--;
    }
    node *temp = head;
    while (curr != NULL)
    {
        temp = temp->next;
        curr = curr->next;
    }
    cout << temp->data;
    if (curr == NULL)
    {
        exit(0);
    }
}
node *delDuplicate(node *head)
{
    node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            node *temp = curr->next->next;
            delete curr->next;
            curr->next = temp;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
node *rev1(node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *nest=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nest;
    }
    return prev;
}
node *rec_rev(node *head,node *nest,node *curr,node *prev){
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

}

node *createc(){
    int n;
    cout<<"enter the number of element ";
    cin>>n;
    node *head=NULL;
    node *curr=head;
    for(int i=0;i<n;i++){
        int a;
        cout<<"enter the element ";
        cin>>a;
        if(i==0){
            curr=new node(a);
            head=curr;
        }
        else{
            node *temp=new node(a);
            curr->next=temp;
            curr=curr->next;
        }
    }
    curr->next=head;
    return head;
}
void printc(node *head){
    if(head==NULL) return;
    node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr!=head);
    
}

// node *insertcAtBegin(node *head,int key){
//     node *tail=head;
//     while(tail->next!=head){                naive approach
//         tail=tail->next;
//     }
//     node *temp=new node(key);
//     temp->next=head;
//     tail->next=temp;
//     return temp;
// }
node *insertcAtBegin(node *head,int key){
    node *temp=new node(key);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    return head;
}

// node *insertcAtEnd(node *head,int key){
//     node *temp=new node(key);
//     if(head==NULL){
//         temp->next=temp;
//         return temp;
//     }
//     node *curr=head;
//     do                                          naive approach
//     {
//         curr=curr->next;
//     } while (curr->next!=head);
//     curr->next=temp;
//     temp->next=head;
//     return head;
// }

node *insertcAtEnd(node *head,int key){
    node *temp=new node(key);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    node *temp1=head->next;
    head->next=temp;
    temp->next=temp1;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    return head->next;
}
// node *delcHead(node *head){
//     if(head->next==head){
//         delete head;
//         return NULL;
//     }
//     node *curr=head;           naive approach
//     do
//     {
//         curr=curr->next;
//     } while (curr->next!=head);
//     node *temp=head->next;
//     delete head;
//     curr->next=temp;
//     return temp;
    
// }

node *delcHead(node *head){
    if(head->next==head){
        delete head;
        return NULL;
    }
    node *curr=head;
    head->data=curr->next->data;
    curr=curr->next;
    node *temp=curr->next;
    delete curr;
    head->next=temp;
    return head;
}

node *delKthNode(node *head,int k){
    if(head->next==head){
        delete head;
        return NULL;
    }
    node *curr=head;
    node *prev;
    if(k==1){
    head->data=curr->next->data;
    curr=curr->next;
    node *temp=curr->next;
    delete curr;
    head->next=temp;
    return head;

    }
    else{
        while((k-1)){
            prev=curr;
            curr=curr->next;
            k--;
        }
        node *temp=curr->next;
        prev->next=temp;
        delete curr;
        return head;
    }
}