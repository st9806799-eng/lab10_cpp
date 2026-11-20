#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int M = 4;
    const int N = 7;
    int a[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 101 - 50;
        }
    }

    cout << "Matrix 4x7:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    int minVal = a[0][0];
    int minRow = 0;
    int minCol = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    int flatIndex = minRow * N + minCol;
    cout << "Min element: " << minVal << endl;
    cout << "Indices: [" << minRow << "][" << minCol << "], linear index: " << flatIndex << endl;

    return 0;
}
