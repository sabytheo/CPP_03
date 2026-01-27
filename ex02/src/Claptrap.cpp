#include "Claptrap.hpp"

Claptrap::Claptrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Claptrap::Claptrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << name << " constructor called" << std::endl;
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
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void Claptrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
				  << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack (dead or no energy)." << std::endl;
	}
}
void Claptrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (this->_hitPoints <= amount)
		{
			this->_hitPoints = 0;
			std::cout << this->_name << " takes " << amount << " damage and dies!" << std::endl;
		}
		else
		{
			this->_hitPoints -= amount;
			std::cout  << this->_name << " takes " << amount << " points of damage" << std::endl;
			std::cout  << this->_name << " have now " << this->_hitPoints << " Hit points" << std::endl;
		}
	}
	else
	{
		std::cout << this->_name << " cannot take damage he is dead" << std::endl;
	}
}
void Claptrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout <<  this->_name << " be repaired of " << amount << " points of healings" << std::endl;
		std::cout <<  this->_name << " have now " << this->_hitPoints << " Hit points" << std::endl;
	}
	else
	{
		std::cout  << this->_name << " cannot repair (dead or no energy)." << std::endl;
	}
}

Claptrap::~Claptrap(void)
{
	std::cout << this->_name << " Destructor called" << std::endl;
}
