// wap in cpp to sort an array using quicsort also explain logic and complecity also

#include<iostream>
#include<vector>
using namespace std;

// define quicsort function 

int quicksort(vector<int> &v1,int low, int high){
    //pick a pivot element and sort the aarray left side smaller than pivot and right side higerg than pivot
    // if(low < high) return;
    int pivot = v1[low];
    int first = low;
    int second = high;

    while(first < second){
        while(v1[first] <= pivot && first <= high-1) first++ ;

        while(v1[second] > pivot && second >= low-1) second-- ;

        //swap 
        if(first < second){
            int temp = v1[first];
            v1[first] = v1[second];
            v1[second] = temp;
        }
        
    }
    int temp = v1[low];
    v1[low] = v1[second];
    v1[second] = temp;
    return second;
    
}
// left and right tree
void pivots(vector<int> &v1,int low,int high){
    if(low < high){
        int pivot = quicksort(v1,low,high);
        pivots(v1,low,pivot-1);
        pivots(v1,pivot+1,high);
    }
}

int main(){
    vector <int> v1 = {9,5,4,3,2,6,7,8};
    int n = v1.size()-1;
    //function call
    pivots(v1,0,n);
    for(auto it: v1) cout << it << " " ;
    return 0;
}

// logic ye hai ki koi bhi ek element uthao (pivot) uski left side mai sare chote element rigth mai bade element ;
// in general us elementt ko uski sahi position per le aao; 
// phir half half karo or same process bakiyoo mai bhi
// time complecity O(nlogn) space compecity O(1) 