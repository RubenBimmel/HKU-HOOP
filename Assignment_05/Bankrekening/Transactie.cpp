#include "Transactie.h"

Transactie::Transactie(TransactieType _type, float _hoeveelheid, int _datum) : type(_type), hoeveelheid(_hoeveelheid), datum(_datum) {}

std::ostream & operator<<(std::ostream & lhs, const Transactie & rhs)
{
	if(rhs.type == Transactie::bijschrijving)
		lhs << rhs.datum << " -- Bijschrijving:  €" << rhs.hoeveelheid << std::endl;
	if (rhs.type == Transactie::afschrijving)
		lhs << rhs.datum << " -- Afschrijving: - €" << rhs.hoeveelheid << std::endl;
	return lhs;
}
