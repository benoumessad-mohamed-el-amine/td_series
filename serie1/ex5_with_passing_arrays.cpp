#include<iostream>
using namespace std;
const int N=3;//changed as needed
void intialise(int A[N][N],int B[N][N]);
void min_finder(int M[N][N],int &min, int &row_min, int &col_min);
void swap(int A[N][N],int B[N][N] );
void display(int A[N][N],int B[N][N]);
int main(){
int A[N][N];
int B[N][N];

  intialise(A,B);
  swap(A,B);
  display(A,B);

    return 0;
}
void intialise( int A[N][N], int B[N][N])
{
    cout<<"enter the elements of array A : "<<endl;
 for(int i = 0; i<N ; i++)
 {
    for( int j=0; j<N; j++)
    {
      cin>>A[i][j];
      
    }
    
 }   
   cout<<"enter the elements of array B : "<<endl;
 for(int i = 0; i<N ; i++){
    for(int j=0; j<N; j++)
    {
      cin>>B[i][j];
    } 
    
 }
}
void min_finder(int M[N][N],int &min, int &row_min, int &col_min)
{
    row_min=col_min=0;
    min=M[0][0];
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++){
        if (M[i][j]<min){
            min =M[i][j];
            row_min=i;
            col_min=j;
        }
    }
 }
}
void swap(int A[N][N],int B[N][N] ){
    int min_rowA,min_colA,minA;
    int min_rowB,min_colB,minB;
    min_finder( A,minA, min_rowA, min_colA);
    min_finder( B,minB, min_rowB,min_colB);
    A[min_rowA][min_colA]=minB;
    B[min_rowB][min_colB]=minA;
}
void display(int A[N][N],int B[N][N]){
    cout<<"the matrices of A and B after swapping the min of A with the min of B :"<<endl;
    cout<<"the matrix of A  :"<<endl;
    for(int i = 0; i<N ; i++){
     for( int j=0; j<N; j++){
      cout<<A[i][j]<<" ";
     }
     cout<<endl;
    }
    cout<<"the matrix of B :"<<endl;
    for(int i = 0; i<N ; i++){
     for( int j=0; j<N; j++){
      cout<<B[i][j]<<" ";
     }
     cout<<endl;
    }
}