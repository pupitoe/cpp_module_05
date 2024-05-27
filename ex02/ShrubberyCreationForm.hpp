/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:12:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/27 19:01:29 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	const _target;
		ShrubberyCreationForm( void );

	public:
		ShrubberyCreationForm( std::string const target );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( ShrubberyCreationForm const& cpy );
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const& cpy );

		void	execute(Bureaucrat const& executor) const;
		void	makeTree(std::string target) const;
};

#endif
