#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {};

TargetGenerator::TargetGenerator(TargetGenerator const &src)
{
	*this = src;
}

TargetGenerator		&TargetGenerator::operator=(TargetGenerator const &rhs)
{
	*this = rhs;
	return (*this);
}

TargetGenerator::~TargetGenerator(void) {};

void				TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		this->_targets.insert(std::pair<std::string, ATarget*>(target->getType(), target));
}

void				TargetGenerator::forgetTargetType(std::string const &name)
{
	std::map<std::string, ATarget*>::iterator it = _targets.find(name);
	if (it != _targets.end())
		this->_targets.erase(name);
}

ATarget				*TargetGenerator::createTarget(std::string const &name)
{
	std::map<std::string, ATarget*>::iterator it = _targets.find(name);
	if (it != _targets.end())
		return _targets[name];
	return NULL;
}