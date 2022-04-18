#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TabelaHash.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Hash *ha = criaHash(1427);
	
	struct aluno al = {1, "Diogo", 10, 9, 8};
	
	if (insereHash_SemColisao(ha, al)) {
		printf("Aluno introduzido com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a introduzir o aluno.\n");
	}
	
	struct alunp *al1;
	if (buscaHash_SemColisao(ha, 1, &al1)) {
		printf("Aluno encontrado com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a encontrar o aluno.\n");
	}
	
	al.matricula = 2;
	if (insereHash_EnderAberto(ha, al)) {
		printf("Aluno introduzido com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a introduzir o aluno.\n");
	}
	
	if (buscaHash_EnderAberto(ha, 2, &al1)) {
		printf("Aluno encontrado com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a encontrar o aluno.\n");
	}
	
	libertaHash(ha);
	
	return 0;
}
