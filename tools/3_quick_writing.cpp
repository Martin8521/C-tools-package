//快写（int）
#include <iostream>
using namespace std;

inline void write(int x){
    if (x < 0){
        putchar('-');
        x = -x;
    }
    if (x > 9){
        write(x / 10);
    }
    putchar(x % 10 + '0');
}

int main(){
    write(123);
}