#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void oneTerm();

void twoTerms(string s);

int main() {
    cout << "Calculator" << endl;
    cout << "" << endl;
    //
    //
    string s;
    cout << "1. Put the symbol: (accepted symbols: + - * / ^ √)" << endl;
    cin >> s;
    cout << "" << endl;
    cout << "" << endl;
    //
    if(s == "√") {
        oneTerm();
    } else if((s == "+") || (s == "-") || (s == "*") || (s == "/") || (s == "^")) {
        twoTerms(s);
    } else {
        cout << "ERROR" << endl;
        cout << "--> NOT A VALID SYMBOL" << endl;
    };
    return 0;
}

void twoTerms(string s) {
    int a, b;
    cout << "2. Put the numbers: (ex. 30 9)" << endl;
    cin >> a >> b;
    cout << "" << endl;
    //
    cout << "The answer is ";
    if(s == "+") {
        cout << a + b << endl;
    } else if(s == "-") {
        cout << a - b << endl;
    } else if(s == "*") {
        cout << a * b << endl;
    } else if(s == "/") {
        if(a % b == 0) {
            cout << a / b << endl;
        } else {
            cout << a / b << " with a remainder of " << a % b << endl;
        }
    } else if(s == "^") {
        cout << pow(a, b) << endl;
    };
}

void oneTerm() {
    int a;
    cout << "2. Put the number: (ex. 30 9)" << endl;
    cin >> a;
    cout << "" << endl;
    //
    cout << "The answer is ";
    cout << sqrt(a) << endl;
}
