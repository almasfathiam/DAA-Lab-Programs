#include <iostream>
using namespace std;

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n = 1234;   // value added

    cout << "Number = " << n << endl;
    cout << "Sum of digits = " << sumDigits(n);

    return 0;
}