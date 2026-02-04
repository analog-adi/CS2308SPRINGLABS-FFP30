/*I want to make so that user can input the value rather than a fix value
 * Criteria for a prime number
 *
 * 1.  The number should only have 2 factors i.e 1 and the number itself
 * 2.  The number should be greater than 1
 * 3.  No even number is a prime number.
 * 4.  2 is the only even prime number
 * The process:
 *
 * first check is the number is greater than 1, if number less than 1, return false
 *
 * second; use loop to check if the number has more than 2 factors.
 */



#include <iostream>

bool isPrime(int number);

int main() {
   int NumberIs;
    std::cout << "Enter a number: "; //Ask the user for the input
    std:: cin >> NumberIs;
    std::cout << isPrime(NumberIs);    //Call function for prime number identifications
    return 0;
}

bool isPrime(int number) {
    if (number<= 1) return false; //check is the number is greater than 1, if number less than 1, return false
    for (int StartPoint = 2; StartPoint <= (number/2); StartPoint++) { //use loop to check if the number is only divisible by itself. Logic: the highest factor of any number is it's half.
        if (number % StartPoint == 0) return false;
    }
    return true;
}