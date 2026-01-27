#include "Claptrap.hpp"
#include <iostream>

int main(void)
{
	Claptrap a;
	Claptrap b("Max");
	Claptrap c("Tom");

	std::cout << "------------------------" << std::endl;

	a.attack("dede");
	b.attack("joe");
	b.takeDamage(10);
	b.attack("joe");

	c.takeDamage(5);
	c.beRepaired(5);

	std::cout << "------------------------" << std::endl;

	return (0);
}
