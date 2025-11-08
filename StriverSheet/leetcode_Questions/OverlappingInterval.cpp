#include <iostream>
#include<map>
#include<vector>
using namespace std;

// Function
void mergeOverlappingIntervals(vector<vector<int>> &nums){
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++){
        if(ans.empty() != true && ans.back()[1] >= nums[i][0]){
            ans.back()[1] = max(nums[i][1],ans.back()[1]);

        }
        else{
            ans.push_back(nums[i]);
        }
    }
    for (auto i : ans){
        cout << i[0] << " "<< i[1] << endl;
    }
} 

int main (){
    vector<vector<int>> vec1 = {{1,3},{2,4},{3,6},{8,9},{8,10},{9,12},{15,17},{16,17},{17,18}};
    mergeOverlappingIntervals(vec1);
}