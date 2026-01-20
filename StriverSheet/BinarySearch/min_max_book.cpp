/*
Book Allocation Problem
Subscribe to TUF+

Hints
Company
Given an array nums of n integers, where nums[i] represents the number of pages in the i-th book, and an integer m representing the number of students, allocate all the books to the students so that each student gets at least one book, each book is allocated to only one student, and the allocation is contiguous.



Allocate the books to m students in such a way that the maximum number of pages assigned to a student is minimized. If the allocation of books is not possible, return -1.


Example 1

Input: nums = [12, 34, 67, 90], m=2

Output: 113

Explanation: The allocation of books will be 12, 34, 67 | 90. One student will get the first 3 books and the other will get the last one.

Example 2

Input: nums = [25, 46, 28, 49, 24], m=4

Output: 71

Explanation: The allocation of books will be 25, 46 | 28 | 49 | 24.

Now your turn!

Input: nums = [15, 17, 20], m=2

Output:

Pick your answer


-1

32

31

33
Constraints

  1 <= n, m <= 104
  1 <= nums[i] <= 105
*/

#include<iostream>
#include<vector>
using namespace std;

int maximum_function (vector<int> nums){
    int maxi = nums[0];
    for(int i : nums){
        if(i > maxi) maxi = i;
    }
    return maxi;
}

int solution (vector<int> &nums, int students){
    // find maximum element of giver array

    int low = maximum_function(nums);

    // find sum of all elements in aaray 
    
    int high = sum_fuction(nums);

    return binary_search(nums,low,high,students)


}

int main(){
    vector<int> nums = {25,46,29,47,26};
    int students = 4;

    cout << solution(nums,students);
}

