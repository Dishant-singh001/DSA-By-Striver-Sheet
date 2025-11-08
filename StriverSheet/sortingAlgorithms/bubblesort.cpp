// wap in cpp to sort an array using bubble sort
#include <iostream>
#include <vector>
using namespace std;

//Bubble sort function 

vector<int> Bubble_sort(vector <int> nums , int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] =temp;
            }
        }
    }
    return nums;
}

int main(){
    vector <int> v1 = {2,1,34,33,65,69,89,99,66};

    int size = v1.size();

    //function call
    vector <int> ans = Bubble_sort(v1,size);

    //print sorted array;

    for(int i : ans){
        cout << i << " ";
    }
}

// logic ye h ki adjacent element ko check karo or bada h to swap karo ,upri array mai check karne kai baad subse babda element last mai aajaiga ,hpir same procees karo N times 
/*
 Timecomplecity 
    worst case : O(n^2)
    average case : O(n^2)
    best case : O(n) ------> jub aaray mai koi swap nhi hoo to return kardo; use flag {hint} intial flag = 0; if swap flag =1 after loop check flag ,0 means retrun  eg {1,2,3,4,5}  only n time loop will run;

*/ 