/*
Write a C++ program to search for a target element in a rotated sorted array using binary search.
Implement two functions:

One for arrays with unique elements.

One for arrays that may contain duplicates.

Also, explain the logic and time complexity for both versions.
*/
#include<iostream>
#include<vector>
using namespace std;

// Search if array contain Unique Elements

int UniqueRoatatedArray (vector<int> &nums,int target){
    int low = 0, high = nums.size()-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target) return mid;

        if(nums[low] <= nums[mid]){ 

            if(nums[low] <= target && nums[mid] >= target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        else{
            if(nums[mid] <= target && nums[high] >= target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}


// Search if array contains duplicates
 bool search(vector<int> nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target) return true;

            if(nums[low]== nums[mid] && nums[mid]== nums[high]){
                low = low + 1;
                high = high - 1;
                continue;
            }

            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return false;
        
    }

int main(){
    
    vector<int> nums = {4,5,6,1,2,3};
    int target = 2;
    cout << UniqueRoatatedArray(nums,target);
    vector <int> nums1 = {1,0,1,1,1,1};
    int target1 = 0;
    cout <<search(nums1,target1);

}

/*
1️⃣ Logic — Unique Elements

The array is rotated but still partially sorted.

In each iteration, we:

Find the mid-point.

Check which half (left or right) is sorted.

If the target lies within that sorted half → narrow the search there.

Otherwise, move to the other half.

This ensures we discard half the search space every time.

Example:
Array = [4,5,6,7,0,1,2], Target = 0

mid = 7 (nums[mid] = 7), left side sorted.

Target (0) not in [4..7], so move right → [0,1,2].

Then binary search works normally.

➡️ Result: O(log n) — logarithmic efficiency like classic binary search.

2️⃣ Logic — With Duplicates

Duplicates can make it unclear which side is sorted (e.g., [1,0,1,1,1]).

When nums[low] == nums[mid] == nums[high], we can’t decide, so we move both ends:

low++, high--


Then repeat the same process as above.

➡️ Result: Worst-case becomes O(n) (when all elements are same).

⚙️ Time & Space Complexity
Case	Time Complexity	Reason
Unique elements	O(log n)	Always halves the search space
Duplicates	O(n)	Equal elements cause linear scan
Space	O(1)	Constant extra variables only
💼 Use Cases

Searching in rotated logs, circular buffers, or sorted datasets that shift periodically.

Common in interview & system design where data rotation is due to time or memory rollover.

🧩 LeetCode References

#33: Search in Rotated Sorted Array → (Unique elements)

#81: Search in Rotated Sorted Array II → (With duplicates)
*/