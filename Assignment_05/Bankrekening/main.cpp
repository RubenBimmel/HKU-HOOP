// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Bankrekening.h"
#include <iostream>


int main()
{
	Bankrekening rekening (0);

	Transactie transactie1(Transactie::bijschrijving, 20.69f, 11102017);
	Transactie transactie2(Transactie::bijschrijving, 34.50, 13102017);
	Transactie transactie3(Transactie::afschrijving, 39.99f, 13102017);
	Transactie transactie4(Transactie::bijschrijving, 10, 14102017);

	std::cout << rekening;

	rekening = rekening + transactie1;
	rekening = rekening + transactie2;

	std::cout << rekening;

	rekening = rekening + transactie3;
	rekening = rekening + transactie4;

	std::cout << rekening;

	return 0;
}

