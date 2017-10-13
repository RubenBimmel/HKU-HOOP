#include "Bankrekening.h"

Bankrekening::Bankrekening(float _saldo) : saldo(_saldo) {
	transactieHistorie = std::vector<Transactie>();
}

Bankrekening::Bankrekening(const Bankrekening& other) {
	saldo = other.saldo;
	transactieHistorie = std::vector<Transactie>(other.transactieHistorie);
}

Bankrekening Bankrekening::operator+(Transactie& rhs) const
{
	Bankrekening nieuweRekening(*this);
	if (rhs.type == Transactie::bijschrijving)  nieuweRekening.saldo += rhs.hoeveelheid;
	if (rhs.type == Transactie::afschrijving)   nieuweRekening.saldo -= rhs.hoeveelheid;

	nieuweRekening.transactieHistorie.push_back(rhs);

	return nieuweRekening;
}

std::ostream& operator<<(std::ostream& lhs, const Bankrekening& rhs)
{
	lhs << "#Bankrekening " << std::endl;
	lhs << " Saldo: " << rhs.saldo << std::endl;
	lhs << " Transactie historie: " << std::endl;
	for (int i = 0; i < rhs.transactieHistorie.size(); i++) {
		lhs << "  " << rhs.transactieHistorie[i];
	}
	lhs << std::endl;
	return lhs;
}
