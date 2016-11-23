/**********************************
 * Author: Kyle De Laurell
 * Date: 9/29/15
 * Description: This Program asks your favorite
 * animal and the outputs it.
 * *********************************/

#include <iostream>
#include <string>

// a simple example problem
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
