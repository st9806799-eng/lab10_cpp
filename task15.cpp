#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int N = 3;
    int a[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 21 - 10;
        }
    }

    cout << "Matrix 3x3:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    int mainDiagSum = 0;
    int secDiagSum = 0;
    int bothDiagsSum = 0;

    for (int i = 0; i < N; i++) {
        mainDiagSum += a[i][i];
        secDiagSum += a[i][N - 1 - i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                bothDiagsSum += a[i][j];
            }
        }
    }

    cout << "Main diagonal sum: " << mainDiagSum << endl;
    cout << "Secondary diagonal sum: " << secDiagSum << endl;
    cout << "Sum of elements on diagonals (without double counting center): " << bothDiagsSum << endl;

    return 0;
}
