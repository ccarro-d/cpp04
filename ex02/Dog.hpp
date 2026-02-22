/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 22:03:01 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
	private:
		Brain	*brain_;

	public:
		Dog(void);
		Dog(const Dog& other);
		virtual ~Dog(); // Es virtual, lo indiquemos o no, porque eso se establece en la clase base

		Dog&	operator=(const Dog& other);

		virtual void	makeSound(void) const; // Es virtual, lo indiquemos o no, porque eso se establece en la clase base y luego solo tienen que coincidir las firmas de las funciones
		std::string	getIdea(int index) const; // No se pide en el subject, solo para propositos de testing en el main()
		void	setIdea(int index, const std::string& idea); // No se pide en el subject, solo para propositos de testing en el main()
};

#endif
