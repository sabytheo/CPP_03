/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/27 09:37:39 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Fragtrap.hpp"

Fragtrap::Fragtrap(void): Claptrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default Fragtrap constructor called" << std::endl;
}

Fragtrap::Fragtrap(const std::string &name) : Claptrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "constructor Fragtrap " << this->_name << " called" << std::endl;
}

Fragtrap::Fragtrap(const Fragtrap &copy) : Claptrap(copy)
{
	std::cout << "Copy Fragtrap constructor called" << std::endl;
	*this = copy;
}

void Fragtrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "Fragtrap " << this->_name << " attacks " << target
				  << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "Fragtrap " << this->_name << " cannot attack (dead or no energy)." << std::endl;
	}
}

Fragtrap &Fragtrap::operator=(const Fragtrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Claptrap::operator=(other);
	}
	return *this;
}

void Fragtrap::highFivesGuys()
{
	if (this->_hitPoints > 0)
	{
		std::cout << "Fragtrap " << this->_name << " high five the other guys" << std::endl;
	}
	else
	{
		std::cout << "Fragtrap " << this->_name << " cannot HighFive.. (dead)." << std::endl;
	}
}

Fragtrap::~Fragtrap(void)
{
	std::cout << "Destructor Fragtrap " << this->_name << " called" << std::endl;
}

