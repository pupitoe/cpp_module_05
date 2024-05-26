/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:20:15 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 18:13:09 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private:
		std::string	const	name;
		int					grade; // best is 1, low is 150

		void	throwGrade( int const grad ) const;

	public:
		Bureaucrat( std::string const name, int const grade );
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const& cpy );
		Bureaucrat& operator=( Bureaucrat const& cpy );

		int			getGrade( void ) const;
		std::string	getName( void ) const;
		void		upGrade( int const up );
		void		downGrade( int const down );

		void	signForm(AForm& form) const;

		class	GradeTooHighException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		void	executeForm(AForm const & form) const;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& bureau);

#endif
