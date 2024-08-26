#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
double num1 = 0;
string op = "";
double num2 = 0;
int main(void){
    cout << "I'm sorry you have to do math, can I help you?" << endl;
    while (true){
    cout << "first number";
    cin >> num1;
    cout << endl << "operator (+, -, *, /, **, rt)";
    cin >> op;
    cout << endl << "second number";
    cin >> num2;
    if(op == "+"){
        cout << num1 + num2;
    }
    else if(op == "*"){
        cout << num1 * num2;
    }
    else if(op == "-"){
        cout << num1 - num2;
    }
    else if(op == "**"){
        cout << pow(num1, num2);
    }
    else if(op == "/"){
        cout << num1/num2;
    }
    else if(op == "rt"){
        cout << pow(num1, (1/num2));
    }
    cout << endl;
    }
    return 0;
}
