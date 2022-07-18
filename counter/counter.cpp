/*
    PythonにおけるcollectionsモジュールのCounterのようなものは
    C++には存在しないようだったので自作してみる

    ここでのCounterは文字列から一文字ごとに切り取って、
    その出現回数をmapでまとめるといったような処理を行っている

    出現回数を調査対象となり得るのは文字列以外でもvectorや桁数の大きい数値など色々あるので
    できれば型テンプレートなどを用いてこうしたものにも対応できるようにしたい
*/

#include <iostream>
#include <vector>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

// 出来れば型テンプレートを使ってある程度汎用的に取り扱えるようなものにしたい
map<string, int> counter(string sample){
    map<string,int> count_map;
    string key;

    for(int i=0; i<sample.size(); i++){
        key = sample[i];
        
        if(count_map.find(key) != count_map.end()){
            count_map[key] += 1;
        }else{
            count_map[key] = 1;
        }
    }
    return count_map;
}

int main(void){
    string phrase = "How many roads must a man walk down"
                    "Before you call him a man?";
    cout << phrase << endl;

    map<string,int> string_data = counter(phrase);

    for(auto itr=string_data.begin(); itr!=string_data.end(); itr++){
        if(itr == string_data.begin())      cout << "{" << endl;
        
        cout << itr->first << ": " << itr->second << endl;  
    }
    cout << "}" << endl;
    return 0;
}