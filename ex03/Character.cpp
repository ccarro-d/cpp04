/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 00:48:46 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/24 19:03:45 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : name_("undefined")
{
	for (int i = 0; i < invSize_; i++)
	{
		inventory_[i] = NULL;
	}
	for (int i = 0; i < floorSize_; i++)
	{
		floor_[i] = NULL;
	}
}

Character::Character(const std::string& name) : name_(name)
{
	for (int i = 0; i < invSize_; i++)
	{
		inventory_[i] = NULL;
	}
	for (int i = 0; i < floorSize_; i++)
	{
		floor_[i] = NULL;
	}
}


Character::Character(const Character& other)
{
	for (int i = 0; i < invSize_; i++)
	{
		inventory_[i] = NULL;
	}
	for (int i = 0; i < floorSize_; i++)
	{
		floor_[i] = NULL;
	}
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < invSize_; i++)
	{
		if (inventory_[i] != NULL)
			delete inventory_[i];
	}
	for (int i = 0; i < floorSize_; i++)
	{
		if (floor_[i] != NULL)
			delete floor_[i];
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		for (int i = 0; i < invSize_; i++)
		{
			if (inventory_[i] != NULL)
				delete inventory_[i];
			if (other.inventory_[i] == NULL)
				inventory_[i] = NULL;
			else
				inventory_[i] = other.inventory_[i]->clone();
		}
		for (int i = 0; i < floorSize_; i++)
		{
			if (floor_[i] != NULL)
			{
				delete floor_[i];
				floor_[i] = NULL;
			}
			// No copiamos el floor, pero sí lo limpiamos
		}
	}
	return (*this);
}

const std::string&	Character::getName() const
{
	return (this->name_);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < invSize_; i++)
	{
		if (inventory_[i] == NULL)
		{
			inventory_[i] = m;
			return;
		}
	}
	// Si no hay hueco en el inventario, no hace nada
}
void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= invSize_)
	{
		std::cout << "Invalid index: idx = " << idx << std::endl;
		return ;
	}
	if (inventory_[idx] != NULL)
	{
		for (int i = 0; i < floorSize_; i++)
		{
			if (floor_[i] == NULL)
			{
				floor_[i] = inventory_[idx];
				inventory_[idx] = NULL;
				return ;
			}
		}
	}
	// si el floor está lleno, simplemente no desequipa
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= invSize_)
	{
		std::cout << "Invalid index: idx = " << idx << std::endl;
		return ;
	}
	if (inventory_[idx] == NULL)
	{
		std::cout << "There's no materia on inventory for the specified index: idx = " << idx << std::endl;
		return ;
	}
	inventory_[idx]->use(target);
}


