#include <iostream>
#include <cmath>
using namespace std;
//Write a function that accept one positive integer argument and returns true if the argument is a prime number, or false otherwise.
//Can assume it will use bool as it wants true or false
//create an output asking for an positive integer and an input to store the integer
//int a bool statement then define the bool statement below
//set prime to true by default and have conditions it must pass to remain true
//set the conditions for not prime using sqrt since a whole number from square root is not prime
// 0 and 1 not prime so have an if statement to check condition
// create else statement using % to see if remainder is 0
//use function in main in a if else statement for prime and non prime numbers
//bug missing a ) on the end of the function in main
//bug missing <cmath> header
bool prime_check(int);

int main() {
    int number;
    cout << "Please enter one positive integer: ";
    cin >> number;

    if (prime_check(number)){
        cout << number << " is a prime number.\n";
    }else
        cout << number << " is not a prime number.\n";
        
    return 0;
}

bool prime_check(int number) {
    bool isPrime = true;
    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else 
        for (int i = 2; i < sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
    return isPrime;
}
