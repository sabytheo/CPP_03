/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 17:25:04 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"

Scavtrap::Scavtrap(void): Claptrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default Scavtrap constructor called" << std::endl;
}

Scavtrap::Scavtrap(const std::string name) : Claptrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = name;
	std::cout << "Constructor Scavtrap " << this->_name << " called" << std::endl;
}

Scavtrap::Scavtrap(const Scavtrap &copy)
{
	std::cout << "Copy Scavtrap constructor called" << std::endl;
	*this = copy;
}

Scavtrap &Scavtrap::operator=(const Scavtrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
	}
	return *this;
}

void Scavtrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ScavTrap " << this->_name << " have now " << this->_hitPoints << " Hit points" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " died " << std::endl;
}

void Scavtrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode" << std::endl;
}

Scavtrap::~Scavtrap(void)
{
	std::cout << "Destructor Scavtrap " << this->_name << " called" << std::endl;
}

