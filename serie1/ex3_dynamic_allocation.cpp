#include<iostream>
using namespace std;
const int N=3;//change it as you like
void intialise( int **A, int **B);
void sum(int **sumTAB,int **A, int **B);
void prod(int **prodTAB ,int **A, int **B);
void nbr_null(int **A, int **B , int *A_nullcount, int *B_nullcount);
void max_B(int **B, int *i_max, int *j_max);
void min_A(int **A, int *i_min, int *j_min);
void swap(int **A, int **B, int *i_max, int *j_max, int *i_min , int *j_min);
void display(int **A ,int **B ,int **sumTAB, int **prodTAB, int *A_nullcount, int *B_nullcount);
int main()
{
    int **A= new int* [N];
    int **B= new int* [N];
    int **sumTAB= new int* [N];
    int **prodTAB= new int* [N];
    for(int i=0;i<N; i++){
        A[i]= new int [N];
        B[i]= new int [N];
        sumTAB[i] = new int [N];
        prodTAB[i] = new int [N];
    }
    intialise(A , B );
    sum(sumTAB,A ,B );
    prod(prodTAB ,A ,B );

    int *A_nullcount = new int;
    int *B_nullcount = new int;

    nbr_null(A ,B , A_nullcount,B_nullcount);
    int *i_max = new int;
    int *j_max = new int;
    int *i_min = new int;
    int *j_min = new int;
    
    swap(A,B, i_max,  j_max, i_min , j_min);
    display(A, B, sumTAB, prodTAB,  A_nullcount, B_nullcount);
   
    for (int i = 0; i < N; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] prodTAB[i];
        delete[] sumTAB[i];
    }
    delete[] A;
    delete[] B;
    delete[] sumTAB;
    delete[] prodTAB;
    delete A_nullcount;
    delete B_nullcount;
    delete i_max;
    delete j_max;
    delete i_min;
    delete j_min;

    return 0;
}
void intialise( int **A, int **B)
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
void sum(int **sumTAB ,int **A, int **B)
{
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++)
    {
     sumTAB[i][j]=A[i][j]+B[i][j];
    }
 }      
}
void prod(int **prodTAB, int **A, int **B)
{    
 for(int i = 0; i<N ; i++){
    for(int j=0; j<N; j++){
        prodTAB[i][j]=0;
        for( int k=0; k<N; k++){
         prodTAB[i][j]+=A[i][k] * B[k][j];
        } 
    }
 }
}
void nbr_null(int **A, int **B , int *A_nullcount, int *B_nullcount)
{
    *A_nullcount=0;
    *B_nullcount=0;
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++){
        if (A[i][j]==0)(*A_nullcount)++;
        if (B[i][j]==0)(*B_nullcount)++;
        
    }
 }
}
void max_B(int **B, int *i_max, int *j_max)
{
    *i_max=0;
     *j_max=0; 
     int b_max=B[0][0];
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++){
        if (B[i][j]>b_max){
            b_max =B[i][j];
            *i_max=i;
            *j_max=j;
        }
    }
 }
}
void min_A(int **A, int *i_min, int *j_min)
{
    *i_min=0;
     *j_min=0; 
     int a_min=A[0][0];
 for(int i = 0; i<N ; i++){
    for( int j=0; j<N; j++){
        if (A[i][j]<a_min){
            a_min = A[i][j];
            *i_min=i;
            *j_min=j;
        }
    }
 }
}
void swap(int **A, int **B, int *i_max, int *j_max, int *i_min , int *j_min )
{
    min_A(A, i_min , j_min);
    max_B(B , i_max , j_max);
 int temp=A[*i_min][*j_min];
 A[*i_min][*j_min]=B[*i_max][*j_max];
 B[*i_max][*j_max]=temp;

}
void display(int **A, int **B, int **sumTAB, int **prodTAB,  int *A_nullcount, int *B_nullcount )
{
    cout<<"the sum of matrices A and B :"<<endl;
    for(int i = 0; i<N ; i++){
     for( int j=0; j<N; j++){
      cout<<sumTAB[i][j]<<" ";
     }
     cout<<endl;
    }
    cout<<"the product of matrices A and B :"<<endl;
    for(int i = 0; i<N ; i++){
     for( int j=0; j<N; j++){
      cout<<prodTAB[i][j]<<" ";
     }
      cout<<endl;
    }
    cout<<"the numbers of null values in A: "<<*A_nullcount<<endl;
    cout<<"the numbers of null values in b: "<<*B_nullcount<<endl;
    cout<<"the matrices of A and B after swapping the min of A with  the max of B :"<<endl;
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