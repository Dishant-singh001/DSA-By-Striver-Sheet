/*
G - Necklace  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
625 points

Problem Statement
There are 
N types of jewels numbered from 
1 to 
N. You have an infinite number of jewels of all types. Jewels of the same type are indistinguishable.
Also, there is an integer 
U that is 
2 or greater. The beauty of each jewel is represented by an integer value between 
2 and 
U, inclusive, and the beauty of jewel 
i is 
b 
i
​
 .

For each integer 
x satisfying 
2≤x≤U, let 
f(x) be the answer to the following problem:

You will arrange some jewels in a circular pattern to make a necklace.
Find the number, modulo 
998244353, of necklaces such that the product of the beauties of the jewels used equals 
x.
Here, two necklaces are considered the same and counted only once if they match after rotation. However, two necklaces are counted separately if they do not match just by rotation, even if they match after flipping upside down and rotating. For example, consider the following:

Necklace A: A necklace formed by arranging jewels 
1, 
2, 
3 in this order clockwise.
Necklace B: A necklace formed by arranging jewels 
2, 
3, 
1 in this order clockwise.
Necklace C: A necklace formed by arranging jewels 
1, 
3, 
2 in this order clockwise.
Here, necklaces A and B are considered the same and counted only once, but necklaces A and C are counted separately.

Compute 
f(2),f(3),…,f(U).

Constraints
1≤N≤5×10 
5
 
2≤U≤5×10 
5
 
2≤b 
i
​
 ≤U
All input values are integers.
Input
The input is given from Standard Input in the following format:

N 
U
b 
1
​
  
b 
2
​
  
… 
b 
N
​
 
Output
Output 
f(2),f(3),…,f(U) separated by spaces in one line.

Sample Input 1
Copy
4 6
2 2 3 4
Sample Output 1
Copy
2 1 4 0 2
For example, when 
x=4, the following four necklaces satisfy the condition:

A necklace formed by arranging jewels 
1, 
1 in this order clockwise.
A necklace formed by arranging jewels 
1, 
2 in this order clockwise.
A necklace formed by arranging jewels 
2, 
2 in this order clockwise.
A necklace formed by arranging jewel 
4.
Sample Input 2
Copy
4 16
2 2 2 2
Sample Output 2
Copy
4 0 10 0 0 0 24 0 0 0 0 0 0 0 70
Sample Input 3
Copy
14 12
10 2 2 3 8 7 11 6 12 4 9 5 3 2
Sample Output 3
Copy
3 2 7 1 7 1 15 4 4 1 24

*/