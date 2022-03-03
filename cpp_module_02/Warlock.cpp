/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:59:47 by nlutsevi          #+#    #+#             */
/*   Updated: 2022/03/03 06:24:39 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
};

Warlock::Warlock(void) {};

Warlock::Warlock(Warlock const &src)
{
	*this = src;
};

Warlock&			Warlock::operator=(Warlock const &rhs)
{
	if (this != &rhs)
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	return *this;
};

Warlock::~Warlock(void) 
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
};

std::string const	&Warlock::getName(void) const 
{
	return (this->_name);
};

std::string const	&Warlock::getTitle(void) const 
{
	return (this->_title);
};

void				Warlock::setTitle(std::string const &new_title)
{
	this->_title = new_title;
	return;
};

void				Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
};

void				Warlock::learnSpell(ASpell *spell)
{
	this->_book.learnSpell(spell);
};

void				Warlock::forgetSpell(std::string name)
{
	this->_book.forgetSpell(name);
};

void				Warlock::launchSpell(std::string name, ATarget const &target)
{
	ATarget const *test = 0;
	if (test == &target)
		return;
	ASpell *temp = this->_book.createSpell(name);
	if (temp)
		temp->launch(target);
};