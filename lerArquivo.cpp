#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char const *argv[]) {
	
	std::ifstream notas("votacao_candidato_munzona_2018_BR.csv");
	std::string linha;
	
	if(notas.is_open() == 0){
		std::cout<<"nao foi possivel abrir o arquivo"<<std::endl;
		exit(1);
	}
	int cont =0;
	int tamanho;
	std::string letra;
	while(std::getline(notas,linha,';')&&cont < 100){
	tamanho = (linha.length())-1;
		for (int i = 1; i < tamanho; i++){			
		letra = linha[i];
			if(letra=="á"||letra=="ã"||letra=="â"||letra=="à"){
				linha[i]='a';
				std::cout<<linha<<std::endl;
			}else if(letra=="ç"){
				linha[i]='c';
				std::cout<<linha<<std::endl;
			}
			
		}
		cont++;
	}


	return 0;
}