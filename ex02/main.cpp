/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:19:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/25 17:53:41 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
	try
	{
		Bureaucrat tom("tom", 69);
		ShrubberyCreationForm	form;
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
		form.execute(tom);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}