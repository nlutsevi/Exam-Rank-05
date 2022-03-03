#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {};

BrickWall::BrickWall(BrickWall const &src) : ATarget(src.getType()) {};

BrickWall		&BrickWall::operator=(BrickWall const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

BrickWall::~BrickWall(void) {};

ATarget			*BrickWall::clone(void) const
{
	return (new BrickWall());
}