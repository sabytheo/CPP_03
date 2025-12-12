#include "Claptrap.hpp"

Claptrap::Claptrap(void) : _name("Default"),_Hit_points(10),_Energy_points(10),_Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Claptrap::Claptrap(const std::string name) : _Hit_points(10),_Energy_points(10),_Attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
}

Claptrap::Claptrap(const Claptrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Claptrap &Claptrap::operator=(const Claptrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
	}
	return *this;
}

void Claptrap::attack(const std::string& target)
{
	if (this->_Energy_points > 0 || this->_Hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_Attack_damage << " points of damage!" << std::endl;
		this->_Energy_points -= 1;
	}
}
void Claptrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_Hit_points -= amount;
	if (this->_Hit_points < 0)
		this->_Hit_points = 0;
	std::cout << "ClapTrap " << this->_name << " have now " << this->_Hit_points << " Hit points" << std::endl;
	if (this->_Hit_points == 0)
		std::cout << "ClapTrap " << this->_name << " died " << std::endl;
}
void Claptrap::beRepaired(unsigned int amount)
{

	if (this->_Energy_points > 0 || this->_Hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << "be repaired of " << amount << " points of healings" << std::endl;
		this->_Hit_points += amount;
		std::cout << "ClapTrap " << this->_name << "have now " << this->_Hit_points << " Hit points" << std::endl;
	}
}

Claptrap::~Claptrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
