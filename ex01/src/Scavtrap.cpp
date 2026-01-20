/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/20 16:15:44 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"

Scavtrap::Scavtrap(void) : Claptrap()
{
	this->_gateMode = false;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default Scavtrap constructor called" << std::endl;
}

Scavtrap::Scavtrap(const std::string &name) : Claptrap(name)
{
	this->_gateMode = false;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor Scavtrap " << this->_name << " called" << std::endl;
}

Scavtrap::Scavtrap(const Scavtrap &copy) : Claptrap(copy)
{
	std::cout << "Copy Scavtrap constructor called" << std::endl;
	*this = copy;
}

Scavtrap &Scavtrap::operator=(const Scavtrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Claptrap::operator=(other);
		this->_gateMode = other._gateMode;
	}
	return *this;
}

void Scavtrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Scavtrap " << this->_name << " is dead or out of energy." << std::endl;
		return;
	}
	if (this->_gateMode == false)
	{
		std::cout << "Scavtrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
		return;
	}
	else
		std::cout << "Scavtrap " << this->_name << " cannot attacks " << target << " because he is in gate keeper mode" << std::endl;
}

void Scavtrap::guardGate()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot guard anything." << std::endl;
		return;
	}
	if (this->_gateMode == false)
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode" << std::endl;
		this->_gateMode = true;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is already in Gate Keeper mode" << std::endl;
	}
}

Scavtrap::~Scavtrap(void)
{
	std::cout << "Destructor Scavtrap " << this->_name << " called" << std::endl;
}
