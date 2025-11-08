// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){
//     string s = "leetcode";
//      int count = 0;
//     vector<pair<char,int>> hash;
//     for(char ch : s){
//         for(auto &it : hash){
//             if(it.first == ch){
//                 it.second++;
//             }
//         }
//     }
//     for(auto &it : hash){
//         cout << it.first << " --> " << it.second <<endl;
//         // if(it.second == 1) return count;
//         // count++;
//     }
//     cout << "hello";
//     return 0;
    
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count = 0;
    string s = "leetcode";
    vector<pair<char, int>> hash;

    for (char ch : s) {
        bool found = false; // track if char already exists

        // search for the character in vector
        for (auto &it : hash) {  // use reference (&)
            if (it.first == ch) {
                it.second++; // increment frequency
                found = true;
                break;
            }
        }

        // if char not found, add new pair
        if (!found) {
            hash.push_back({ch, 1});
        }
    }

    // print all pairs
    for (auto &it : hash) {
        cout << it.first << " --> " << it.second << endl;
    }

    for(char ch : s){
        for(auto &it : hash){
            if(ch == it.first){
                if(it.second == 1){
                    cout << count;
                    break;
                }
            }
        }
        count++;
    }

    cout << "hello";
    return 0;
}
