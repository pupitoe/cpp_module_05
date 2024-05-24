/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:20:29 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/24 19:16:30 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class	Form
{
	private:
		std::string	const	_name;
		bool				_signed;
		int const			_grade_signed;
		int const			_grade_execute;

		void	throwGrade( int const grad ) const;

	public:
		Form(std::string const name, int const g_signed, int const g_execute);
		~Form(void);
		Form(Form const& cpy);
		Form& operator=(Form const& cpy);

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
};

std::ostream&	operator<<(std::ostream& o, Form const& form);

#endif
