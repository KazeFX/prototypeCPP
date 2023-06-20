#include <iostream>
#include <string>
using namespace std;

const char newline = '\n';
#define PI 3.14159

void test2dMatrix() {
    cout << "== test2dMatrix ==" << endl;
    int test[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }
}

void testString() {
    cout << "== testString ==" << endl;
    string mystring;
    mystring = "This is a string";
    cout << mystring << endl;
}

void arith() {
    cout << "== arith ==" << endl;
    int a, b;
    int result;

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result << endl;
}

int main() {
    cout << "Code Prototypes";
    cout << newline << endl;
    cout << PI << endl;
    test2dMatrix();
    testString();
    arith();
    return 0;
}
