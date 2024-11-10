#include<iostream>
using namespace std;
const int N=3;//changed as needed
int A[N][N];
int B[N][N];
void intialiseA();
void min_finderA(int &minA, int &row_minA, int &col_minA);
void min_finderB(int &minB, int &row_minB, int &col_minB);
void swap();
void displayA();
void displayB();

int main(){

  intialiseA();
  swap();
  cout<<"the matrices of A and B after swapping the min of A with the min of B :"<<endl;
  displayA();
  displayB();

    return 0;
}
void intialise()
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
void min_finderA(int &minA, int &row_minA, int &col_minA)
{
    row_minA=col_minA=0;
    minA=A[0][0];
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++){
        if (A[i][j]<minA){
            minA =A[i][j];
            row_minA=i;
            col_minA=j;
        }
    }
 }
}

void min_finderB(int &minB, int &row_minB, int &col_minB)
{
    row_minB=col_minB=0;
    minB=B[0][0];
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++){
        if (B[i][j]<minB){
            minB =B[i][j];
            row_minB=i;
            col_minB=j;
        }
    }
 }
}
void swap( ){
    int min_rowA,min_colA,minA;
    int min_rowB,min_colB,minB;
    min_finderA( minA, min_rowA, min_colA);
    min_finderB( minB, min_rowB,min_colB);
    A[min_rowA][min_colA]=minB;
    B[min_rowB][min_colB]=minA;
}
void displayA(){
  
    cout<<"the matrix of A  :"<<endl;
    for(int i = 0; i<N ; i++){
     for( int j=0; j<N; j++){
      cout<<A[i][j]<<" ";
     }
     cout<<endl;
    }
}
void displayB(){
    cout<<"the matrix of B :"<<endl;
    for(int i = 0; i<N ; i++){
     for( int j=0; j<N; j++){
      cout<<B[i][j]<<" ";
     }
     cout<<endl;
    }
}