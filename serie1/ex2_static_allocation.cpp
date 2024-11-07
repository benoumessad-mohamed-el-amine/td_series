#include <iostream>
using namespace std;
void read_integer( int A[], int N);
void return_max_min(int *min , int *max , int *i_min, int *i_max ,int A[] , int N);
void sort( int A[], int N);
void display(int A[], int N);
int main()
{
  int N, min , max , i_min, i_max;
  cout<<"enter the size of aray A : ";
  cin>>N; 
  int A[N];
  read_integer( A, N);
  return_max_min(&min , &max , &i_min , &i_max , A , N);
  sort(A, N);
  display( A, N);
  return 0;
}

 void read_integer( int A[], int N)
 {
    cout<<"enter values of aray A"<<endl;
    for(int i=0 ; i<N; i++)
    {
     cin>>A[i];
    }
    
 }
 void return_max_min(int *min , int *max , int *i_min, int *i_max, int A[] , int N)
 {
    *max = A[0];
    *min = A[0];
    *i_min=0;
    *i_max=0;
    for(int i=0 ; i<N; i++)
    {
        if(*max < A[i])
        {
          *max=A[i];
          *i_max=i+1;
        }
        if(*min > A[i])
        {
          *min=A[i];
          *i_min=i+1;
        }
    }
        cout<<"the minimum is: "<<*min << " and its index is: "<< *i_min<< endl;
        cout<<"the maximum is: "<<*max << " and its index is: "<< *i_max<< endl;
    
 }
 void sort( int A[], int N)
 {
  int temp=A[0];
  for(int i=0 ; i<N-1; i++)
  {
    for(int j=i+1 ; j<N; j++)
    {
     if(A[i]>A[j])
        { 
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        }
    }
  }
 }
void display(int A[], int N)
{
  cout<<"aray A sorted"<<endl;
   for(int i=0; i<N ; i++)
 {
   cout<<A[i]<<endl;
 }

}
