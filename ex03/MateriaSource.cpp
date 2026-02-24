/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 00:52:05 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/23 22:37:52 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < maxMateriasToLearn; i++)
		learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < maxMateriasToLearn; i++)
		learnedMaterias[i] = NULL;
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < maxMateriasToLearn; i++)
	{
		delete learnedMaterias[i];
		learnedMaterias[i] = NULL;
	}	
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < maxMateriasToLearn; i++)
		{
			delete learnedMaterias[i];
			learnedMaterias[i] = NULL;
		}
		for (int i = 0; i < maxMateriasToLearn; i++)
		{
			if (other.learnedMaterias[i] != NULL)
				this->learnedMaterias[i] = other.learnedMaterias[i]->clone();
		}
	}
	return (*this);
}

void 	MateriaSource::learnMateria(AMateria* toLearn)
{
	if (!toLearn)
		return;
	for (int i = 0; i < maxMateriasToLearn; i++)
	{
		if (learnedMaterias[i] == NULL)
		{
			learnedMaterias[i] = toLearn;
			return;
		}
	}
	delete toLearn; // para evitar leak, como no hay espacio eliminamos
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < maxMateriasToLearn; i++)
	{
		if (learnedMaterias[i] != NULL && learnedMaterias[i]->getType() == type)
			return (learnedMaterias[i]->clone());
	}
	return (NULL);
}
