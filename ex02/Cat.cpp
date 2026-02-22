/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:09:27 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 22:02:45 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	type_ = "Cat";
	brain_ = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	brain_ = new Brain(*other.brain_); // Es necesario hacer una nueva reserva en memoria para el Brain del nuevo objeto, ya que si no compartiría Brain con el objeto usado como parámetro en el constructor
}

Cat::~Cat() { delete brain_; }

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		Brain *tmp = new Brain(*other.brain_); // Método de seguridad por si se produjese un error en la reserva de memoria, ya que no se ejecutarían las líneas siguientes y no estaríamos eliminando el brian original para asignarle uno inexistente. Lo hacemos para preservas el estado
		delete this->brain_; // Eliminamos el antiguo Brain
		brain_ = tmp; // Asignamos el nuevo Brain reservado en *tmp
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "'Miau' 'miau' 'miau'" << std::endl;
}

std::string	Cat::getIdea(int index) const
{
	return(brain_->getIdea(index));
}

void	Cat::setIdea(int index, const std::string& idea)
{
	brain_->setIdea(index, idea);
}
