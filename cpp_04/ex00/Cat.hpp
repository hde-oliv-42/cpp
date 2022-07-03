#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
	Cat( void );
	Cat( Cat const &ref );
	~Cat( void );
	Cat &operator=( Cat const &ref );
	virtual void makeSound( void ) const;
};

#endif
