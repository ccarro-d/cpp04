/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 21:00:50 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 18:19:14 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class	Brain{
	private:
		std::string	ideas_[100];

	public:
		Brain();
		Brain(const Brain& other);
		~Brain();

		Brain&	operator=(const Brain& other);
		std::string	getIdea(int index) const;
		void	setIdea(int index, const std::string& idea);
};

#endif