#include <iostream>
using namespace std;
void read_arays(int A[] , int B[], int N);
void merge_and_display(int A[],int B[], int C[] ,int N);


int main(){
    int N;
    cout<<"enter the size of the arays N :";
    cin>>N;
    int A[N] ,B[N] ,C[2*N];
    read_arays(A,B,N);
    merge_and_display(A,B,C,N);
    return 0;
}


void merge_and_display(int A[],int B[], int C[] ,int N)
{ int i=0;
  int k=0;
  int j=0;
    while(i<N && j<N){
      if(A[i]<B[j]){
        C[k++]=A[i++];
      }  else{
        C[k++]=B[j++];
      }
    }
    while(i<N){
       C[k++]=A[i++]; 
    }
     while(j<N){
       C[k++]=B[j++]; 
    }
    cout<<"the new merged aray C :\n";
    for(int i=0; i<2*N ; i++)
    {
     cout<<C[i]<< endl;
    }

}
void read_arays(int A[] , int B[], int N)
{ 
  cout<<"enter the elements of aray A \n";
  for(int i=0; i<N ; i++)
  {
  cin>>A[i];
  }
  cout<<"enter the elements of aray B\n" ;
 for(int i=0; i<N ; i++)
  {
  cin>>B[i];
  }
}