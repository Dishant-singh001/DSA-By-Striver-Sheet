//wap in c++ to do hashing but use map instead of array (this will save you some memory by storing values that occurs )
#include <iostream>
using namespace std;
#include<map>
// creating hash function using map
void hashmap (string str){
    map <char,int> hmap;
    for(int i = 0; i < size(str); i++){
        hmap[str[i]]++;
    }

    for(auto it : hmap){
        cout << it.first << " -- > " << it.second << endl;

    }
}

//creating hash function to cout requency of words
// void hash_words (string str){
//     map <string,int> wordsmap;
//     for(string s : str){
//         wordsmap[s]++;

//     }

//     for (auto it : wordsmap){
//         cout << it.first << " --> " << it.second << endl;
//     }
// }
int main(){
    //characters to pass into hash map
    string str = "qwerdfc,12343531@#$(@)!";
    hashmap(str);

    // to store words in map 
    // string  words = "hello hii how are you"; // count frequncy of heelo, hii etc
    // hash_words(words);
}