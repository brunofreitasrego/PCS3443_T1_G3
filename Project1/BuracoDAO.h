#ifndef BuracoDAO_H
#define BuracoDAO_H

#include <string>

#pragma once
ref class BuracoDAO
{
public:
	BuracoDAO();

	bool registrarNovoBuraco(std::string address, int size, int position, long int CEP, std::tm date);
};

#endif 