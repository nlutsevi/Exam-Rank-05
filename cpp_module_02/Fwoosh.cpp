#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {};

Fwoosh::Fwoosh(Fwoosh const &src) : ASpell(src.getName(), src.getEffects()) {};

Fwoosh		&Fwoosh::operator=(Fwoosh const &rhs)
{
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return (*this);
};

Fwoosh::~Fwoosh(void) {};

ASpell		*Fwoosh::clone(void) const
{
	return (new Fwoosh());
};