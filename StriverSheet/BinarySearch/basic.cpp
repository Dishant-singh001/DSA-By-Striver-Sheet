// WAP in CPP to implement Binary Search also explain its use case and complexity


#include <iostream>
using namespace std;

// Binary Search Code

int BinarySearch (int nums[], int target, int low, int high){
    if(low > high){
        return -1;
    }
    int mid = low + (high - low) / 2;

    if(nums[mid]  == target) return mid;
    else if (nums[mid] < target){
       return  BinarySearch(nums,target,mid+1,high);
    }
    else{
       return BinarySearch(nums,target,low,mid-1);
    }


}

int main(){
    int nums [] = {0,1,2,3,4,5,6,7,8,9};
    int target = 6;
    int len = sizeof(nums) / sizeof(nums[0]);
    cout << BinarySearch(nums,target, 0, len-1);
}

/*
Time Complexity:

    Binary search halves the search space in each step → log₂(n) comparisons → O(log n)

Space Complexity:

    Iterative version → O(1) (no extra memory)

    Recursive version → O(log n) (due to recursion stack)

Use Cases:

    Search in a sorted array/list (classic use)

    Finding lower/upper bounds (first occurrence, last occurrence of a number)

    Searching in monotonic functions (e.g., f(x) is increasing, find smallest x where f(x) ≥ target)

    Optimization problems (e.g., minimizing/maximizing a value that satisfies a condition)

    Rotated sorted arrays (with slight modification)

Where to Use:

    Only when data is sorted or monotonic

    When O(n) linear search is too slow for large datasets
*/