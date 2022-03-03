#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class	ATarget;

class	BrickWall : public ATarget
{
	public:
		BrickWall(void);
		BrickWall(BrickWall const &src);
		BrickWall	&operator=(BrickWall const &rhs);
		~BrickWall(void);
		ATarget		*clone(void) const;
};

#endif