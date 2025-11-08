#include <iostream>
using namespace std;

void Left_RightAngleTriangle(int x){
    for(int i = 1; i <= x ; i++){
        for(int j = 0; j < i; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}

void Right_RightAngleTriangle(int x){
    for(int i = 1; i <= x ; i++){
        for(int j = x; j > i; j--){
            cout << "  ";
        }
        for(int j = 0; j < i; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}

void Equilateral_triangle(int x){
    for(int i = 1; i <= x ; i++){
        for(int j = x-i; j > 0; j--){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void Inverted_Equilateral_Triangle(int x){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = x; j > i; j--){
            cout << "* ";

        }
        cout << endl;
    }
}

void Diamond(int x){
    for(int i = 1; i <= x; i ++){
        for( int j = x-i; j > 0; j--){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i =1; i < x; i++){
        for(int j = 0;j < i;j++ ){
            cout << " ";
        }
        for (int j = x; j > i; j--){
            cout << "* ";
        }
        cout << endl;
    }

}
 
void 

int main(){
    int x;
    cout << "Enter the number of rows: ";
    cin >> x;

    // Right_RightAngleTriangle(x);
    // Left_RightAngleTriangle(x);
    // Equilateral_triangle(x);
    // Inverted_Equilateral_Triangle(x);
    Diamond(x);




}