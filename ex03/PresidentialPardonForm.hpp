/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:10:35 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/27 18:59:50 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string	const _target;
		PresidentialPardonForm( void );

	public:
		PresidentialPardonForm(std::string const target);
		~PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const& cpy );
		PresidentialPardonForm& operator=( PresidentialPardonForm const& cpy );

		void					execute(Bureaucrat const& executor) const;
		PresidentialPardonForm	*clone(std::string const& clone) const;
};


#endif
