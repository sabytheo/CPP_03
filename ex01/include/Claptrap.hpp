#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class Claptrap
{
	protected:
			std::string _name;
			int	_hitPoints;
			int	_Energy_points;
			int	_Attack_damage;
	public:

			Claptrap(void);
			Claptrap(const std::string name);
			Claptrap(const Claptrap& copy);
			~Claptrap(void);

			Claptrap& operator=(const Claptrap& other);

			void attack(const std::string& target);
			virtual void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};

#endif
