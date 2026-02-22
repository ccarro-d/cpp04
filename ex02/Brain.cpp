/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 21:00:52 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/21 21:00:57 by ccarro-d         ###   ########.fr       */
/*                                           #                                 */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	// Se podría hacer esto, pero es redundante porque los std::string ya se inicializan vacíos en C++
	/*int	i = 0;

	while (i < 100)
	{
		ideas_[i] = "";
		i++;
	}*/
}

Brain::Brain(const Brain& other)
{
	*this = other; // Utiliza el operator=()
}

Brain::~Brain() {}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		int	i = 0;
		while (i < 100)
		{
			this->ideas_[i] = other.ideas_[i];
			i++;
		}
	}
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Wrong index specified" << std::endl;
		return ("");
	}
	return (ideas_[index]);
}

void	Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Wrong index specified" << std::endl;
		return ;
	}
	ideas_[index] = idea;
}