#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class Claptrap
{
	private:
			std::string _name;
			int	_hitPoints;
			int	_energyPoints;
			int	_attackDamage;
	public:

			Claptrap(void);
			Claptrap(const std::string name);
			Claptrap(const Claptrap& copy);
			~Claptrap(void);

			Claptrap& operator=(const Claptrap& other);

			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream& os,const Claptrap& other);

#endif
