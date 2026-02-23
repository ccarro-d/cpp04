/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 00:45:19 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/23 01:22:00 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const std::string& type);
		Ice(const Ice& other);
		~Ice();
		Ice&	operator=(const Ice& other);

		
		virtual Ice*		clone() const;
		virtual void		use(ICharacter& target);
};

#endif