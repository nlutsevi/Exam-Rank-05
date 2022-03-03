#ifndef DUMMY_HPP

# define DUMMY_HPP

# include "ATarget.hpp"

class	ATarget;

class	Dummy : public ATarget
{
	public:
		Dummy(void);
		Dummy(Dummy const &src);
		Dummy	&operator=(Dummy const &rhs);
		~Dummy(void);
		ATarget	*clone(void) const;
};

#endif
