/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:22:05 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/18 15:19:51 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define SIZE_FORM 3

class	Intern
{
	private:
		PresidentialPardonForm	pre;
		RobotomyResquestForm	rob;
		ShrubberyCreationForm	shru;
		AForm	*tab[SIZE_FORM];

		Intern( Intern const& cpy );
		Intern&	operator=( Intern const& cpy );

	public:
		Intern(void);
		~Intern(void);

		AForm	*makeForm(std::string const& name,
			std::string const& target) const;
		
};

#endif
