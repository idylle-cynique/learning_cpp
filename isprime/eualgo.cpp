#include <iostream>

int gcd(int a, int b){
    if(a%b == 0)
        return b;
    else
        return gcd(b,a%b);
}
int lcm(int a, int b){
    return a*b / gcd(a,b);
}


int main(void){
    int x = 8;
    int y = 3;
    std::cout << gcd(x,y) << std::endl;
    std::cout << lcm(x,y) << std::endl;
    return 0;
}