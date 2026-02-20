/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/20 18:06:24 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string	type_;

	public:
		Animal(void);
		Animal(const Animal& other);
		~Animal();

		Animal&	operator=(const Animal& other);

		const std::string&	getType(void) const;
		void	makeSound(void) const;
};

#endif
