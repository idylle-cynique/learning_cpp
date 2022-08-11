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
    cout << "}" << endl;
    return os;
}

vector<vector<int>> permutations(vector<int> vec){
    vector<vector<int>> ret_vec;
    vector<vector<int>> rest;
    vector<int> slice;
    vector<int> tmp_vec;
    int element = 0;

    if (vec.size() == 1){
        return {vec};
    }
    else{
        ret_vec = {};
        for(int i=0; i<vec.size(); i++){ 
            element = vec[i];
            slice = {};
            slice.insert(slice.begin(), vec.begin(), vec.begin()+i);
            slice.insert(slice.end(), vec.begin()+i+1, vec.end());
            rest = permutations(slice); 

            cout << element << ":" << slice << endl;
            for(vector<int> ele_vec: rest){
                tmp_vec = {element};
                tmp_vec.insert(tmp_vec.end(),ele_vec.begin(),ele_vec.end());
                cout << tmp_vec << endl;
                ret_vec.push_back(tmp_vec);
            }
        }
        return ret_vec;
    }

    return ret_vec;
}

int main(void){
    vector<int> vec = {1,2,3,4,5};
    cout << vec << endl;
    vector<vector<int>> combi_vec = permutations(vec);

    for(vector<int> cv: combi_vec){ cout << cv;}
    cout << "size: " << combi_vec.size() << endl; 
    return 0;
}