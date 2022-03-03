#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {};

Dummy::Dummy(Dummy const &src) : ATarget(src.getType()) {};

Dummy		&Dummy::operator=(Dummy const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
};

Dummy::~Dummy(void) {};

ATarget		*Dummy::clone(void) const
{
	return (new Dummy());
};