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

class Scavtrap : public Claptrap
{
	public:

			Scavtrap(void);
			Scavtrap(const std::string);
			Scavtrap(const Scavtrap& copy);
			virtual ~Scavtrap();

			Scavtrap& operator=(const Scavtrap& other);
			void takeDamage(unsigned int amount);
			void guardGate();
};


#endif
