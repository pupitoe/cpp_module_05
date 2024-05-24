/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:19:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/24 19:10:25 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat tom("tom", 69);
		Form	form("polo signed", 56, 60);
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
		
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}