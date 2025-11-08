#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "Dishnat";
    cout << str.substr(0, 3) << endl;
    int slen = str.length();
    cout << str[(slen - 1)];
}

