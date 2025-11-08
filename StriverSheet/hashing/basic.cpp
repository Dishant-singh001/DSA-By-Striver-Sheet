// WAP to count frequency of numbers ranging from 0 to 9?

#include <iostream>
using namespace std;
int hasharr [10] = {0};

// hash function
void hashfun(int inpu[],int siz){
    for(int i =0;i < siz;i++){
        hasharr[inpu[i]]++;
    }

    // print all frequency
    for (int i = 0; i < 10; i++){
        // cout << i << " --> " << hasharr[i] << endl;
    }
}

//print frequency of no "query"

int frequency(int inpu[], int query){
    return hasharr[query];
}
int main(){
    int inpu[] = {1,2,2,3,1,5,2};
    int siz= sizeof(inpu) / sizeof(inpu[0]);



    //using hash function
    hashfun(inpu,siz);

    // print frequency of 5;
    int query  = 2;
    cout << frequency(inpu,query);
    
}

