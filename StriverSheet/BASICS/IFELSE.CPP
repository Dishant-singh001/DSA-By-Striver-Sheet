#include <iostream>
using namespace std;
int main(){

    /*
    int x;
    cout << "enter a no : ";
    cin >> x;
    if(x % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    */

    int marks;
    cout << "enter your marks : ";
    cin >> marks;
    if(marks > 90 and marks <= 100){
        cout << "Outstanding";
    }
    else if (marks > 80 and marks <90 ){
        cout << "A grade";
    }
    else if (marks > 70 and marks <= 60){
        cout << "  B grade";
    }
    else{
        cout << " Fail";
    }
    return 0;
}