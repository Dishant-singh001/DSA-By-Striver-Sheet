/*📘 Pascal’s Triangle is a triangular array where each number is the sum of the two numbers directly above it. It’s mainly used to compute binomial coefficients and appears in many math + coding interview problems.
Row 0:          1
Row 1:        1   1
Row 2:      1   2   1
Row 3:    1   3   3   1
Row 4:  1   4   6   4   1

💡 Common Interview Questions on Pascal’s Triangle:

1️⃣ Generate Pascal’s Triangle

Input: numRows = 5

Output: Entire 2D triangle

Tests your ability to use nested loops & vector logic.

2️⃣ Get a Specific Row

Input: rowIndex = 4

Output: [1, 4, 6, 4, 1]

Often asked to optimize to O(n) space.

3️⃣ Compute Specific Element

Compute C(n, k) directly using the formula or iterative multiplication.

4️⃣ Sum of nth Row

Sum of row n = 2^n.

Tests your math insight + optimization skill.

5️⃣ Relation to Combinations

Used in problems involving combinations, probability, or choosing subsets.

6️⃣ Patterns or Properties

Checking even/odd patterns, generating mod values (like mod 2 → Sierpinski triangle)*/

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

// 1️⃣ Generate Pascal’s Triangle
void Pascal_Triangle(int numRows){
    vector<vector<int>> solution;
    for(int i = 0; i < numRows; i++){
        vector<int> row;
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){
                row.push_back(1);
            }
            else{
                row.push_back(solution[i-1][j-1]+solution[i-1][j]);
            }
        }
        solution.push_back(row);
    }

    // Printing Triangle 
    cout << "Pascal's Triangle with number of Rows = " << numRows << endl;

    for(auto &i : solution){
        for(auto &j : i){
            cout << j << " ";
        }
        cout << endl;
    }

}

// 2️⃣ Get a Specific Row   logic : nCr
void Pascals_Row (int rowIndex){
    vector<int> row;
    int ans = 1;
    for(int i = 0; i <= rowIndex; i++){
        if(i == 0) {
             row.push_back(1);
        }
        else {
            ans *= (rowIndex-i+1);
            ans /= i;
            row.push_back(ans);
            
        }
    }

    // printing ROW
    for(int i : row) cout << i << " " ;
    cout << endl;
}

// 3️⃣ Compute Specific Element
void Pascals_element (vector <int> v1){
    int rowIdx = v1[0];
    int columnIdx = v1[1];
     if (columnIdx > rowIdx) {
        cout << "Invalid indices!" << endl;
        return;
    }

    long long ans = 1;
    for (int i = 1; i <= columnIdx; i++) {
        ans = ans * (rowIdx - i + 1) / i;  // ✅ correct formula
    }

    cout << "Element at Row " << rowIdx << ", Column " << columnIdx
         << " is: " << ans << endl;
}

// 4️⃣ Sum of nth Row logic 2^n
void PascalRowSum (int row){
    cout << pow(2,row);
}
int main(){

    // for printing pascal triangle
    int input = 6;
    // Pascal_Triangle(input);

    // printing a specific row
    Pascals_Row(input);

    // Printing a specific element ith row jth column;
    vector<int> element ={5,3};
    // Pascals_element(element);

    // printhing sum of nth row of pascals
    PascalRowSum(input);

    


}