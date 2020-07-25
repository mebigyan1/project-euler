#include <bits/stdc++.h>

int main()
{
	int n = 20, count=0, result;
	for (int i=1;;i++)
	{
		count=0;
		//modifiedc lower limit to 11 for faster calculations
		//logic? you know it lol
		for (int j=11;j<=n;j++)
		{
			if(i%j==0)
			{
				count = count + 1;
			}
			else
			{
				break;
			}
		}
		if(count == n/2)
		{
			result = i;
			break;
		}
	}
	std::cout << "Smallest Positive number is: " << result;
	return 0;
}