#include <iostream>
#include <string>
#include <cmath>
    using namespace std;

float a;
float b;
float c;
float c_2;

void berechnung_Hypotenuse() {
    a = pow(a, 2);
    b = pow(b, 2);

    c_2 = a + b;
    c = sqrt(c_2);

}

int main() {
    cout << "Hello there, this programm will help you find stuff out about your triangle." << '\n';
    cout << "Please state your length of site A: ";
    cin >> a;
    cout << a << '\n';
    cout << "Please state your length of site B: ";
    cin >> b;
    cout << b << '\n';

    berechnung_Hypotenuse();

    cout << "The Hypotenuse of your triangle is " << c << "cm long! ";

    return 0;
}