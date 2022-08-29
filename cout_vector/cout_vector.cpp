#include <iostream>
#include <vector>
using namespace std;

/* 
    vectorを引数として受け取った時の処理手続きをstd::ostreamに追加して
    pythonのprint()のようにcoutでvectorを一発出力できるようにする
*/

template<typename Type_>
std::ostream& operator<<(ostream& os, vector<Type_>& coutvec){
    cout << "{";
    for(auto itr = coutvec.begin(); itr != coutvec.end(); itr++){
        if(itr != coutvec.end()-1)    os << *itr << ", ";
        else                          os << *itr;
    }
    cout << "}";
    return os;
}
int main(void){
    vector<int> vec = {1,2,3,5,7,12};
    vector<double> d_vec = {3.14, 1.59};
    cout << vec << endl;
    cout << d_vec << endl;
}