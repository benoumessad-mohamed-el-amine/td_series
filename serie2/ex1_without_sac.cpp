#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* createnode( int val);
void add(node &*head,int val);
void display(node* head);
node* linkthelists(node* D1, node* D2);
void creatlist(node *&head);
int main(){
    node *D1=nullptr;
    node *D2=nullptr;

 
 return 0;
}
node* createnode( int val){
    node* nov= new node;
    nov->data=val;
    nov->next=nullptr;
    return nov;
}
void addnode(node*& head,int val){
    node* added= createnode( val){
   if(head==nullptr){
    head= added;
   }else{
    node* temp=head;
    while(temp->next!==nullptr){
        temp=temp->next;
    }
    temp->next= added;
   }

}
void display(node* head){
    node* temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
node* linkthelists(node* D1, node* D2);
