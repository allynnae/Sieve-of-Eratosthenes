/**
 *        @file: proj1.h
 *      @author: Allison McKee
 *        @date: January 25, 2024
 *       @brief: .h file containing the sieve of eratosthenes function
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Sieve of Eratosthenes function
void sieveOfEratosthenes(int n){
    // Check if n is in the range [2, 30000]
    if(n < 2 || n > 30000){
        cout << "Out of Range" << endl;
        return;
    }

    // Create an ordered list l of all integers in the range [2, n]
    vector<bool> isPrime(n + 1, true);

    // Initialize the first prime number p = 2
    int p = 2;

    // Iterate over the ordered list l
    while(p <= sqrt(n)){
        if(isPrime[p]){
            for(int i = p * p; i <= n; i += p){
                isPrime[i] = false;
            }
        }
        p++;
    }

    // Print prime numbers
    for(int i = 2; i <= n; i++){
        // If it's a prime number, print it
        if(isPrime[i]){
            cout << i << " ";
        }
    }
    cout << endl;

    // Print composite numbers
    for(int i = 2; i <= n; i++){
        // If it's not a prime number, print it
        if(!isPrime[i]){
            cout << i << " ";
        }
    }
    cout << endl;
}