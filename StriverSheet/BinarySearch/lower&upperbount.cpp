/*
Write a program with two separate functions: one for Upper Bound and one for Lower Bound.

Requirements for each function:
    1.Include the logic/implementation.    2.Provide an example demonstrating its use.    3.Explain the time complexity.
    4.Mention use cases or scenarios where it is useful.    5.Include any additional notes or tips.
*/

#include<iostream>
#include<vector>
using namespace std;

// Lower Bound 

int LowerBound (vector<int> &nums, int target){
    int low = 0, high = nums.size()-1;
    int ans = nums.size();
    while(low <= high){
        int mid = low + (high-low)/2;
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

// Upper Bound

int UpperBound (vector<int> &nums,int target){
    int low = 0, high = nums.size()-1;
    int ans = nums.size();
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] <= target){                                        //also  i can write nums[mid] > target {ans = mid; high = mid-1;}
            // ans = mid;
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid - 1;

        }
    }
    return ans;
}
int main(){

    // vector
    vector<int> nums = {0, 2 , 3 , 4 , 4 , 5 , 6 , 6 , 6 , 6 , 7 , 8 , 9 , 9 , 10};
    // indexes          0  1   2   3   4   5   6   7   8   9   10  11  12  13  14      
    int target = 7;


    // Funtion calls 
    cout << " Lower Bound : " << LowerBound(nums,target) << endl;
    cout << " Upper Bound : " << UpperBound(nums,target) << endl;
    return 0;
}

/*
1. Lower Bound

    Logic:

        Binary search variant.

        Move low and high pointers until you find the first index where arr[i] >= target.

        Returns index of first element ≥ target.

        Usefulness / Where it is used:

        Searching in sorted arrays efficiently.

        Useful in counting occurrences (upper - lower) of a value.

        Used in binary search problems, range queries, and competitive programming.

    Example:

        arr = [1, 2, 4, 4, 5, 6], target = 4
        lower_bound(arr, 4) -> 2  // first 4 occurs at index 2


        Time Complexity: O(log n)

        Space Complexity: O(1)

2. Upper Bound

    Logic:

        Binary search variant.

        Move low and high pointers until you find the first index where arr[i] > target.

        Returns index of first element > target.

        Usefulness / Where it is used:

        Finding strictly greater elements efficiently.

        Useful in range queries, counting elements ≤ or > target, sorted data insertion points.

    Example:

        arr = [1, 2, 4, 4, 5, 6], target = 4
        upper_bound(arr, 4) -> 4  // first element > 4 is 5 at index 4


        Time Complexity: O(log n)

        Space Complexity: O(1)

Key Notes:

Works only on sorted arrays.

Often used together:

count of 4 = upper_bound(4) - lower_bound(4) = 4 - 2 = 2

Binary search based → efficient for large datasets.
*/





































// Code with explanaition ans comment
/*
#include <bits/stdc++.h>
using namespace std;

// Function to find the first index where element >= target
int lowerBound(const vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1;
    int lower_index = nums.size();  // Default if no element >= target

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= target) {
            lower_index = mid;   // Potential answer
            high = mid - 1;      // Search left half for earlier occurrence
        } else {
            low = mid + 1;       // Search right half
        }
    }
    return lower_index;
}

// Function to find the first index where element > target
int upperBound(const vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1;
    int upper_index = nums.size();  // Default if no element > target

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > target) {
            upper_index = mid;   // Potential answer
            high = mid - 1;      // Search left half
        } else {
            low = mid + 1;       // Search right half
        }
    }
    return upper_index;
}

int main() {
    vector<int> nums = {0, 2, 3, 4, 4, 5, 6, 6, 6, 6, 7, 8, 9, 9, 10};
    vector<int> targets = {1, 6, 11, 9, 7};

    for (int target : targets) {
        cout << "Target: " << target << "\n";
        cout << "  Lower Bound Index: " << lowerBound(nums, target) << "\n";
        cout << "  Upper Bound Index: " << upperBound(nums, target) << "\n\n";
    }

    return 0;
}

*/