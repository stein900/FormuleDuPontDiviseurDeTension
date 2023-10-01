
#include<iostream>
#define espace "\t\t\t\t\t\t"
#define espace2 "\t\t\t\t\t\t     "
#define espace3 "\t\t\t\t\t"
#define JumpLine std::cout<<std::endl<<std::endl<<std::endl;

void MenuChooI(double* Ue, double* Ve, double* I, double* R1, double* R2, int& sol);
void Calcule(double* Ue, double* Ve, double* I, double* R1, double* R2, int& sol);

int main() {

	int sol = 0;
	double Ue, Ve, R2, R1, I;
	bool Loop = true;

	do {
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "Qui recherchez vous? " << std::endl;
		std::cout << espace << "[1] Ue" << std::endl; //
		std::cout << espace << "[2] Ve" << std::endl; //
		std::cout << espace << "[3] I" << std::endl;
		std::cout << espace << "[4] R1" << std::endl; //
		std::cout << espace << "[5] R2" << std::endl; //
		std::cin >> sol;
		system("cls");

		MenuChooI(&Ue, &Ve, &I, &R1, &R2, sol);

		Calcule(&Ue, &Ve, &I, &R1, &R2, sol);
		JumpLine
			std::cout << espace << "Next -> (1:0): " << std::endl;
		std::cin >> Loop;

	} while (Loop != false);

	return 0;
}


void MenuChooI(double* Ue, double* Ve, double* I, double* R1, double* R2, int& sol) {

	if (sol == 1) {
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ve: " << std::endl;
		std::cin >> *Ve;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R1: " << std::endl;
		std::cin >> *R1;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R2: " << std::endl;
		std::cin >> *R2;
		system("cls");
	}
	else if (sol == 2) {
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ue: " << std::endl;
		std::cin >> *Ue;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R1: " << std::endl;
		std::cin >> *R1;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R2: " << std::endl;
		std::cin >> *R2;
		system("cls");
		JumpLine; JumpLine; JumpLine;
	}
	else if (sol == 3) {
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ue: " << std::endl;
		std::cin >> *Ue;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ve: " << std::endl;
		std::cin >> *Ve;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R1: " << std::endl;
		std::cin >> *R1;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R2: " << std::endl;
		std::cin >> *R2;
		system("cls");
		JumpLine; JumpLine; JumpLine;
	}
	else if (sol == 4) {
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ue: " << std::endl;
		std::cin >> *Ue;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ve: " << std::endl;
		std::cin >> *Ve;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R2: " << std::endl;
		std::cin >> *R2;
		system("cls");
		JumpLine; JumpLine; JumpLine;
	}
	else if (sol == 5) {
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ue: " << std::endl;
		std::cin >> *Ue;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de Ve: " << std::endl;
		std::cin >> *Ve;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace << "entrez la valeur de R1: " << std::endl;
		std::cin >> *R1;
		system("cls");
		JumpLine; JumpLine; JumpLine;
	}
}

void Calcule(double* Ue, double* Ve, double* I, double* R1, double* R2, int& sol) {

	if (sol == 1) {
		*Ue = (*R2 / (*R1 + *R2)) * *Ve;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace3 << "La valeur de Ue est de: " << *Ue << " volts" << std::endl;
	}
	else if (sol == 2) {
		*Ve = *Ue * (*R1 + *R2) / *R2;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace3 << "La valeur de Ve est de: " << *Ve << " volts" << std::endl;
	}
	else if (sol == 3) {
		*Ue = *Ve * (*R1 / (*R1 + *R2));
		*I = *Ue / (*R1 + *R2);
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace3 << "La valeur de I est de: " << *I << " ampères" << std::endl;
	}
	else if (sol == 4) {
		*R1 = *R2 * (*Ue / (*Ve - *Ue)) - 2.75;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace3 << "La valeur de R1 est de: " << *R1 << " ohms" << std::endl;
	}
	else if (sol == 5) {
		double Numerateur = (*Ue * *R1);
		double Denominateur = (*Ve - *Ue);
		*R2 = Numerateur / Denominateur;
		system("cls");
		JumpLine; JumpLine; JumpLine;
		std::cout << espace3 << "La valeur de R2 est de: " << *R2 << " ohms" << std::endl;
	}

	//if (sol == 1) {
//	Ue = (R2 / (R1 + R2)) * Ve;
//	system("cls");
//	JumpLine; JumpLine; JumpLine;
//	std::cout << espace << "La valeur de Ue est de: " << Ue << " volts" << std::endl;
//}
//if (sol == 2) {
//	Ve = Ue * (R1 + R2) / R2;
//	system("cls");
//	JumpLine; JumpLine; JumpLine;
//	std::cout << espace << "La valeur de Ve est de: " << Ve << " volts" << std::endl;
//}
//if (sol == 3) {
//	Ue = Ve * (R1 / (R1 + R2));
//	I = Ue / (R1 + R2);
//	system("cls");
//	JumpLine; JumpLine; JumpLine;
//	std::cout << espace << "La valeur de I est de: " << I << " ampères" << std::endl;
//}
//if (sol == 4) {
//	R1 = R2 * (Ue / (Ve - Ue)) - 2.75;
//	system("cls");
//	JumpLine; JumpLine; JumpLine;
//	std::cout << espace << "La valeur de R1 est de: " << R1 << " ohms" << std::endl;
//}
//if (sol == 5) {
//	double Numerateur = (Ue * R1);
//	double Denominateur = (Ve - Ue);
//	R2 = Numerateur / Denominateur;
//	system("cls");
//	JumpLine; JumpLine; JumpLine;
//	std::cout << espace << "La valeur de R2 est de: " << R2 << " ohms" << std::endl;
//}

}