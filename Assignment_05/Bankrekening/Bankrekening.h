#pragma once

#include "Transactie.h"
#include <vector>
#include <iostream>

class Bankrekening
{
public:
	Bankrekening(float _saldo);
	Bankrekening(const Bankrekening& other);
	Bankrekening operator+(Transactie& rhs) const;
	friend std::ostream& operator<<(std::ostream& lhs, const Bankrekening& rhs);

private:
	float saldo;
	std::vector<Transactie> transactieHistorie;

};