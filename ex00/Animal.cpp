/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/16 20:10:52 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("unknown animal") {}

Animal::Animal(const std::string& type) : type_(type) {}

Animal::Animal(const Animal& other) : type_(other.type_) {}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes undefined sound" << std::endl;
}
