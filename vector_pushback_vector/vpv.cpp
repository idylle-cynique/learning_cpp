#include <vector>
#include <iostream>
using namespace std;


int main(void){
    // vectorにvectorをpush_backしたいときの実装方法と挙動を確認

    /* 初期値を与えたうえで任意のインデックスに配列を代入したいとき */
    vector<vector<int>> vecvec(3,{0,0,0}); // {0,0,0}で初期化された3つの要素を持つベクターを3つ格納できるベクター(二次元配列)を生成
    vector<int> vec = {1,2,3};

    vecvec[0] = vec ;
    //for(int i=0; i<vec.size(); i++){cout << vec[i] << endl;}

    for(int i=0; i<vecvec.size(); i++){
        for(int j=0; j<vecvec[0].size(); j++){
            cout << vecvec[i][j] << " ";
        }cout << endl;
    }
    
    cout << endl;


    /* 空の二次元vectorに一次元vectorを代入したいとき */
    vector<vector<int>> vv(3,{0,0,0});
    vv.push_back(vec);
    for(int i=0; i<vv.size(); i++){
        for(int j=0; j<vv[0].size(); j++){
            cout << vv[i][j] << " ";
        }cout << endl;
    }
    
    cout << endl;

    /* 初期値の入っていないただのベクターに長さの異なるベクターを挿入 */
    vector<vector<int>> becbec(0);
    vector<int> bec1 = {3,1,4};
    vector<int> bec2 = {1,5,9,2,6,5,3,5};

    becbec.push_back(bec1);
    becbec.push_back(bec2);
    for(int i=0; i<becbec.size(); i++){
        for(int j=0; j<becbec[i].size(); j++){
            cout << becbec[i][j] << " ";
        }cout << endl;
    }

    // 結論: いずれの場合でも実現可能。挿入するベクターの長さが異なってもOK
}