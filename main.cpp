#include <iostream>
#include <string>
#include <sstream>
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

void inputTest() {
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << endl;
}

void compareTest() {
    cout << "== compareTest ==" << endl;
    int a, b, c;
    a = 2;
    b = 7;
    c = (a > b) ? a : b;
    cout << c << endl;
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

void getLineTest() {
    string mystr;
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";

    cout << "What's your favorite team? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too!" << endl;
}

void sStreamTest() {
    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "==sStreamTest ==" << endl;

    cout << "Enter price: ";
    getline (cin, mystr);
    stringstream(mystr) >> price;

    cout << "Enter quantity: ";
    getline (cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
}

void whileTest() {
    cout << "== whileTest ==" << endl;
    int n = 10;
    while (n > 0) {
        cout << n << ", ";
        --n;
    }
}

void doWhileTest() {
    string str;
    do {
        cout << "Enter text: ";
        getline (cin, str);
        cout << "You entered: " << str << "\n";
    } while (str != "goodbye");
}

void forTest() {
    for (int n = 10; n > 0; n--) {
        cout << n << ", ";
    }
    cout << "liftoff!\n";
}

void forTestTwo() {
    int i, n;
    for (n = 0, i = 100 ; n != i ; ++n, --i) {
        cout << n << " and " << i << endl;
    }
}

void forRangeTest() {
    string str {"Hello!"};
}

int main() {
    //cout << "Code Prototypes";
    //cout << newline << endl;
    //cout << PI << endl;
    //test2dMatrix();
    //testString();
    //arith();
    //compareTest();
    //inputTest();
    //getLineTest();
    //sStreamTest();
    //whileTest();
    //doWhileTest();
    //forTest();
    //forTestTwo();
    return 0;
}
