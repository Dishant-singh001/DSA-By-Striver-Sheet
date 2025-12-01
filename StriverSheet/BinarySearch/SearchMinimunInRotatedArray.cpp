#include <iostream>
#include <vector>
using namespace std;
int binary_search_MINIMUM_ROTATED_ARRAY(vector<int> &vec){
    int len = vec.size();
    int left = 0;
    int right = len -1;
    int mini = INT_MAX;

    while(left < right){
        int mid = left + (right - left ) / 2;
        if(vec[mid] > vec[right]){ 
            // mini = min(mini,vec[left]);
            left = mid + 1;  
        }
        else{
            // mini = min(mini,vec[mid]);
            right = mid ;
        }
    }
    return vec[left];
}
int main(){
    vector<int> vec = {4,5,6,7,7,8,9,0,1,2,3,4};
    cout << binary_search_MINIMUM_ROTATED_ARRAY(vec) << endl;

}

/*
🔥 How the algorithm maintains correctness (core idea)
At every step:

✨ We remove the entire sorted half
✨ We keep only the rotated half where the minimum must be

Key observations:

Sorted block can be thrown away

Rotated block MUST contain the minimum

Comparison vec[mid] vs vec[right] exactly detects sorted vs rotated side

This is why this algorithm ALWAYS converges to the minimum element.
*/