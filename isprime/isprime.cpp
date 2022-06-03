#include <iostream>

bool isprime(int number){
    int n = 2;
    while(n*n <= number){
        if (number%n == 0) return false;
        else n++;
    }return true;
}


int main(void){
    int x = 31;
    std::cout << (bool)isprime(x);
    return 0;
}