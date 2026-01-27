#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main(void)
{
	Claptrap a;
	Claptrap b("Max");
	Claptrap c("Tom");

	std::cout << "------------------------" << std::endl;

	Scavtrap d;
	Scavtrap e("Paul");

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
	e.takeDamage(50);
	e.beRepaired(10);

	std::cout << "------------------------" << std::endl;

	return (0);
}
