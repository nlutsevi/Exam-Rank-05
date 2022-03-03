#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class	ASpell;

class	ATarget
{
	protected:
		std::string	_type;
	public:
		ATarget(void);
		ATarget(std::string const &type);
		ATarget(ATarget const &src);
		ATarget			&operator=(ATarget const &rhs);
		~ATarget(void);
		std::string const	&getType(void) const;
		virtual ATarget		*clone(void) const = 0;
		void			getHitBySpell(ASpell const &spell) const;
};

#endif
