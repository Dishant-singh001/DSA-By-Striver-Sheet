//wap in cpp to sort a given array using  insertion sort also explain the logic and time complecity of the sorting algorithm

#include <iostream>
#include <vector>
using namespace std;

//insertion sort function

vector<int> Insertion_sort(vector<int> nums, int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while( j > 0 && nums[j] < nums[j-1]){
            int temp = nums[j];
            nums[j] = nums[j-1];
            nums[j-1] = temp;
            j--;
        }
    }
    return nums;
}
int main(){

    vector <int> v1 = {1,3,13,24,56,69,98,99};

    int size = v1.size(); // length of v1

    //function call
    vector <int> ans = Insertion_sort(v1,size);

    //printing sorted array
    for(auto it: ans) cout << it << " ";
}

// logic: 

/*
 Timecomplecity 
    worst case : O(n^2)
    average case : O(n^2)
    best case : O(n) ------> jub aaray mai koi swap nhi hoo to return kardo; use flag {hint} intial flag = 0; if swap flag =1 after loop check flag ,0 means retrun  eg {1,2,3,4,5}  only n time outer loop will run;

*/ 