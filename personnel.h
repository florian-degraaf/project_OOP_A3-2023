#pragma once

using namespace System;

public ref class personnel {
public:
	int^ ID_PERSONNEL;
	String^ PRENOM;
	String^ NOM;
	String^ MDP;
	int^ ID_SUPERIEUR;
	DateTime^ DATE_EMBAUCHE;
	String^ ADRESSE;
	String^ MAIL;
	String^ TELEPHONE;
	int^ DROITS_MODIFICATION;
};
