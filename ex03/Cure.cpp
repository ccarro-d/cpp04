/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:00:38 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/24 18:43:49 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp" // se añade porque el forwad declaration en AMateria.hpp no sirve aquí
// Lo incluimos aquí mejor y no en Ice.hpp porque aquí llamamos al método de ICharacter

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure::~Cure() {}

Cure&	Cure::operator=(const Cure& other)
{
	(void)other;
	return (*this);
}

Cure*	Cure::clone() const
{
	Cure	*cloned = new Cure(*this);
	return (cloned);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()  << "'s wounds *" << std::endl;
}