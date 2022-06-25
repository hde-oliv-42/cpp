#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void announce( void );
	void setName( std::string name );

	private:
	std::string name;
};

Zombie *newZombie( std::string name );
void	randomChump( std::string name );

#endif
