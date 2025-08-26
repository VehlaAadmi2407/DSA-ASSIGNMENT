A)

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int diag[3] = {10, 20, 30};
    cout << "Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << diag[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}



B)

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int triDiag[7] = {5, 6, 10, 20, 30, 7, 8};
    cout << "Tri-Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i - j == 1)
                cout << triDiag[i - 1] << " ";
            else if (i == j)
                cout << triDiag[n - 1 + i] << " ";
            else if (j - i == 1)
                cout << triDiag[2 * n - 1 + i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}



C)

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int lower[6] = {1, 2, 3, 4, 5, 6};
    cout << "Lower Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                cout << lower[k++] << " ";
            else
                cout << "0 ";
        }
        k = k - (n - i - 1);
        cout << endl;
    }
    return 0;
}



D)

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int upper[6] = {1, 2, 3, 4, 5, 6};
    cout << "Upper Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j)
                cout << upper[k++] << " ";
            else
                cout << "0 ";
        }
        k = k - (n - i - 1);
        cout << endl;
    }
    return 0;
}



E)
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int sym[6] = {1, 2, 3, 4, 5, 6};
    cout << "Symmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                cout << sym[i * (i + 1) / 2 + j] << " ";
            else
                cout << sym[j * (j + 1) / 2 + i] << " ";
        }
        cout << endl;
    }
    return 0;
}
