/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/27 09:31:28 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Claptrap.hpp"

class Fragtrap : public Claptrap
{
	public:

			Fragtrap(void);
			Fragtrap(const std::string&);
			Fragtrap(const Fragtrap& copy);
			virtual ~Fragtrap();

			Fragtrap& operator=(const Fragtrap& other);
			void attack(const std::string &target) ;
			void highFivesGuys(void);
};
