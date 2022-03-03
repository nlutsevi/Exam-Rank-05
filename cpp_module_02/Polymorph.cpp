#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into critter") {};

Polymorph::Polymorph(Polymorph const &src) : ASpell(src.getName(), src.getEffects()) {};

Polymorph		&Polymorph::operator=(Polymorph const &rhs)
{
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return (*this);
}

Polymorph::~Polymorph(void) {};

ASpell			*Polymorph::clone(void) const
{
	return (new Polymorph());
}