#include <bits/stdc++.h>

int fibonacci(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main()
{
	int n = 4000000, sum = 0, term, i = 1;

	term = fibonacci(i);

	while (term <= 4000000)
	{
		term = fibonacci(i);
		if (term%2 == 0)
		{
			sum = sum + term;
		}
		i++;
	}

	std::cout << "Sum is: " << sum;
	return 0;
}