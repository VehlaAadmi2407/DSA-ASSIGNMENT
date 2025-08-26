#include <iostream>
using namespace std;
const int MAX = 50;
struct Triplet {
    int row, col, val;
};

int createTriplet(int mat[10][10], int rows, int cols, Triplet trip[]) {
    int k = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (mat[i][j] != 0)
                trip[k++] = {i, j, mat[i][j]};
    trip[0] = {rows, cols, k - 1};
    return k;
}

void display(Triplet trip[], int size) {
    cout << "Row Col Val\n";
    for (int i = 0; i < size; i++)
        cout << trip[i].row << " " << trip[i].col << " " << trip[i].val << endl;
}

void transpose(Triplet a[], Triplet result[]) {
    int k = 1;
    result[0] = {a[0].col, a[0].row, a[0].val};
    for (int col = 0; col < a[0].col; col++) {
        for (int i = 1; i <= a[0].val; i++) {
            if (a[i].col == col)
                result[k++] = {a[i].col, a[i].row, a[i].val};
        }
    }
}

void add(Triplet a[], Triplet b[], Triplet result[]) {
    if (a[0].row != b[0].row || a[0].col != b[0].col) {
        cout << "Matrix dimensions do not match for addition.\n";
        return;
    }
    result[0] = {a[0].row, a[0].col, 0};
    int i = 1, j = 1, k = 1;
    while (i <= a[0].val && j <= b[0].val) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
            result[k++] = a[i++];
        else if (a[i].row > b[j].row || (a[i].row == b[j].row && a[i].col > b[j].col))
            result[k++] = b[j++];
        else {
            int sum = a[i].val + b[j].val;
            if (sum != 0)
                result[k++] = {a[i].row, a[i].col, sum};
            i++; j++;
        }
    }
    while (i <= a[0].val) result[k++] = a[i++];
    while (j <= b[0].val) result[k++] = b[j++];
    result[0].val = k - 1;
}

void multiply(Triplet A[], Triplet B[], Triplet result[]) {
    if (A[0].col != B[0].row) {
        cout << "Matrix dimensions not valid for multiplication.\n";
        return;
    }
    int Bmat[10][10] = {0};
    for (int i = 1; i <= B[0].val; i++)
        Bmat[B[i].row][B[i].col] = B[i].val;
    int Cmat[10][10] = {0};
    for (int i = 1; i <= A[0].val; i++) {
        for (int j = 0; j < B[0].col; j++) {
            Cmat[A[i].row][j] += A[i].val * Bmat[A[i].col][j];
        }
    }
    createTriplet(Cmat, A[0].row, B[0].col, result);
}

int main() {
    int mat1[10][10] = {
        {1, 0, 0},
        {0, 0, 2},
        {0, 3, 0}
    };
    int mat2[10][10] = {
        {0, 5, 0},
        {0, 0, 0},
        {7, 0, 0}
    };
    Triplet A[MAX], B[MAX], Sum[MAX], TransA[MAX], Prod[MAX];
    int sizeA = createTriplet(mat1, 3, 3, A);
    int sizeB = createTriplet(mat2, 3, 3, B);
    cout << "Matrix A (Triplet):\n";
    display(A, sizeA);
    cout << "\nMatrix B (Triplet):\n";
    display(B, sizeB);
    transpose(A, TransA);
    cout << "\nTranspose of Matrix A:\n";
    display(TransA, TransA[0].val + 1);
    add(A, B, Sum);
    cout << "\nA + B:\n";
    display(Sum, Sum[0].val + 1);
    multiply(A, B, Prod);
    cout << "\nA * B:\n";
    display(Prod, Prod[0].val + 1);
    return 0;
}
