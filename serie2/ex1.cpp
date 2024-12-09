#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertbeginning(Node *& H , int val);
void insertend( Node *& H, int val);
void createlist(Node*& head,int N);
void Wsacrficing(Node*& D1, Node*& D2);
void Nsacrficing(Node* D1,Node* D2, Node*& D3);
void display(Node *D); 
int main(){
 Node *D1= nullptr;
 Node *D2= nullptr;
 
 int N1,N2,choice;
 cout<<"enter the size of the first lists : ";
 cin>>N1;
 createlist(D1 ,N1 );
 cout<<"enter the size of the second list : ";
 cin>>N2;
 createlist(D2 ,N2 );
 cout<<"choose: (2) for sacrficing the lists (1)for not sacrficing the lists : ";
 cin>>choice;
 if(choice==1){
  Node* D3 = nullptr;
  Nsacrficing( D1, D2,  D3);
  cout<<"the new list without sacrficing: "<<endl;
  display(D3);
}else{
  Wsacrficing( D1, D2);
  cout<<"the new list with sacrficing: "<<endl;
  display(D1);
}

return 0;
}
void createlist(Node*& head,int N){
   int x;
   for(int i =0; i<N ; i++){
    cout<<"enter the value of node N("<<i+1<<"): ";
    cin>>x;
    insertbeginning(head,x);
   }
        
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


void Nsacrficing(Node* D1,Node* D2, Node*& D3){
   Node* c = D1;
   while(c !=nullptr){
    insertend(D3, c->data);
    c=c->next;
   }
   c = D2;
   while(c!= nullptr){
    insertend(D3, c->data);
    c=c->next;
   }
}
void Wsacrficing(Node*& D1, Node*& D2){
   if(D1==nullptr){
    D1=D2;
    D2=0;
   }else{
    Node *c=  D1;
    while(c->next!=0){
        c=c->next;
        }
        c->next=D2;
        D2=0;
    }
    D2=nullptr;
}
void display(Node *D){
 Node *c=D;
while(c != nullptr){
    cout<<c->data<<"->";
    c=c->next;
}cout<<"nullptr"<<endl;
}