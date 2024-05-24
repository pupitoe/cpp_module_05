/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:20:15 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/24 15:25:08 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

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

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& bureau);

#endif
