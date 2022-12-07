#include <iostream>
using namespace std;
int main () {
    int num1, num2;
    int sum, difference,product,quotient;
    cout << "\n Enter number1:";
    cin >> num1;
    cout << "\n Enter number2:";
    cin >> num2;
    sum = num1 + num2;
    cout << "\n The sum is:" << sum;
    difference = num1 - num2;
    cout << "\n The difference is:" << difference;
    product = num1 * num2;
    cout << "\n The product is:" << product;
    quotient = num1 / num2;
    cout << "\n The quotient is:" << quotient;
    return 0;
}
