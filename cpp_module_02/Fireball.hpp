#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class	ASpell;

class	Fireball : public ASpell
{
	public:
		Fireball(void);
		Fireball(Fireball const &src);
		Fireball	&operator=(Fireball const &rhs);
		~Fireball(void);
		ASpell		*clone(void) const;
};

#endif