#include <iostream>
using namespace std;

void read_arrays(int *A, int *B, int N);
void merge_and_display(int *A, int *B, int *C, int N);

int main() {
    int N;
    cout << "Enter the size of the arrays N: ";
    cin >> N;

    int *A = new int[N];
    int *B = new int[N];
    int *C = new int[N + N];

    read_arrays(A, B, N);
    merge_and_display(A, B, C, N);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

void merge_and_display(int *A, int *B, int *C, int N) {
    int i = 0, j = 0, k = 0;

    while (i < N && j < N) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < N) {
        C[k++] = A[i++];
    }

    while (j < N) {
        C[k++] = B[j++];
    }

    cout << "The new merged array C:\n";
    for (int i = 0; i < N + N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}

void read_arrays(int *A, int *B, int N) {
    cout << "Enter the elements of array A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Enter the elements of array B:\n";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
}
