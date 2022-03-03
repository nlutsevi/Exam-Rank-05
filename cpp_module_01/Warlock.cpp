/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:59:47 by nlutsevi          #+#    #+#             */
/*   Updated: 2022/03/03 04:18:02 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
};

Warlock::~Warlock(void) 
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
};

Warlock::Warlock(void) {};

Warlock::Warlock(Warlock const &src)
{
	*this = src;
}

Warlock&		Warlock::operator=(Warlock const &rhs)
{
	if (this != &rhs)
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	return *this;
}

std::string		Warlock::getName(void) const 
{
	return this->_name;
};

std::string		Warlock::getTitle(void) const 
{
	return this->_title;
};

void			Warlock::setTitle(std::string const &new_title)
{
	this->_title = new_title;
	return;
};

void			Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
};

void			Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
};

void			Warlock::forgetSpell(std::string name)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells.erase(name);
};

void			Warlock::launchSpell(std::string name, ATarget const &target)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells[name]->launch(target);
};