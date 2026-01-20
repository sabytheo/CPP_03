/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Flagtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/20 16:19:59 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Flagtrap.hpp"

Flagtrap::Flagtrap(void): Claptrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default Flagtrap constructor called" << std::endl;
}

Flagtrap::Flagtrap(const std::string name) : Claptrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "constructor Flagtrap " << this->_name << " called" << std::endl;
}

Flagtrap::Flagtrap(const Flagtrap &copy)
{
	std::cout << "Copy Flagtrap constructor called" << std::endl;
	*this = copy;
}

Flagtrap &Flagtrap::operator=(const Flagtrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Claptrap::operator=(other);
	}
	return *this;
}


void Flagtrap::highFivesGuys()
{
	std::cout << "Flagtrap " << this->_name << " high five the other guys" << std::endl;
}

Flagtrap::~Flagtrap(void)
{
	std::cout << "Destructor Flagtrap " << this->_name << " called" << std::endl;
}

