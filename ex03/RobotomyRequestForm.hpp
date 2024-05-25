/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:11:27 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 01:18:26 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyResquestForm: public AForm
{
	private:
		std::string	const _target;

	public:
		RobotomyResquestForm(std::string const target);
		~RobotomyResquestForm( void );
		RobotomyResquestForm( RobotomyResquestForm const& cpy );
		RobotomyResquestForm& operator=( RobotomyResquestForm const& cpy );

		void	execute(Bureaucrat const& executor) const;
		RobotomyResquestForm	*clone(std::string const& clone) const;
};

#endif
