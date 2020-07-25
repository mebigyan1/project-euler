#include <bits/stdc++.h>
#include <time.h>
#include "../custom_headers/prime.h"

int main()
{
	time_t start = clock();
	int count = 0, result;
	for(int i=2;;i++)
	{
		if (check_prime(i)==0)
		{
			count++;
		}
		if (count==10001)
		{
			result = i;
			break;
		}
	}
	std::cout << "10001st prime is: " << result;
	double time_diff = (clock() - start);
	std::cout << "\nTime taken: " << time_diff/CLOCKS_PER_SEC;
	return 0;
}