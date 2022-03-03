#include "Warlock.hpp"

Warlock::Warlock(void) {};

Warlock::Warlock(std::string const &name, std::string const& title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_title << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &src)
{
	*this = src;
}

Warlock					&Warlock::operator=(Warlock const &rhs)
{
	if (this != &rhs)
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	return *this; 
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string				Warlock::getName(void) const
{
	return this->_name;
}

std::string				Warlock::getTitle(void) const
{
	return this->_title;
}

void					Warlock::setTitle(std::string const &new_title)
{
	this->_title = new_title;
}

void					Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << "," << this->_title << "!" << std::endl;
}