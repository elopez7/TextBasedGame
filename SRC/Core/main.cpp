#include <iostream>
#include <algorithm>

float set_health(float &amount)
{
	amount = amount * 2;
	 
	return std::clamp(amount, 0.0f, 10.0f);;
}

//Application's entry point
int main()
{
	float number = 15;
	number = set_health(number);
	std::cout << number;
	return 0;
}