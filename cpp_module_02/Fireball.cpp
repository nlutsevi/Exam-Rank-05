#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {};

Fireball::Fireball(Fireball const &src) : ASpell(src.getName(), src.getEffects()) {};

Fireball	&Fireball::operator=(Fireball const &rhs)
{
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return *this;
}

Fireball::~Fireball(void) {};

ASpell		*Fireball::clone(void) const
{
	return (new Fireball());
}