/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 15:14:49 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Scavtrap::Scavtrap(void) : _name("Default") , _Hit_points(100),_Energy_points(50),_Attack_damage(20)
{
	std::cout << "Default Scavtrap constructor called" << std::endl;
}

Scavtrap::Scavtrap(const std::string name) : _Hit_points(100),_Energy_points(50),_Attack_damage(20)
{
	std::cout << "Name Scavtrap constructor called" << std::endl;
	this->_name = name;
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

void Scavtrap::Claptrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_Hit_points -= amount;
	if (this->_Hit_points < 0)
		this->_Hit_points = 0;
	std::cout << "ScavTrap " << this->_name << " have now " << this->_Hit_points << " Hit points" << std::endl;
	if (this->_Hit_points == 0)
		std::cout << "ScavTrap " << this->_name << " died " << std::endl;

}

void Scavtrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "is now in Gate Keeper mode" << std::endl;
}

Scavtrap::~Scavtrap(void)
{
	std::cout << "Destructor Scavtrap called" << std::endl;
}

