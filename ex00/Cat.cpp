/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/20 17:22:39 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() { type_ = "Cat"; }

Cat::Cat(const Cat& other) : Animal(other) {}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "'Miau' 'miau' 'miau'" << std::endl;
}

Cat::~Cat() {}
