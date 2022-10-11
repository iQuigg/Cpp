#include <iostream>
#include <string>
#include <cmath> //Math functions
    using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    cout << "********** Calculator **********" << '\n';

    cout << "Please select either +, -, *,  /" << '\n';
    cin >> op;

    cout << "Please enter your first number: ";
    cin >> num1;

    cout << "Please enter your second number: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result;
            break;
        default:
            cout << "That isnt a valid request!";
    }

    cout << '\n';
    cout << "********************************";

    return 0;
}