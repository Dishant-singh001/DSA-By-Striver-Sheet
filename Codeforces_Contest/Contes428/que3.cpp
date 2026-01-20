/*
Problem Statement
A string 
T is called a good bracket sequence if and only if it satisfies the following condition:

T can be made into an empty string by repeating the following operation zero or more times:

Choose () contained in 
T as a (contiguous) substring and remove it.
For example, (), (()()), and the empty string are good bracket sequences, but )()( and ))) are not good bracket sequences.

There is a string 
S. Initially, 
S is an empty string.
Process 
Q queries in the order they are given. After each query, determine whether 
S is a good bracket sequence.
There are two types of queries:

1 c: A character 
c is given. 
c is either ( or ). Append 
c to the end of 
S.
2: Remove the last character of 
S. It is guaranteed that 
S is not an empty string at this time.
Constraints
1≤Q≤8×10 
5
 
c in queries of the first type is ( or ).
It is guaranteed that 
S is not empty when a query of the second type is given.
Q is an integer.
Input
The input is given from Standard Input in the following format, where 
query 
i
​
  denotes the 
i-th query.

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
 
Each query is given in one of the following two formats:

1 
c
2
Output
Output 
Q lines. The 
i-th line should contain Yes if the string 
S immediately after processing the 
i-th query is a good bracket sequence, and No otherwise.

Sample Input 1
Copy
8
1 (
2
1 (
1 )
2
1 (
1 )
1 )
Sample Output 1
Copy
No
Yes
No
Yes
No
No
No
Yes
S immediately after processing the 
1st query is (, which is not a good bracket sequence.
S immediately after processing the 
2nd query is an empty string, which is a good bracket sequence.
S immediately after processing the 
3rd query is (, which is not a good bracket sequence.
S immediately after processing the 
4th query is (), which is a good bracket sequence.
S immediately after processing the 
5th query is (, which is not a good bracket sequence.
S immediately after processing the 
6th query is ((, which is not a good bracket sequence.
S immediately after processing the 
7th query is ((), which is not a good bracket sequence.
S immediately after processing the 
8th query is (()), which is a good bracket sequence.
*/