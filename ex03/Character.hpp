/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 00:48:46 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/24 18:05:00 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string			name_;
		static const int	invSize_ = 4; // static const para que no se queje
		AMateria 			*inventory_[invSize_];
		static const int	floorSize_ = 256; // static const para que no se queje. Lo hacemos grande para que quepan muchas materias
		AMateria 			*floor_[floorSize_];
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		~Character();

		Character&	operator=(const Character& other);
		
		virtual const std::string&	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

};

#endif