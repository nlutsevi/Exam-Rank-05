#include "ASpell.hpp"

ASpell::ASpell(void) {};

ASpell::ASpell(std::string const &name, std::string const &effects)
{
	this->_name = name;
	this->_effects = effects;
};

ASpell::ASpell(ASpell const &src)
{
	*this = src;
};

ASpell		&ASpell::operator=(ASpell const &rhs)
{
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return (*this);
};

ASpell::~ASpell(void) {};

std::string const	&ASpell::getName(void) const
{
	return this->_name;
};

std::string const	&ASpell::getEffects(void) const
{
	return this->_effects;
};

void			ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell((*this));
};
