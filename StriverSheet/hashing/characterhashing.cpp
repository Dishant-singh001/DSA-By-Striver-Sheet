// you will be given a string of lower case character , uppercase character and all characters you need to create three hash function to claculate the frquency and print them.
#include <iostream>
using namespace std;

//to claculate lowercase characters and print them

void lowercase_hash(string low){
    int hasharr[26] = {0};  // creating an array of size 26 (a to z) and initializing it with 0

    //getting frequncy (ch - 'a') will do (ch - 97) use ascii values 
    for(char ch : low){
        hasharr[ch - 'a']++;
    }

    //printing values
    for(int i = 0; i < 26; i++){
        if(hasharr[i] != 0){
            char ch = 'a' + i;
            cout << ch << " --> " << hasharr[i] << endl;
        }
    }
}

// hash function for upeer case letters
void uppercase_hash(string high){
    int hasharr[26] = {0};
    for(char ch : high){
        hasharr[ch - 'A']++;
    }

    //printing frequency
    for(int i = 0; i < 26; i++){
        if(hasharr[i] != 0){
            char ch = 'A' + i;
            cout << ch << " --> " << hasharr[i] << endl;
        }

    }
}

//hash funtion for all 256 characters present in ascii table
void hash_characters (string all){
    int hasharr[256] = {0};
    for(char ch : all){
        hasharr[ch]++;
    }
    //print
    for(int i = 0; i < 256; i++){
        if(hasharr[i] != 0){
            char ch = char(i);
            cout << ch << " --> " << hasharr[i] << endl;
        }
    }
}

int main(){

    //string for lower case 
    string str = "aaaabbbcccccdddddeeeff";
    // lowercase_hash(str);

    //string for uppercase

    string strup = "AAABBBCCCDDDEEESSS";
    // uppercase_hash(strup);

    //string containig all 256 characters
    string all = "abchdrsacjdhakcnasdASCNAKANCJSKJCNJW 1341&^%&^$^%#$@$#(&)^$3141";
    hash_characters(all);

}