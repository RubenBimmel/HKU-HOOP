#pragma once

#include <iostream>

class Transactie
{
public:
	enum TransactieType
	{
		bijschrijving,
		afschrijving
	};
	
	TransactieType type;
	float hoeveelheid;
	int datum;

	friend std::ostream& operator<<(std::ostream& lhs, const Transactie& rhs);

	Transactie(TransactieType _type, float _hoeveelheid, int _datum);

private:

};
