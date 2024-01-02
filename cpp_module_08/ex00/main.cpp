#include "easyfind.hpp"
#include <vector>
#include <deque>

int main() // vector
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	try
	{
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "Found value: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found." << std::endl;
	}
}

// int main()
// {
// 	std::deque<int> d;
// 	d.push_back(10);
// 	d.push_back(20);
// 	d.push_back(30);
// 	d.push_back(40);
// 	d.push_back(50);

// 	try
// 	{
// 		std::deque<int>::iterator it = easyfind(d, 30);
// 		std::cout << "Found value: " << *it << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "Value not found." << std::endl;
// 	}
// }