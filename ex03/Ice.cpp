/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:00:38 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/23 01:31:43 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const std::string& type) : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->type_ = other.type_; // No tiene sentido pero por poner algo
	return (*this);
}

Ice*	Ice::clone() const
{
	Ice	*cloned = new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	if (type_ == "ice")
		std::cout << "* shoots an ice bolt at " << target.name_  << " *";
	if (type_ == "cure")
		std::cout << "* heals " << target.name_  << "’s wounds *";
}