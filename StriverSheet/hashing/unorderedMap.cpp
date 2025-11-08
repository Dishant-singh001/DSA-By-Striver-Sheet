// perform hashing using unordered map (this takes O(1) time complexity to retrive and insert data )
#include <iostream>
#include <unordered_map>
using namespace std;

//creating a hash function that use unorderd map 

void unodered_hashmap (string s){

    unordered_map<char, int> uomap;

    for(char ch : s){
        uomap[ch]++;

    }

    //retriving data from unordeed map
    for(auto it : uomap){
        cout << it.first << " --> " << it.second << endl;
        // if(it.second == 1){
        //     cout << it.first << endl;
            
        // }
    }

}

int main () {
    string str = "dishantprerna";
    unodered_hashmap(str);
}