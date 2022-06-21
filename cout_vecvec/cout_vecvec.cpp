#include <iostream>
#include <vector>
using namespace std;

template<typename Type_> // vectorの中身をcoutで出力
std::ostream& operator<<(ostream& os, vector<Type_>& coutvec){
    cout << "{";
    for(auto element: coutvec){ os << element << ", ";}
    cout << "}";
    return os;
}
template<typename Type_> 
std::ostream& operator<<(ostream& os, vector<vector<Type_>> &coutvecvec){
    cout << "{";
    for(auto vec: coutvecvec){ os << vec << ", "; }
    cout << "}";
    return os;
}

int main(void){
    vector<vector<int>> vecvec = {{1,2,3},{4,5,6},{7,8,9}};
    cout << vecvec << endl;
}