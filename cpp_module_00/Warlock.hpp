#include <iostream>

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

class Warlock
{
	private:
		std::string	_name;
		std::string	_title;
		Warlock(void);
		Warlock(Warlock const &src);
		Warlock		&operator=(Warlock const &rhs);
	public:
		Warlock(std::string const &name, std::string const& title);
		~Warlock(void);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		setTitle(std::string const &new_title);
		void		introduce(void) const;
};

#endif
