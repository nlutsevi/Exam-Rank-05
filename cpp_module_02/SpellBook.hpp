#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <map>

class	ASpell;

class SpellBook
{
	private:
		std::map<std::string, ASpell*>	_spells;
		SpellBook(SpellBook const &src);
		SpellBook	&operator=(SpellBook const &rhs);
	public:
		SpellBook(void);
		~SpellBook(void);
		void		learnSpell(ASpell *spell);
		void		forgetSpell(std::string const &name);
		ASpell*		createSpell(std::string const& name);
};

#endif