#include <bits/stdc++.h>
#include "../custom_headers/prime.h"

int main() {
	long long int result = 0, i;
	for(i=2;i<2000000;i++) {
		if (check_prime(i) == 0) {
			result += i;
		}
	}
	std::cout << result;
	return 0;
}