#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

int main()
{
	int escolha, cont;
	double horasTreinadas, totalHorasUmaSemana, tempo, dias, semanas, meses;

	while (true)
	{

		cout << " ==== BEM VINDO ====\n Escolha uma opcao\n";
		cout << " \n1 - Breve apresentacao do personagem\n 2 - Breve apresentacao da entidade Ling Ying Wei\n 3 - Interação do personagem com a entidade\n 4 - Veja o valor de Radiante Points arrecadados que voce atingira com horas de treinamento \n 5 - Cadastro para morar na entidade Ling Ying Wei\n";
		cin >> escolha;

		switch (escolha)
		{
		case 1:
			cout << "Ling Ying Wei foi uma jovem da provincia de CHANCH na China, em sua infancia ela recebe o dom em ser um geomante.\n Anos mais tarde uma divindade doa o poder de cura para Ling evoluir como mestre. Ao finalizar seu tempo no mosteiro ela recebe o nome de Sage";
			break;
		case 2: 
			cout << "A entidade Ling Ying Wei tem o intuito de proteger e cuidar dos idosos da provincia de CHANCH, prestigiando-os com bons cuidados e costumes, ja que\n serviram com trabalho arduo e bracal durante anos para que a provincia\n prosperasse";
			break;
		case 3:
			cout << "Como  Sage recebeu o dom da cura com sua divindade, por intuicao ela se sente no dever de defender e zelar as pessoas que estao ao seu redor, sendo assim, cuidar de seus antepassados torna-se uma dadiva";
			break;
		case 4:
			cout << "Solucao em andamento aproveite mais do nosso site";
			break;
		case 5:
			cout << "Solucao em andamento aproveite mais do nosso site";
			break;
		default: 
			cout << "Opcao inexistente, tente novamente";
			break;
		}
	}



}