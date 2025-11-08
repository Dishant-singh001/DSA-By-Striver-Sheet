// Wap to check if two strings are ana gram or not? 
// Anagram means teo string contsin same element example listen and silent contain same element with same frequency

#include <iostream>
#include <map>
using namespace std;

// creating a function to check anagram using map
bool check_anagram(string s1, string s2){
    map<char,int> ana1;
    for(char ch : s1){
        ana1[ch]++;
    }
    for(char ch : s2){
        ana1[ch]--;
    }

    // checking for non zero
    for(auto it : ana1){
        if(it.second != 0){
            return false;
        }
    }

    return true;

} 
int main(){
    string A = "listen";
    string B = "silent";
    cout << check_anagram(A,B);
}