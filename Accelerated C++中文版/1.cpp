#define _CRT_SECURE_NO_WARNINGS 

#include <cstdio>
#include <iostream>
#include <string>

//1-0

//int main()
//{
//	std::cout << "Please enter your first name : ";
//	std::string name;
//	std::cin >> name;
//
//	std::string greeting = "Hello, " + name + "!";
//	std::string second(greeting.size(), ' ');
//	std::string first(second.size(), '*');
//
//	std::cout << std::endl;
//	std::cout << "*" << first << "*" << std::endl;
//	std::cout << "*" << second << "*" << std::endl;
//	std::cout << "*" << greeting << "*" << std::endl;
//	std::cout << "*" << second << "*" << std::endl;
//	std::cout << "*" << first << "*" << std::endl;
//
//	return 0;
//}

//1-3

//int main()
//{
//	{const std::string s = "a string";
//	std::cout << s << std::endl; }
//
//	{const std::string s = "another string";
//	std::cout << s << std::endl; }
//	
//	return 0;
//}

//1-4

//int main()
//{
//	{const std::string s = "a string";
//	std::cout << s << std::endl;
//	{const std::string s = "another string";
//	std::cout <<s << std::endl;}}
//	//std::cout << s << std::endl; }; }
//}

//1-5

//int main()
//{
//	{std::string s = "a string";
//	{
//		std::string x = s + ", really";
//		std::cout << x << std::endl;
//	}
//	std::cout << s << std::endl;
//	}
//
//	return 0;
//}

//1-6

//int main()
//{
//	std::cout << "What is your name? ";
//	std::string name;
//	std::cin >> name;
//	std::cout << "Hello, " << name
//		<< std::endl << "And what is yours? ";
//	std::cin >> name;
//	std::cout << "Hello, " << name
//		<< "; nice to meet you too!";
//	
//	return 0;
//}



















//int main()
//{
//	std::cout << "Please enter your first name: ";
//	std::string name;
//	std::cin >> name;
//
//	const std::string greeting = "Hello, " + name + "!";
//	const std::string space(greeting.size(), ' ');
//	const std::string second = "*" + space + "*";
//
//	const std::string first(second.size(), '*');
//
//	std::cout << std::endl;
//	std::cout << first << std::endl;
//	std::cout << second << std::endl;
//	std::cout << "*" << greeting << "*" << std::endl;
//	std::cout << second << std::endl;
//	std::cout << first << std::endl;
//
//	return 0;
//}
//int main()
//{
//	std::cout << "Please enter your first name: ";
//	std::string name;
//	std::cin >> name;
//
//	std::cout << "Hello, " << name << "!" << std::endl;
//
//}