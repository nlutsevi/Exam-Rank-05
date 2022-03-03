#ifndef FWOOSH_HPP

# define FWOOSH_HPP
# include "ASpell.hpp"

class	ASpell;

class	Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		Fwoosh(Fwoosh const &src);
		Fwoosh		&operator=(Fwoosh const &rhs);
		~Fwoosh(void);
		ASpell 		*clone(void) const;
};

#endif
