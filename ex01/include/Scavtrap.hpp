/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 17:00:36 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Claptrap.hpp"

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
