#include <iostream>
using namespace std;

int sumUpToN(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int a;
    int b;

    cout << "Enter N: ";
    cin >> a;
    while (a < 0) {
        cout << "Please enter a non-negative integer." << endl;
        cin >> a;
    } 
    cout << "Sum is: " << sumUpToN(a) << endl;
    cout << "The sum is " << (isEven(sumUpToN(a)) ? "even" : "odd") << endl;
  
    return 0;

}