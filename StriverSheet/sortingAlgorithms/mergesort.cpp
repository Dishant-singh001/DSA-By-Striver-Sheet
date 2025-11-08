//wap in cpp to perfrom merge sort on a given aaray of n elements , also explain the logic behing and time complexity

#include <iostream>
#include <vector>
using namespace std;

//merging the arrayss
void merge(vector <int> &nums, int low,int mid,int high){
    vector <int> temp;
    int first = low;     // pointer 1
    int second = mid+1;  // pointer 2
    while(first <= mid && second <= high){
        if(nums[first] <=nums[second]){
            temp.push_back(nums[first]);
            first++;
        }
        else{
            temp.push_back(nums[second]);
            second++;
        }
    }
    while(second <= high){
        temp.push_back(nums[second]);
            second++;
    }
    while(first <= mid){
        temp.push_back(nums[first]);
            first++;
    }

    //copy back to original array
    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
}

//divide 
void mergesort(vector<int> &nums ,int low ,int high){
    if(low >=high)  return;
    int mid = (low +high)/2; //return if single element left
    mergesort(nums,low,mid); // left side tree
    mergesort(nums,mid+1,high); //right side tree
    merge(nums,low,mid,high); // merge the array in sorted form

}

int main(){
    vector <int> pp = {7,6,5,4,3,2,1};

    //function call 
    mergesort(pp,0,pp.size()-1);
    for(int i : pp) cout << i << " ";

}

//logic repeteadly sort array into 2 halfs till you get single element,then mergre them back in sorted form
// time complecity is O(nlogn) ... log n to divie and n to merge