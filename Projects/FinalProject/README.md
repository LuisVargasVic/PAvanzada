Problem:

All submissions for this problem are available.
A permutation of N distinct integers between 1 and N, both inclusive, is called a prime permutation of size N iff - for all i between 1 and N, the following condition holds:

The ith integer is the Xth smallest integer in the first i integers, where X is either 1 or a prime number.

Your task is to find out how many prime permutations are there of size N.

Input
The first line contains a single integer T, denoting the number of test cases. Then T lines follow, each containing a single integer N.

Output
For each test case, output a single line containing the number of prime permutations of size N. Since the answers can be very large, output each answer modulo 1,000,000,007.

Example
Input:
4
1
2
3
4

Output:
1
2
6
18
Constraints:
1 ≤ T ≤ 500,000
1 ≤ N ≤ 5,000,000
Each input file will not be larger than 4 MB (4,000,000,000 bytes) in size.

WARNING! Large I/O files. Use fast I/O methods.

Breakdown:

5 variables
answer[5000000] -> Array of test cases answers
primePermutations[5000000] -> operations for the Sieve of Eratosthenes algorithm
fi -> file
t -> number of test cases
n -> test case
primeCount -> counter of the Sieve of Eratosthenes algorithm
The first thing the code does is check the first line of a file and take the number of test cases
After that checks if the test cases are 1 ≤ t ≤ 500,000
Then go through a for loop to go at each test case and find how many prime permutations are at each one of them
Inside the loop it checks that 1 ≤ n ≤ 5,000,000
If is equal to 1 the prime permutation is 1
  if n == 1:
  answer[n] = 1
Print the result
Else apply the Sieve of Eratosthenes to count how many prime numbers are in the test case
  for -> i = 2; i <= n; i++:
    if primePermutations[i] == 0:
      for -> k = 2 * i; k < n; k = k + i:
        primePermutations[k] = 1
      primeCount++;
  Every time the loop pass through each number of the test case with dynamic programming the past number multiplies the prime counter
    result = (primePermutations[i - 1] * primeCount) % 1000000007;
  Add the result to the index array of the test case
    answer[n] += result;
  Finally after the algorithm print the result
