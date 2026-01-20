/*
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
150 points

Problem Statement
Takahashi is enjoying a game at school. The game starts at the moment the bell rings.

Immediately after the bell rings, he repeats the following actions:

Run at a speed of 
S meters per second for 
A seconds. Then, remain stationary for 
B seconds.
How many meters in total does he run by the time 
X seconds have elapsed since the bell rang?

Constraints
1≤S≤15
1≤A≤1000
1≤B≤1000
1≤X≤1000
All input values are integers.
Input
The input is given from Standard Input in the following format:

S 
A 
B 
X
Output
Output the answer in one line. Omit the unit (meters) in the output.

Sample Input 1
Copy
7 3 2 11
Sample Output 1
Copy
49
During the 
11 seconds after the bell rings, Takahashi moves as follows:

From 
0 seconds to 
3 seconds, he runs at a speed of 
7 meters per second. The distance traveled during this time is 
21 meters.
From 
3 seconds to 
5 seconds, he remains stationary.
From 
5 seconds to 
8 seconds, he runs at a speed of 
7 meters per second. The distance traveled during this time is 
21 meters.
From 
8 seconds to 
10 seconds, he remains stationary.
From 
10 seconds to 
11 seconds, he runs at a speed of 
7 meters per second. The distance traveled during this time is 
7 meters.
The total distance traveled is 
49 meters, so output 
49.

Sample Input 2
Copy
6 3 2 9
Sample Output 2
Copy
36
During the 
9 seconds after the bell rings, Takahashi moves as follows:

From 
0 seconds to 
3 seconds, he runs at a speed of 
6 meters per second. The distance traveled during this time is 
18 meters.
From 
3 seconds to 
5 seconds, he remains stationary.
From 
5 seconds to 
8 seconds, he runs at a speed of 
6 meters per second. The distance traveled during this time is 
18 meters.
From 
8 seconds to 
9 seconds, he remains stationary.
The total distance traveled is 
36 meters, so output 
36.

Sample Input 3
Copy
1 1 666 428
Sample Output 3
Copy
1
During the 
428 seconds after the bell rings, Takahashi moves as follows:

From 
0 seconds to 
1 second, he runs at a speed of 
1 meter per second. The distance traveled during this time is 
1 meter.
From 
1 second to 
428 seconds, he remains stationary.
The total distance traveled is 
1 meter, so output 
1.


*/
#include<iostream>
using namespace std;

int main(){
    int S,A,B,X;
    cin>>S>>A>>B>>X;
    int b = B;
    int a = A;
    int total = 0;
    while(X > 0){
        X=X;
        while((X > 0 && a > 0)){
            total += S;
            a--;
            X = X-1;
        }
        a =A;
        while(X > 0 && b > 0){
            X--;
            b--;
        }
        b = B;
    }
    cout << total;  
}