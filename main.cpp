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

/*void forRangeTest() {
    cout << "== forRangeTest ==" << endl;
    string str {"Hello!"};
    for (char c : str) {
        cout << "[" << c << "]";
    }
    cout << '\n';
}*/

void forRangeTestTwo() {
    string strT {"Hell"};
    for (auto c : strT) {
        cout << "o" << c << "o";
    }
}

void testJumpStatement() {
    for (int n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", ";
    }
}

void goToTest() {
    int n = 10;
    mylabel:
        cout << n << ", ";
        n--;
        if (n > 0) goto mylabel;
        cout << "let's go";
}

void switchStatementTest() {
    cout << "Enter case: ";
    int str;
    cin >> str;
    switch (str) {
        case 1:
            cout << "Case is: " << str;
            break;
        case 2:
            cout << "Case is: " << str;
            break;
        default:
            cout << "Wasn't 1 or 2";
    }
}

int additionFunction(int a, int b) {
    int r = a + b;
    return r;
}

// Reference modifier instead of value.
void duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

void dublicateMain() {
    cout << "== dublicateMain ==";
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x = " << x << ", y = " << y << ", z = " << z;
}

string concatenate(const string& a, const string& b) {
    return a +" "+ b;
}

inline string inlineConc(const string& a, const string& b) {
    return a + b;
}

inline int divide (int a, int b = 2) {
    return a / b;
}


int main() {
    cout << "Code Prototypes";
    cout << newline << endl;
    cout << PI << endl;
    test2dMatrix();
    testString();
    arith();
    //compareTest();
    //inputTest();
    //getLineTest();
    //sStreamTest();
    //whileTest();
    //doWhileTest();
    //forTest();
    //forTestTwo();
    //forRangeTest();
    //forRangeTestTwo();
    //testJumpStatement();
    //goToTest();
    //switchStatementTest();
    //cout << additionFunction(2, 1) << endl;
    //dublicateMain();
    //cout << concatenate("Hello", "world");
    //cout << inlineConc("Hello", "world");
    //cout << divide(10);
    return 0;
}
