#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertbeginning(Node *& H , int val);
void insertend( Node *& H, int val);
void createlist(Node*& head,int N);
void display(Node *D); 
void partitionWsacrficing(Node*& D1, Node*& D2, int N);
void partitionNsacrficing(Node* D1,Node*& D2, Node*& D3, int N);
int main(){
Node *D1=nullptr;
Node* D2= nullptr;
int N,choice;
cout<<"enter N the number of nodes in the list (N must be even): ";
cin>>N;
while(N%2!=0){
cout<<"plz enter again (N must be even): ";
cin>>N;
}
createlist(D1 ,N );
 cout<<"choose: (2) for sacrficing the lists (1)for not sacrficing the lists : ";
 cin>>choice;
 if(choice==1){
  Node* D3 = nullptr;
  partitionNsacrficing( D1, D2,  D3, N);
  cout<<"the new list without sacrficing: "<<endl;
  cout<<"first partition: ";
  display(D2);
   cout<<"second partition: ";
  display(D3);
}else{
  partitionWsacrficing( D1, D2, N);
  cout<<"the new list with sacrficing: "<<endl;
  cout<<"the first list: ";
  display(D1);
  cout<<"the second list: "; 
  display(D2);
}


    return 0;
}
void insertbeginning(Node*& H, int val){
    Node* nov = new Node;
    nov->data=val;
    nov->next=H;
    H=nov;

}
void insertend( Node *& H, int val){
    if(H==nullptr){
     Node *nov = new Node;
     nov->data= val;
     nov->next= nullptr;
     H=nov;
    } else {
        Node * c= H;
        while(c->next!=nullptr){
         c=c->next;
        }
        c->next= new Node;
        c->next->data=val;
        c->next->next=nullptr;
    }
}
void createlist(Node*& head,int N){
   int x;
   for(int i =0; i<N ; i++){
    cout<<"enter the value of node N("<<i+1<<"): ";
    cin>>x;
    insertbeginning(head,x);
   }
}
void partitionWsacrficing(Node*& D1, Node*& D2,int N){
int i=0;
Node* c= D1;
while(c!=nullptr && i<(N/2)-1){
    c=c->next;
    i++;
}
if(c!=nullptr){
D2=c->next;
c->next=nullptr;
}
}
void partitionNsacrficing(Node* D1,Node*& D2, Node*& D3, int N){
int i=0;
Node* c= D1;
while(c!=nullptr&& i<N/2 ){
insertend(D2, c->data);
c=c->next;
i++;
}
i=0;
while(c!=nullptr&& i<N/2 ){
insertend(D3, c->data);
c=c->next;
i++;
}
}
void display(Node *D){
 Node *c=D;
while(c != nullptr){
    cout<<c->data<<"->";
    c=c->next;
}cout<<"nullptr"<<endl;
}