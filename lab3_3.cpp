#include <iostream>
using namespace std;

int main(){

    float x = 2, y = 0;
    y = 1/x;
    while(x < 70){
        y = y + (1/x);
        x++;
    }
    cout << y;
    return 0;
}
