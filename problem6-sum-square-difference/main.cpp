#include <bits/stdc++.h>

int sum_square_n(int n)
{
	return (n*(n+1)*(2*n+1))/6;
}

int sum_n_square(int n)
{
	return pow((n*(n+1))/2, 2);
}

int main()
{
	int n = 100;
	int result = sum_n_square(n) - sum_square_n(n);
	std::cout << "Difference of sum is: " << result;
}