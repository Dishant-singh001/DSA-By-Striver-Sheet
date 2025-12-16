#include<iostream>
using namespace std;
int n_root(int num , int r){
    int low = 1;
    int high = num;

    while(low <= high){
        int mid = low + (high - low)/2;
        int current = mid*mid;
        if(num > current){
            low = mid + 1;
        }
        else if(num < current){
            high = mid - 1;

        }
        else if (num == current){
            return mid;

        }
    }
    return -1;
}
int main(){
    int root = 3;
    int number = 35;
    cout << "Root of " << number << " is = " << n_root(number,root)<<endl;

}
