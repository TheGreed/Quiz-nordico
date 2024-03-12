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
	cout <<"Quem é Fenrir na midotologia nordica: \n";
	cout <<"1- Um lobo Gigante. \n";
	cout <<"2- Uma Cobra Gigante. \n";
	cout <<"3- Um deus guerreiro. \n";
	cout <<"4- Uma arvore magica. \n";
	cin >> r1;
	
	if (r1 == 1){
		cout <<"Acertou! \n";
	}
	if (r1 != 1){
		cout <<"Errou! A resposta é: 1- Um lobo Gigante. \n";
	}
	
	cout <<"Quem mata Thor no Ragnarok?: \n";
	cout <<"1- Mimir. \n";
	cout <<"2- Fennrir. \n";
	cout <<"3- Odin. \n";
	cout <<"4- Jormmüngandr. \n";
	cin >> r2;
	if (r2 == 4){
		cout <<"Acertou! \n";
	}
	if (r2 != 4){
		cout <<"Errou!A resposta é: 4- Jormmüngandr.  \n";
	}
	
	cout <<"Quais são os filhos bestiais de Loki? \n";
	cout <<"1- Fennrir, Sleipnir e Hel. \n";
	cout <<"2- Mimir, Hel e Angrboda. \n";
	cout <<"3- Fennrir, Jormmüngandr e Hel. \n";
	cout <<"4- Sigyn, Jormmüngandr e Mimir. \n";
	cin >> r3;
	if (r3 == 3){
		cout <<"Acertou! \n";
	}
	if (r3 != 3){
		cout <<"Errou!A resposta é: 3- Fennrir, Jormmüngandr e Hel. \n";
	}
	
	cout <<"Quem forjou o Mjolnir? \n";
	cout <<"1- Um dos Enheijar de Asgard. \n";
	cout <<"2- Balder. \n";
	cout <<"3- Litt. \n";
	cout <<"4- Os anões Brokk e Eitri. \n";
	cin >> r4;
	if (r4 == 4){
		cout <<"Acertou! \n";
	}
	if (r4 != 4){
		cout <<"Errou!A resposta é: 4- Os anões Brokk e Eitri.  \n";
	}
	
	cout <<"Jormmüngandr é? \n";
	cout <<"1- Uma Arvore. \n";
	cout <<"2- Uma cobra gigante. \n";
	cout <<"3- Um Anão. \n";
	cout <<"4- Um deus. \n";
	cin >> r5;

if (r5 == 2){
		cout <<"Acertou! \n";
	}
	if (r5 != 2){
		cout <<"Errou!A resposta é: 2- Uma cobra gigante. \n";
	}	
	
	cout <<"Fim de jogo!";
	
	
	return 0;
}
