/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:59:47 by nlutsevi          #+#    #+#             */
/*   Updated: 2022/03/09 18:09:25 by nlutsevi         ###   ########.fr       */
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
	std::map<std::string, ASpell*>::iterator	it_begin = _spells.begin();
	std::map<std::string, ASpell*>::iterator	it_end = _spells.end();
	while (it_begin != it_end)
	{
		delete	it_begin->second;
		++it_begin;
	}
	this->_spells.clear();
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

void			Warlock::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells.erase(name);
};

void			Warlock::launchSpell(std::string const &name, ATarget const &target)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells[name]->launch(target);
};