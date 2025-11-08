#include <iostream>
using namespace std;
int main(){

    // 1d array 
    int arr [5];
    // cin >> arr[0] >> arr[1] >> arr[2];
    // cout << arr[1];

    //2d array
    int arr2 [3][3];
    

    for (int i = 0; i < 3; i++){
        for(int j = 0; j< 3 ;j++){
             arr2[i][j] = j+1;
        }
    }

    for (int i = 0; i < 3; i++){
        for(int j = 0; j< 3 ;j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    //3d array 
    int arr3 [3][3][3];
    arr3[0][0][0] = 6;
    cout << arr3[0][0][0];
    

}