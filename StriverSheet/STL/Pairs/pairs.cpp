#include <iostream>
using namespace std;
int main(){
    pair <int,int> p = {1,3};
    cout << p.first << endl;

    pair <int, pair<int,int>> p2 = {3, {1,2}};
    cout << p2.second.first << endl;

    pair <int , int> arr[] ={ {1,2}, {3,4}, {5,6}};
    cout << arr[1].first;
    return 0;
}