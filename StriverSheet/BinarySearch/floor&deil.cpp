// Write a C++ program to calculate the floor and ceiling of a given number. Explain the concept, use cases, and the time complexity of these operations

#include <iostream>
#include <vector>
using namespace std;

// floor function

int Floor (vector<int> &nums, int target){
    int low = 0, high = nums.size()-1;
    int ans;
    while(low <= high){
        int mid = low + (high- low)/2;

        if(nums[mid]  <= target){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;

        }
    }
    return ans;

}

// Ceil Function

int Ceil (vector<int> &nums, int target){
    int low = 0, high = nums.size()-1,ans = nums.size();
    while(low < high){
        int mid = low + (high -low)/2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main (){

    // vector
    vector<int> nums = {1,2,3,5,6,7,8};
    // index   ------>  0,1,2,3,4,5,6,7,8
    int target = 4;

    // function calls

    cout << "Floor of : " << target << " is : " << Floor(nums,target) << endl;

    cout << "Ceil of : "  << target << " is : " << Ceil (nums,target) << endl;
    return 0;
}



/*
1. Concept

For a sorted vector v and a target x:

    Operation	Definition	Example
    Floor	Greatest element ≤ x	v = {1,3,5,7}, x = 6 → floor = 5
    Ceil	Smallest element ≥ x	v = {1,3,5,7}, x = 6 → ceil = 7

Important: Vector must be sorted for efficient O(log n) search.

2. Logic Using Binary Search

Floor Logic:

    Initialize low = 0, high = n-1, floorVal = -1 (or any invalid marker).

    While low <= high:

    mid = low + (high - low)/2

    If v[mid] == x, floor = x → return.

    If v[mid] < x, update floorVal = v[mid] and low = mid + 1.

    If v[mid] > x, high = mid - 1.

Return floorVal.

Ceil Logic:

    Initialize low = 0, high = n-1, ceilVal = -1.

    While low <= high:

    mid = low + (high - low)/2

    If v[mid] == x, ceil = x → return.

    If v[mid] > x, update ceilVal = v[mid] and high = mid - 1.

    If v[mid] < x, low = mid + 1.

Return ceilVal.
*/