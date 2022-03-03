/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 03:03:23 by nlutsevi          #+#    #+#             */
/*   Updated: 2022/03/02 03:15:18 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Warlock.hpp"

int		main(void)
{ 
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock *jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
}