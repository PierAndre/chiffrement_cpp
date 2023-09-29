#include <iostream>
#include <string>
#include "RsaGestion.h"


using namespace std;

int main()
{

	int a = 0;
	RsaGestion monRsa;
	monRsa.generationClef("ClefPublic.pem", "ClefPrive.pem", 1024);

	string monMessage = "Test PV";
	string messageChiffre;
	messageChiffre = monRsa.chiffrementRsa(monMessage);
	cout << "message chiffre : " << messageChiffre << endl;

	string messageDechiffre;
	messageDechiffre = monRsa.dechiffrementRsa(messageChiffre);
	cout << "message dechiffre : " << messageDechiffre << endl;

}