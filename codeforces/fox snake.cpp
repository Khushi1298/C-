#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int row = 1, col = 1;
    int dir = 0; // 0: right, 1: down, 2: left, 3: up
    int count = 0;

    for (int i = 0; i < n * m; i++) {
        if (count == m) {
            count = 0;
            row += 2;
            col--;
            dir = 1;
        } else if (count == m - 1) {
            count = 0;
            dir = 2;
        } else if (count == -1) {
            count = 0;
            row -= 2;
            col++;
            dir = 3;
        } else if (count == -m + 1) {
            count = 0;
            dir = 0;
        }

        if (dir == 0) {
            col++;
        } else if (dir == 1) {
            row++;
        } else if (dir == 2) {
            col--;
        } else if (dir == 3) {
            row--;
        }

        if (row >= 1 && row <= n && col >= 1 && col <= m) {
            if (i == 0) {
                cout << '#';
            } else if (i % m == 0) {
                cout << '\n' << '#';
            } else {
                cout << '#';
            }
        } else {
            count++;
            i--;
        }
    }

    return 0;
}
