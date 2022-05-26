#include <iostream>
#include <string>
using namespace std;

template<typename Type_> // add関数が実行された際に、受け取った引数の情報を得てType_という変数で呼び出せるようにしている(らしい)
Type_ add(Type_ a, Type_ b);

int main(void){
    /* 
        関数テンプレートを用いて変数の型情報をパラメータ化し、
        その情報に合わせてある関数の戻り値の型・引数の型を決定させる 
    */
    string foo = "foo";
    string bar = "bar";

    int a = 3;
    int b = 4;

    float x = 3.14;
    float y = 1.592;

    cout << "int: " <<  add(a,b) << endl;       // int型のadd処理
    cout << "float: " << add(x,y) << endl;       // float型のadd処理
    cout << "string: " << add(foo, bar) << endl;  // stringのadd処理
    return 0;
}


template<typename Type_>
Type_ add(Type_ a, Type_ b){
    return a+b;
}
