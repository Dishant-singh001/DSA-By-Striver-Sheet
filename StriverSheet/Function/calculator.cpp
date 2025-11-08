#include <iostream>
using namespace std;
int addi(int x, int y){
    return x + y;
}
int mul(int x, int y){
    return x * y;
}
int main(){
    int x = 8;
    int y = 9;
    int sum = mul(x,y);
    cout << sum;

}
