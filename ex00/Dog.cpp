/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/20 17:22:31 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() { type_ = "Dog"; }


Dog::Dog(const Dog& other) : Animal(other) {}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "'Guau' 'guau' 'guau'" << std::endl;
}

Dog::~Dog() {}
