#include "printhoge.h"
#include <iostream>

void printhoge(){
    std::cout << "hoge, world" << std::endl;
    std::cout << "ほげー" << std::endl;  // 文字コードをutf-8に設定しておかないと化ける
}