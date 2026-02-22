/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 22:01:16 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("AAnimal") {}

AAnimal::~AAnimal() {}

AAnimal::AAnimal(const AAnimal& other) : type_(other.type_) {}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

const std::string&	AAnimal::getType(void) const
{
	return (type_);
}

/*void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal makes undefined sound" << std::endl;
}*/
// Comentamos esta función para eliminar su implementación ya que, al estar declarada como virtual pura en el .hpp no podemos instanciar Animal y cada clase derivada implementa su propio sonido
