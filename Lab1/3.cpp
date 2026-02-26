#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int tr = 2; tr < n / 2; tr++)
        if ((n % tr) == 0)
            return false;

    return true;
}

int ex3() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is prime !" << endl;
    else
        cout << n << " is NOT prime !" << endl;

    return 0;
}
