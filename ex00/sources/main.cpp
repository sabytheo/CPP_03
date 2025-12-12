#include "Claptrap.hpp"
#include <iostream>

int main(void)
{
	Claptrap a;
	Claptrap b("Max");
	Claptrap c("Tom");

	a.attack("dede");
	b.attack("joe");
	b.takeDamage(10);
	b.attack("joe");

	c.takeDamage(5);
	c.beRepaired(5);
	return (0);
}
