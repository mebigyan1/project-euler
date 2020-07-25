#include <bits/stdc++.h>
#include <math.h>

int main()
{
	long int n = 600851475143, p=2;
	while (p<n)
	{
		if (n%p == 0)
		{
			n = n / p;
		}
		p++;
	}
	std::cout << "Largest Prime is: " << p;
	return 0;
}
