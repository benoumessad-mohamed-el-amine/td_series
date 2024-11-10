#include <iostream>
#include <string>
using namespace std;
struct product{
    string code;
    int weight;
    int price;
    };
void init(product &M  );
product modify(product &M);
void display(product &M );

int main(){
product M1, M2 , M ;
cout<<"enter infos about product M1 :"<<endl;
init(M1 );
cout<<"enter infos about product M2 :"<<endl;
init(M2 );
cout<<"enter infos about product M1 that you wanna modify :"<<endl;
M = modify(M1);
cout<<"products before modification : "<<endl;
cout<<" infos about product M1 :"<<endl;
display(M1);
cout<<" infos about product M2 :"<<endl;
display(M2);
cout<<"product after modification : "<<endl;
cout<<" infos about product M1 :"<<endl;
display(M);
cout<<" infos about product M2 :"<<endl;
display(M2);
    
return 0;
}
void init(product &M){
  cout<<"the product code: ";
  cin>>M.code;
  cout<<"the product weight: ";
  cin>>M.weight;
  cout<<"the product price: ";
  cin>>M.price;
  cout<<endl;
}
product modify(product &M){
     cout<<"the product code: ";
  cin>>M.code;
  cout<<"the product weight: ";
  cin>>M.weight; 
  cout<<"the product price: ";
  cin>>M.price;
  cout<<endl;
  return M;  
}
void display(product &M){
cout<<"the product code: "<<M.code<<endl;
cout<<"the product price: "<<M.price<<endl;
cout<<"the product weight: "<<M.weight<<endl;
cout<<endl;
}