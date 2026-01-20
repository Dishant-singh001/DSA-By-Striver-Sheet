/*
F - Pyramid Alignment  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
525 points

Problem Statement
There are 
N intervals on a number line, numbered from 
1 to 
N.

The left endpoint of interval 
i is at coordinate 
0, and the right endpoint is at coordinate 
W 
i
​
 . Here, 
W 
1
​
 <W 
2
​
 <⋯<W 
N
​
 .

You are given 
Q queries; process them in the order they are given. Each query is one of the following three types:

Type 
1 (1 v): Let 
l be the coordinate of the current left endpoint of interval 
v. Translate each of the intervals numbered 
v or less so that its left endpoint is at coordinate 
l.
Type 
2 (2 v): Let 
r be the coordinate of the current right endpoint of interval 
v. Translate each of the intervals numbered 
v or less so that its right endpoint is at coordinate 
r.
Type 
3 (3 x): Output the current number of intervals that contain coordinate 
x+ 
2
1
​
 .
Constraints
1≤N≤2×10 
5
 
1≤Q≤2×10 
5
 
1≤W 
i
​
 ≤10 
9
  (
1≤i≤N)
W 
1
​
 <W 
2
​
 <⋯<W 
N
​
 
For 
v given in queries of types 
1 and 
2, 
1≤v≤N.
For 
x given in queries of type 
3, 
0≤x≤10 
9
 .
At least one query of type 
3 is given.
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
W 
1
​
  
… 
W 
N
​
 
Q
query 
1
​
 
query 
2
​
 
⋮
query 
Q
​
 
query 
j
​
  represents the 
j-th query. Each query is given in one of the following formats:

1 
v
2 
v
3 
x
Output
Let 
q be the number of queries of type 
3, output 
q lines. The 
j-th line (
1≤j≤q) should contain the answer to the 
j-th query of type 
3.

Sample Input 1
Copy
4
2 4 6 10
5
2 3
1 2
3 2
2 4
3 1
Sample Output 1
Copy
4
1
Initially, the intervals in order of their numbers are 
[0,2],[0,4],[0,6],[0,10].

For the 
1st query, the coordinate of the right endpoint of interval 
3 before the operation is 
6, so the intervals after the operation are 
[4,6],[2,6],[0,6],[0,10] in order of their numbers.
For the 
2nd query, the coordinate of the left endpoint of interval 
2 before the operation is 
2, so the intervals after the operation are 
[2,4],[2,6],[0,6],[0,10] in order of their numbers.
For the 
3rd query, the intervals that contain coordinate 
2+ 
2
1
​
  are intervals 
1,2,3,4, which is four intervals, so output 
4.
For the 
4th query, the coordinate of the right endpoint of interval 
4 before the operation is 
10, so the intervals after the operation are 
[8,10],[6,10],[4,10],[0,10] in order of their numbers.
For the 
5th query, the intervals that contain coordinate 
1+ 
2
1
​
  is only interval 
4, which is one interval, so output 
1.
*/