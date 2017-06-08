PandaCompact:
	g++ compacta.cpp -o PandaCompact
	$(info ****** BEM VINDO AO PANDA COMPACT ******)
	$(info  Exemplo de entrada ./PandaCompact <entrada.txt> <saida.txt>)
PandaDescompact:
	g++ descompacta.cpp -o PandaDescompact
	$(info ****** BEM VINDO AO PANDA DESCOMPACT ******)
	$(info  Exemplo de entrada ./PandaDescompact <entrada.txt> <saida.txt>)
clean:
	rm PandaCompact PandaDescompact
clean_txt:
	rm *.txt
