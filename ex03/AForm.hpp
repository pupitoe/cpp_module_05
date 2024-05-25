/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:20:29 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/25 14:05:43 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
		std::string	const	_name;
		bool				_signed;
		int const			_grade_signed;
		int const			_grade_execute;

		void	throwGrade( int const grad ) const;

	protected:
		void	throwSigned( void ) const;
		void	throwExecute( void ) const;

	public:
		AForm(std::string const name, int const g_signed, int const g_execute);
		virtual ~AForm(void);
		AForm(AForm const& cpy);
		AForm& operator=(AForm const& cpy);

		std::string	getName(void) const;
		int			getGSigned(void) const;
		int			getGExecute(void) const;
		bool		getSigned(void) const;

		void		beSigned(Bureaucrat const& bur);

		class	GradeTooHighException: public std::exception
		{
			private:
				char const *_reson;

			public:
				GradeTooHighException(char const *reson);
				virtual const char	*what(void) const throw();
		};

		class	GradeTooLowException: public std::exception
		{
			private:
				char const *_reson;

			public:
				GradeTooLowException(char const *reson);
				virtual const char	*what(void) const throw();
		};

		class	IsNotSigned: public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		virtual void	execute(Bureaucrat const & executor) const = 0;
		void			checkExecute(Bureaucrat const& executor) const;
};

std::ostream&	operator<<(std::ostream& o, AForm const& form);

#endif
