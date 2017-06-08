#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
	ifstream  Entrada;
	ofstream Saida;
	map<int,string> Tabela; //Tabela ASCII
    
	if(argc != 3){
        printf("ERRO, Entrada inválida!\n");
        return (1);
    }
	
    //abrindo arquivos
 
    Entrada.open(argv[1]);
    Saida.open(argv[2]);


    int i, tamanhoAscii = 256, code;
    char aux;
	string previous_string;
    
	//Coloca 255 strings inicias na tabela
    for(i =0;i<256;i++){
		Tabela[i] = string(1,i);
    }

	while(Entrada >> code) {		
		if (Tabela.find(code) == Tabela.end())
			Tabela[code] = previous_string + previous_string[0];
		Saida << Tabela[code];
		if (previous_string.size()) 
			Tabela[tamanhoAscii++] = previous_string + Tabela[code][0];
		previous_string = Tabela[code];
		
	}

    return 0;
}
