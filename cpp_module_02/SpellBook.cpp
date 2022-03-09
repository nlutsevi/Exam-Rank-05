#include "SpellBook.hpp"

SpellBook::SpellBook(void) {};

SpellBook::SpellBook(SpellBook const &src)
{
	*this = src;
}

SpellBook		&SpellBook::operator=(SpellBook const &rhs)
{
	*this = rhs;
	return (*this);
}

SpellBook::~SpellBook(void) 
{
	std::map<std::string, ASpell*>::iterator	it_begin = _spells.begin();
	std::map<std::string, ASpell*>::iterator	it_end = _spells.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->_spells.clear();
}

void			SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
}

void			SpellBook::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells.erase(name);
}

ASpell*			SpellBook::createSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		return (_spells[name]->clone());
	return NULL;
}