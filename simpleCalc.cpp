#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void oneTerm(string s);

void twoTerms(string s);

int main() {
    cout << "Calculator" << endl;
    cout << "" << endl;
    //
    //
    string s;
    cout << "1. Put the symbol: (accepted symbols: + - * / ^ √ !)" << endl;
    cin >> s;
    cout << "" << endl;
    cout << "" << endl;
    //
    if((s == "√") || (s == "!")) {
        oneTerm(s);
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
    cout << "2. Put the numbers: (for example: 30 9)" << endl;
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

void oneTerm(string s) {
    int a;
    cout << "2. Put the number: (for example: 16)" << endl;
    cin >> a;
    cout << "" << endl;
    //
    cout << "The answer is ";
    if(s == "√")
        cout << sqrt(a) << endl;
    else if(s == "!") {
        int total = 1;
        for(int i = 1; i <= a; i++) {
            total = total * i;
        };
        cout << total << endl;
    } else {
        cout << "ERROR" << endl;
        cout << "--> NOT A VALID SYMBOL" << endl;
    }
}
