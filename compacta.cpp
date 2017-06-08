#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


using namespace std;

int main(int argc, char *argv[]){

	if(argc != 3){
        	printf("ERRO, Entrada inválida!\n");
        	return (1);
	}

	FILE *file_in,*file_out;

	file_in = fopen(argv[1],"r");
	file_out = fopen(argv[2],"w+");

	if((!file_in)||(!file_out)){
		fprintf(stderr,"Erro na abertura de arquivo\n");
		return (1);	
	}

	map<string,int> tabela;
	map<string,int>:: iterator elemento;

	int tamanhoAscii = 256;
	int i;
	char k,aux2;
	string cv,aux,c,buffer;

    	for(i =0;i<256;i++){
      		aux2 = (char)i;
		buffer = string(1,aux2);
        	tabela.insert(pair<string,int>(buffer,i));
  	}


	k = fgetc(file_in);
	cv = string(1,k);
	c = cv;
	while(!feof(file_in)){
	  	k=fgetc(file_in);
		cv = string(1,k);
		aux = c+k; //[c.K]
		elemento = tabela.find(aux);
		if(elemento!=tabela.end()){
			c = aux;	
		}else{
			tabela.insert(pair<string,int>(aux,tamanhoAscii));
			elemento = tabela.find(c);
			fprintf(file_out,"%d ",elemento->second);
			c=cv;
			tamanhoAscii++;
		}
	}
	
}
