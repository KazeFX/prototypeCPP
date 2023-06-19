#include <iostream>
using namespace std;

void tryingThis() {
   int test[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "LOL" << endl;
    tryingThis();
    return 0;
}