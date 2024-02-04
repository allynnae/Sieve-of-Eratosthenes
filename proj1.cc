/**
 *        @file: proj1.cc
 *      @author: Allison McKee
 *        @date: January 25, 2024
 *       @brief: .cc file containing the main
 */

#include <iostream>
#include <vector>
#include <cmath>
#include "proj1.h"

using namespace std;

// Main function
int main(int argc, char *argv[]){
    // Checking if the correct number of arguments is present
    if(argc < 2){
        cout << "Missing Argument" << endl;
        return 1;
    }
    else if(argc > 2){
        cout << "Too Many Arguments" << endl;
        return 1;
    } 
    try{
        // Convert string to integer
        int n = stoi(argv[1]);
        
        // Call sieve of eratosthenes function
        sieveOfEratosthenes(n);
    } 
    catch(const invalid_argument& e){
        // If anything in the try block fails, print this and exit
        cout << "Nan" << endl;
        return 1;
    }
    
    return 0;
}