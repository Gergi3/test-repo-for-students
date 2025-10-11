#include<iostream>

int main()
{
	int n;
	int digit1, digit2, digit3;
	digit1 = n % 10;
	digit2 = (n / 10) % 10;
	digit3 = (n / 100) % 10;
	n = digit3 * 100 + digit2 * 10 + digit1;
	n++;
	std::cout << n;
	return 0;
}