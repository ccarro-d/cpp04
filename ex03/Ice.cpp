/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:00:38 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/24 18:43:42 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp" // se añade porque el forwad declaration en AMateria.hpp no sirve aquí
// Lo incluimos aquí mejor y no en Ice.hpp porque aquí llamamos al método de ICharacter

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
	return (*this);
}

Ice*	Ice::clone() const
{
	Ice	*cloned = new Ice(*this);
	return (cloned);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()  << " *" << std::endl;
}