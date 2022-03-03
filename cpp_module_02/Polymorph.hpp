#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class	ASpell;

class	Polymorph : public ASpell
{
	public:
		Polymorph(void);
		Polymorph(Polymorph const &src);
		Polymorph	&operator=(Polymorph const &rhs);
		~Polymorph(void);
		ASpell		*clone(void) const;
};

#endif