#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int M = 5;
    const int N = 7;
    int a[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 21 - 10;
        }
    }

    cout << "Matrix 5x7:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < M; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += a[i][j];
        }
        cout << "Row " << i << ": sum = " << sum << endl;
    }

    return 0;
}
