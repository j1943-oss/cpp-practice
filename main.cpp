#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;

    cout << "Sum is: " << sum << endl;

    if (sum % 2 == 0) {
        cout << "The sum is even." << endl;
    } else {
        cout << "The sum is odd." << endl;
    }
    if (a > b) {
        cout << "The first number is greater than the second number." << endl;
    } else if (a < b) {
        cout << "The second number is greater than the first number." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}