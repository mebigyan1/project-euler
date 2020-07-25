#ifndef PRIME_H
#define PRIME_H

int check_prime(int n)
{
	for (int i=2;i<=int(sqrt(n));i++)
	{
		if (n%i==0)
		{
			return 1;
		}
	}
	return 0;
}

#endif