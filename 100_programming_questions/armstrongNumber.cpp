#include <bits/stdc++.h>
using namespace std;


void findArmstrong(int low, int high)
{
	for (int i = low+1; i < high; ++i) {

		
		int x = i;
		int n = 0;
		while (x != 0) {
			x /= 10;
			++n;
		}

		
		int pow_sum = 0;
		x = i;
		while (x != 0) {
			int digit = x % 10;
			pow_sum += pow(digit, n);
			x /= 10;
		}

		
		if (pow_sum == i)
			cout << i << " ";	
	}
}


int main()
{
	int num1 = 100;
	int num2 = 400;
	findArmstrong(num1, num2);
	cout << '\n';
	return 0;
}