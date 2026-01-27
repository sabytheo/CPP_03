#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
#include <iostream>

int main(void)
{
	Claptrap a;
	Claptrap b("Max");
	Claptrap c("Tom");

	std::cout << "------------------------" << std::endl;

	Scavtrap d;
	Scavtrap e("Paul");

	std::cout << "------------------------" << std::endl;

	Fragtrap f;
	Fragtrap g("Jack");

	std::cout << "------------------------" << std::endl;

	a.attack("dede");
	b.attack("joe");
	b.takeDamage(10);
	b.attack("joe");
	c.takeDamage(5);
	c.beRepaired(5);

	std::cout << "------------------------" << std::endl;
	d.attack("luc");
	e.guardGate();
	e.attack("joe");
	e.takeDamage(20);

	std::cout << "------------------------" << std::endl;

	Scavtrap copy(e);
	e.beRepaired(10);
	copy.beRepaired(10);

	std::cout << "------------------------" << std::endl;

	g.attack("coucou");
	g.highFivesGuys();
	g.takeDamage(100);
	g.highFivesGuys();

	std::cout << "------------------------" << std::endl;

	return (0);
}
