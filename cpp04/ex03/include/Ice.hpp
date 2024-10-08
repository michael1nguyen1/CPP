#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice&);
		~Ice();
		Ice& operator=(const Ice&);
		AMateria* clone() const override;
		void use(ICharacter& target) override;
};

#endif