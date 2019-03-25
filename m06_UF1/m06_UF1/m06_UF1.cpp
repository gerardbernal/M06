// m06_UF1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

std::array <std::string, 20> Textures;

int LoadTextures(std::ifstream *file, int num) {

	for (int i = 0; i <= num; i++)
	{
		std::string idTexturaS;
		int idTextura;
		std::getline(*file, idTexturaS, ';');
		idTextura = stoi(idTexturaS);
		std::getline

	}

}

int main()
{

	std::ifstream ip("../m06_UF1/Gameinfo.csv");

	if (!ip.is_open()) {
		std::cout << "Error al abrir el archivo" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "el archivo ha cargado correctamente.\n\n";
	}
	std::string word;
	std::string title;

	int textures_n = 0;

	while (ip.good())
	{
		std::getline(ip, word, ';');
		if (word.compare("TEXTURES") == 0)
		{
			std::getline(ip, word, ';');
			textures_n = std::stoi(word);
			std::getline(ip, title, ';');
			
			LoadTextures(&ip, textures_n);
		}
		else if (title.compare("TITLE") == 0)
		{
			std::getline(ip, title, ';');
			std::getline(ip, title, '\n');
		}
	}

	/*
	std::string nombre;
	std::string apellido;
	std::string edad;
	std::string peso;
	int IEdad;
	float FPeso;

	while (ip.good()) {
		std::getline(ip, nombre, ';');
		std::getline(ip, apellido, ';');
		std::getline(ip, edad, ';');
		std::getline(ip, peso, '\n');

		IEdad = std::stoi(edad);
		FPeso = std::stoi(peso);
	
		std::cout << "Nombre: " << nombre << " " << apellido << std::endl;
		std::cout << "Edad: " << edad << std::endl;
		std::cout << "Peso: " << peso << std::endl;
	}

	ip.close();
    std::cout << "Hello World!\n";*/ 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
