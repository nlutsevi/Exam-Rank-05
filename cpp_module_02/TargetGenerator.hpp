#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <map>

class	ATarget;

class	TargetGenerator
{
	private:
		std::map<std::string, ATarget*>		_targets;
		TargetGenerator(TargetGenerator const &src);
		TargetGenerator		&operator=(TargetGenerator const &rhs);

	public:
		TargetGenerator(void);
		~TargetGenerator(void);
		void		learnTargetType(ATarget *target);
		void		forgetTargetType(std::string const &name);
		ATarget		*createTarget(std::string const &name);
};

#endif