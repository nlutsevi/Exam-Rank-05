/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:55:09 by nlutsevi          #+#    #+#             */
/*   Updated: 2022/03/03 06:15:01 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class	ASpell;

class	ATarget;

class	SpellBook;

class 	Warlock {
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);
		std::string const	&getName(void) const;
		std::string const	&getTitle(void) const;
		void				setTitle(std::string const &new_title);
		void				introduce(void) const;
		void				learnSpell(ASpell *spell);
		void				forgetSpell(std::string name);
		void				launchSpell(std::string name, ATarget const &target);
	private:
		std::string						_name;
		std::string						_title;
		SpellBook 						_book;
		Warlock(void);
		Warlock(Warlock const &src);
		Warlock&		operator=(Warlock const &rhs);
};

#endif