#include "Claptrap.hpp"
#include <iostream>

int main(void)
{
	Claptrap a;
	Claptrap b("Max");
	Claptrap c("Tom");
	Scavtrap d;
	Scavtrap e("Paul");

	a.attack("dede");
	b.attack("joe");
	b.takeDamage(10);
	b.attack("joe");
	c.takeDamage(5);
	c.beRepaired(5);

	d.attack("luc");
	e.takeDamage(50);
	e.beRepaired(10);

	return (0);
}
