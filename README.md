This program implements the lzw algorithm.

To Compile:
Compactor - make PandaCompact
Decompressor - make PandaDescompact
Clear files- make clean
Clear files txt - make clean_txt

To execute:
./PandaCompact <input.txt> <output.txt>
./PandaDescompact <input.txt> <output.txt>


Trabalho de Redes de Computadores 1 - Projeto 3 
CI058 - Redes 1
Professor: Luiz Carlos Pessoa Albini 

Alunos:
	Fernando Claudecir Erd
	Gabriela Yukari Kimura

----Algoritmos e Estruturas de dados:----------

-Linguagem C++;
-map (sorted associative container referenced by their key and bot by their absolute position)
	-Compactador: map<string,int> a busca retorna o índice(int) do elemento procurado através de seu código(string);
	-Descompactador: map<int,string> a busca retorna o cógido(string) do elemento procurado através de seu índice(int);
-map iterador elemento: busca de um elemento na map
		em caso de sucesso: retorna um iterator no elemento procurado;
		do contrário: retorna um interator para o fim da map;

-------Entrada e Compilação--------------------

Para compilar o Compactador - make PandaCompact
Para compilar o Descompactador - make PandaDescompact
Para limpar arquivos objetos - make clean
Para limpar arquivos txt - make clean_txt

Exemplo de entrada ./PandaCompact <entrada.txt> <saida.txt>
Exemplo de entrada ./PandaDescompact <entrada.txt> <saida.txt>

----Compactador&Descompactador-----------------

-Primeiro(C/D) : Criação de uma tabela do tipo map e inicializado pela inserção dos 256 símbolos da original tabela ascii;
-Compactacao: leitura do arquivo de entrada um caractere por vez;
	      cadeia de caracteres no qual são acumulados os caracteres até que a sequencia seja verificada não estar presente na tabela de símbolos e então, adicionada;
	      após adição de sequência, o processo iniciliza novamente com a cadeia de caractere atualizada para o último caractere lido.
-Descompactacao: leitura do arquivo de entrada um inteiro por vez;
		se o elemento inicial já existe na tabela, imprime ele para o arquivo de saída, junta com o próximo elemento e busca novamente até que o elemento não exista na tabela, e então, inserindo ele.

