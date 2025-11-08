// use selection sort to sort the given array 

#include <iostream>
#include <vector>
using namespace std;

//selection sort function
vector<int> selectionsort (vector <int> nums, int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(nums[min] > nums[j]) min = j;
        }
        int temp = nums[min];
        nums[min] = nums[i];
        nums[i] = temp;
    }
    return nums;
}

int main (){
    vector <int> v1 = {23,21,4,5,65,78,90,100,345,69};

    int size = v1.size();

    //function call
    vector <int> ans = selectionsort(v1,size);
    for(int i : ans) cout << i << " ";

}

// logic ye hai ki puri array mai ghumke subse chote element ka index nikal ke lao or ast mai us ko 1st se swap kardo, har bar yahi karna h bus so jort ho chuka uko nhi chedna h 