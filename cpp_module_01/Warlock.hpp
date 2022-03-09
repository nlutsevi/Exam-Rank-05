#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class	ASpell;

class	ATarget;

class Warlock {
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			setTitle(std::string const &new_title);
		void			introduce(void) const;
		void			learnSpell(ASpell *spell);
		void			forgetSpell(std::string const &name);
		void			launchSpell(std::string const &name, ATarget const &target);
	private:
		std::string			_name;
		std::string			_title;
		std::map<std::string, ASpell*>	_spells; 
		Warlock(Warlock const &src);
		Warlock&		operator=(Warlock const &rhs);
		Warlock(void);
};

#endif
