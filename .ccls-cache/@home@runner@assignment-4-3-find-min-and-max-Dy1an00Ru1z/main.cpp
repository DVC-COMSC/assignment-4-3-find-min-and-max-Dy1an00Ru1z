#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	int min, max, other;

	cin >> num1 >> num2 >> num3;

	if (num1 > num2)
	{
		if ( num2 < num3)
			min = num2; 
		else // num2 >= num3
			min =   num3;
	}
	else // num1 <= num2
	{
		if (num1 < num3)
			min = num1;
		else // num >= num1
			min = num3;
	}
	//To find max
	if (num1 > num2)
	{
		if ( num2 < num3)
			cout << num2 << "is min number\n";
		else // num2 >= num3
			cout << num3 << "is min number\n";
	}
	else // num1 <= num2
	{
		if (num1 < num3)
			cout << num1 << "is min number\n";
		else // num >= num1
			cout << num3 << "is min number\n";
	}
		
			
		
}  