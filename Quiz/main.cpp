#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//variaveis
	setlocale (LC_ALL,"portuguese");
	int r1;
	int r2;
	int r3;
	int r4;
	int r5;
	
	cout <<"Quiz sobre mitologia nordica. Responda escolhendo uma alternativa. \n";
	cout <<"Quem � Fenrir na midotologia nordica: \n";
	cout <<"1- Um lobo Gigante. \n";
	cout <<"2- Uma Cobra Gigante. \n";
	cout <<"3- Um deus guerreiro. \n";
	cout <<"4- Uma arvore magica. \n";
	cin >> r1;
	
	if (r1 == 1){
		cout <<"Acertou! \n";
	}
	if (r1 != 1){
		cout <<"Errou! A resposta �: 1- Um lobo Gigante. \n";
	}
	
	cout <<"Quem mata Thor no Ragnarok?: \n";
	cout <<"1- Mimir. \n";
	cout <<"2- Fennrir. \n";
	cout <<"3- Odin. \n";
	cout <<"4- Jormm�ngandr. \n";
	cin >> r2;
	if (r2 == 4){
		cout <<"Acertou! \n";
	}
	if (r2 != 4){
		cout <<"Errou!A resposta �: 4- Jormm�ngandr.  \n";
	}
	
	cout <<"Quais s�o os filhos bestiais de Loki? \n";
	cout <<"1- Fennrir, Sleipnir e Hel. \n";
	cout <<"2- Mimir, Hel e Angrboda. \n";
	cout <<"3- Fennrir, Jormm�ngandr e Hel. \n";
	cout <<"4- Sigyn, Jormm�ngandr e Mimir. \n";
	cin >> r3;
	if (r3 == 3){
		cout <<"Acertou! \n";
	}
	if (r3 != 3){
		cout <<"Errou!A resposta �: 3- Fennrir, Jormm�ngandr e Hel. \n";
	}
	
	cout <<"Quem forjou o Mjolnir? \n";
	cout <<"1- Um dos Enheijar de Asgard. \n";
	cout <<"2- Balder. \n";
	cout <<"3- Litt. \n";
	cout <<"4- Os an�es Brokk e Eitri. \n";
	cin >> r4;
	if (r4 == 4){
		cout <<"Acertou! \n";
	}
	if (r4 != 4){
		cout <<"Errou!A resposta �: 4- Os an�es Brokk e Eitri.  \n";
	}
	
	cout <<"Jormm�ngandr �? \n";
	cout <<"1- Uma Arvore. \n";
	cout <<"2- Uma cobra gigante. \n";
	cout <<"3- Um An�o. \n";
	cout <<"4- Um deus. \n";
	cin >> r5;

if (r5 == 2){
		cout <<"Acertou! \n";
	}
	if (r5 != 2){
		cout <<"Errou!A resposta �: 2- Uma cobra gigante. \n";
	}	
	
	cout <<"Fim de jogo!";
	
	
	return 0;
}
