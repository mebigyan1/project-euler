#include <bits/stdc++.h>

// Function to find multiples of 3 and 5 to be found under N
int multiples_sum(int tn, int fn, int ftn)
{
	return (3*tn*(tn+1)/2)+(5*fn*(fn+1)/2)-(15*ftn*(ftn+1)/2);
}

int main()
{
	int n = 1000; // Multiples to be found under N
	int tn = (n-1) / 3; // N for three
	int fn = (n-1) / 5; // N for five
	int ftn = (n-1) / 15; // N for fifteen
	
	int sum = multiples_sum(tn, fn, ftn);

	std::cout << "Sum is: " << sum;

	return 0;
}