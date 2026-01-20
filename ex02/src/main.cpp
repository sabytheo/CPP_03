#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Flagtrap.hpp"
#include <iostream>

int main(void)
{
	Claptrap a;
	Claptrap b("Max");
	Claptrap c("Tom");

	Scavtrap d;
	Scavtrap e("Paul");

	Flagtrap f;
	Flagtrap g("Jack");

	a.attack("dede");
	b.attack("joe");
	b.takeDamage(10);
	b.attack("joe");
	c.takeDamage(5);
	c.beRepaired(5);

	d.attack("luc");
	e.guardGate();
	e.attack("joe");
	e.beRepaired(10);

	g.highFivesGuys();

	return (0);
}
