#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure&);
		~Cure();
		Cure& operator=(const Cure&);
		AMateria* clone() const override;
		void use(ICharacter& target) override;
};

#endif