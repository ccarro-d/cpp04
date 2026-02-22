/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 21:42:01 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>
#include <iostream>

class AAnimal {
	protected:
		std::string	type_;

	public:
		AAnimal(void);
		AAnimal(const AAnimal& other);
		virtual ~AAnimal();

		AAnimal&	operator=(const AAnimal& other);

		const std::string&	getType(void) const;
		virtual void	makeSound(void) const = 0; // Esta marca "=0" define el método virtual como método virtual puro. Con un método de este tipo, ya es clase abstracta. No se puede instanciar porque el método virtual puro está declarado pero no implementado (y el compilador no deja instanciar clases isn comportamiento 100% definido)
};

#endif
