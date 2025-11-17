#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {      // loop from 2 to n
        bool isPrime = true;            // assume i is prime

        for (int j = 2; j * j <= i; j++) {  // check divisors up to sqrt(i)
            if (i % j == 0) {           // if divisible, not prime
                isPrime = false;
                break;                   // stop checking further
            }
        }

        if (isPrime)
            cout << i << " ";           // print the prime number
    }

    return 0;
}
