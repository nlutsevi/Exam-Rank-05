#include "ATarget.hpp"

ATarget::ATarget(void) {};

ATarget::ATarget(std::string const &type)
{
	this->_type = type;
};

ATarget::ATarget(ATarget const &src)
{
	*this = src;
};

ATarget			&ATarget::operator=(ATarget const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

ATarget::~ATarget(void) {};

std::string const	&ATarget::getType(void) const
{
	return (this->_type);
};

void			ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
};