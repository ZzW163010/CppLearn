#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <cstdio>
#include <string>

//int main()
//{
//	std::cout << "Please enter your first name: ";
//	std::string name;
//	std::cin >> name;
//
//	const std::string greeting = "Hello, " + name + "!";
//	const std::string spaces(greeting.size(), ' ');
//
//}

int main()
{
	std::string name;
	std::cout << "Please enter your first name: ";
	std::cin >> name;
	std::string greeting = "Hello," + name + "!";
	std::cout << "Please enter the pad: ";
	int pad = 0;
	std::cin >> pad;

	int rows = 0;
	rows = 2 * pad + 3;
	int r = 0;
	
	while (r != rows)
	{
		std::string::size_type cols = greeting.size() + pad * 2 + 2;
		std::string::size_type c = 0;
		while (c != cols)
		{
			if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
				std::cout << "*";
			}
			else
			{
				if (r == pad + 1 && c == pad + 1) {
					std::cout << greeting;
					c += greeting.size() - 1;
				}
				else
				{
					std::cout << " ";
				}
			}
			c++;
		}
		std::cout << std::endl;
		r++;
	}

}
