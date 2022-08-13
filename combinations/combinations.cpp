#include <iostream>
#include <vector>
using namespace std;

template<typename Type_>
std::ostream& operator<<(ostream& os, vector<Type_>& coutvec){
    cout << "{";
    for(auto itr = coutvec.begin(); itr != coutvec.end(); itr++){
        if(itr != coutvec.end()-1)    os << *itr << ", ";
        else                          os << *itr;           // 最後の列にはカンマは要らないので付けずにcout
    }
    cout << "}";
    return os;
}

vector<vector<int>> combinations(vector<int> arg_vec, int r=0){
    vector<vector<int>> ret_vec;
    vector<vector<int>> rest;
    vector<int> tmp_vec;
    vector<int> slice;
    int element = 0;
    if (r == 0) r = arg_vec.size();
    //cout << arg_vec << "から" << r << "個取ったときの組み合わせ" << endl;
    if (r == 1){
            for(int ele: arg_vec) ret_vec.push_back({ele});
    }
    else{
        ret_vec = {};
        for(int i=0; i<arg_vec.size(); i++){
            element = arg_vec[i];
            slice = {};
            slice.insert(slice.end(),arg_vec.begin()+i+1,arg_vec.end());
            //cout << slice << endl;
            rest = combinations(slice,r-1);
            for(vector<int> ele_vec: rest){
                tmp_vec = {element};
                tmp_vec.insert(tmp_vec.end(),ele_vec.begin(),ele_vec.end());
                ret_vec.push_back(tmp_vec);
            }
        }
    }
    return ret_vec;
}

int main(void){
    vector<int> numbers = {1,2,3,4,5};
    int n = 3;
    vector<vector<int>> combi_vec = combinations(numbers,n);
    
    for(vector<int> combi: combi_vec) cout << combi << endl;
    cout << "size: " << combi_vec.size() << endl;
    return 0;
}