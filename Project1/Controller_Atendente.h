#ifndef Controller_Atendente_H
#define Controller_Atendente_H

#include "..\Project1\classesUML\Buraco.h"
#include "BuracoDAO.h"
#include <string>
#include <ctime>

#pragma once
ref class Controller_Atendente
{
public:
	Controller_Atendente();
	~Controller_Atendente();

	bool registrarNovoBuraco(std::string address, int size, int position, long int CEP, std::tm date);
};


#endif // Controller_Atendente