/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 19:53:48 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type_ = "Dog";
	brain_ = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	brain_ = new Brain(*other.brain_); // Es necesario hacer una nueva reserva en memoria para el Brain del nuevo objeto, ya que si no compartiría Brain con el objeto usado como parámetro en el constructor
}

Dog::~Dog() { delete brain_; }

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		Brain *tmp = new Brain(*other.brain_); // Método de seguridad por si se produjese un error en la reserva de memoria, ya que no se ejecutarían las líneas siguientes y no estaríamos eliminando el brian original para asignarle uno inexistente. Lo hacemos para preservas el estado
		delete this->brain_; // Eliminamos el antiguo Brain
		this->brain_ = tmp; // Asignamos el nuevo Brain reservado en *tmp
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "'Guau' 'guau' 'guau'" << std::endl;
}

std::string	Dog::getIdea(int index) const
{
	return (brain_->getIdea(index));
}

void	Dog::setIdea(int index, const std::string& idea)
{
	brain_->setIdea(index, idea);
}
