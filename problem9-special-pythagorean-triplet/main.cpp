#include <bits/stdc++.h>

int main()
{
	int result, n=500;
	int a, b, c;
	for (int i=1;i<n;i++)
	{
		for (int j=1;j<n;j++)
		{
			for (int k=1;k<n;k++)
			{
				if((pow(i,2)+pow(j,2)==pow(k,2)) && (i+j+k==1000))
				{
					a = i;
					b = j;
					c = k;
					result = i*j*k;
					break;
				}
			}
		}
	}
	std::cout << "Product abc = " << result << "\n" << a << ", " << b << ", " << c;
	return 0; 
}