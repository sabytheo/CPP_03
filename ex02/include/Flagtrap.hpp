/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Flagtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 17:07:10 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Claptrap.hpp"

class Flagtrap : public Claptrap
{
	public:

			Flagtrap(void);
			Flagtrap(const std::string);
			Flagtrap(const Flagtrap& copy);
			virtual ~Flagtrap();

			Flagtrap& operator=(const Flagtrap& other);
			void highFivesGuys(void);
};
