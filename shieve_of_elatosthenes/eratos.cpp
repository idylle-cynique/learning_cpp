/* C++版エラトステネスの篩 */ 

#include <vector>
#include <iostream>
using namespace std;

vector<int> elatos(int number){
    vector<bool> shieve(number+1,true);
    vector<int> primes(0);
    shieve[0] = false; shieve[1] = false;

    int n = 2;
    while(n*n < number){
        if(shieve[n]){ // nが素数であるとき
            for(int i=2; n*i<=number; i++){  // 素数nの倍数を非素数判定に切り替える
                shieve[n*i] = false; 
            }           
        }
        n += 1;
    }
    for(int n=2; n<=number; n++){
        if(shieve[n]){
            primes.push_back(n);
        }
    }
    //for(int i=1; i<=number; i++){cout << i << ": " << shieve[i] << endl;}
    //for(int i=0; i<primes.size(); i++){cout << primes[i] << endl;}
    return primes;
}

void print_vector(vector<int> vec){
    cout << "{";
    for(int i=0; i<vec.size(); i++){
        if(i<vec.size()-1){
            cout << vec[i] << ", ";
        }
        else{
            cout<<vec[i];
        }
    }
    cout << "}";
    return;
}

int main(void){
    vector<int> vec(0);
    vec =  elatos(100000);
    print_vector(vec);
    return 0;
}