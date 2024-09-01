// CPP program to count the 
// number of numbers between 
// 1 and 1000, including both, 
// that are divisible by 3 or 4 
#include <bits/stdc++.h> 
using namespace std; 

// function to count the divisors 
int countDivisors(int N, int a, int b) 
{ 
	// Counts of numbers 
	// divisible by a and b 
	int count1 = N / a; 
	int count2 = N / b; 

	// inclusion-exclusion 
	// principle applied 
	int count3 = (N / (a * b)); 

	return count1 + count2 - count3; 
} 

// Driver Code 
int main() 
{ 
	int N = 1000, a = 3, b = 4; 
	cout << countDivisors(N, a, b); 
	return 0; 
}

// The principle of inclusion-exclusion says that in order to count only unique ways of doing a task, we must add the number of ways to do it in one way and the number of ways to do it in another and then subtract the number of ways to do the task that are common to both sets of ways. 

// The principle of inclusion-exclusion is also known as the subtraction principle. For two sets of ways Aiand  A2, the enumeration would like- 
// | A1 ∪ A2  |= |A1 |+ | A2| – |A1 ∩ A2|