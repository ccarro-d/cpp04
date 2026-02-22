/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/20 19:13:23 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal") {}

Animal::~Animal() {}

Animal::Animal(const Animal& other) : type_(other.type_) {}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

const std::string&	Animal::getType(void) const
{
	return(type_);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes undefined sound" << std::endl;
}
