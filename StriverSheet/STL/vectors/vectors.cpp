#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v; //same as arrab but do not have fix size
    v.push_back(1);   //add 1 in vector
    v.emplace_back(2); //add 2 at the back ; faster than pushback
    cout << v[1]; // print value at 0 index in vector v


    // {100,100,100,100,100} fixed
    vector <int> v2(5,100);

    vector<int> copy(v2); // copying v2 in copy

    // order to excees vector element using iterator
    vector <int> ::iterator it = v.begin(); // .begin give address of 0 index of v vector
    it++;
    cout << *(it) << " ";
    

    return 0;
}