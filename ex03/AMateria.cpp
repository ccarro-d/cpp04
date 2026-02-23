/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:00:38 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/23 01:16:07 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {type_ = "undefined";}

AMateria::AMateria(const std::string& type) : type_(type) {}

AMateria::AMateria(const AMateria& other) {}

AMateria::~AMateria() {}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->type_ = other.type_; // No tiene sentido pero por poner algo
	return (*this);
}