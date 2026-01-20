/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/20 15:02:50 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Claptrap.hpp"

class Scavtrap : public Claptrap
{
	private:
			bool _gateMode;
	public:

			Scavtrap(void);
			Scavtrap(const std::string&);
			Scavtrap(const Scavtrap& copy);
			virtual ~Scavtrap();

			Scavtrap& operator=(const Scavtrap& other);
			void attack(const std::string& target);
			void guardGate();
};
