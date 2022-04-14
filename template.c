#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arma{
    char nome[50];
    int dano;
};
struct Arma nova_arma(char *nome, int dano){
    struct Arma arma;
    strcpy(arma.nome, nome);
    arma.dano =  dano;

    return arma;
}

struct RepositorioArmas{
    struct Arma armas[10];
    int proxima_posicao_disponivel;
};

struct RepositorioArmas novo_repositorio_armas(struct Arma *armas){
    struct RepositorioArmas repositorio;
    //repositorio.armas=armas;
    int i;
    for(i=0; i<sizeof(armas)/sizeof(armas[0]); i++){
        repositorio.armas[i]=armas[i];
    }
    repositorio.proxima_posicao_disponivel=0;

    return repositorio;
}

void add_arma_repositorio_armas(struct Arma arma, struct RepositorioArmas* repositorioArmas){
    repositorioArmas->armas[repositorioArmas->proxima_posicao_disponivel]=arma;
    repositorioArmas->proxima_posicao_disponivel+=1;
}

void printar_armas_dispoiveis(struct RepositorioArmas repositorio){
    int i;
    printf("Armas disponiveis:\n");
    for(i=0;i<repositorio.proxima_posicao_disponivel;i++){
        printf("\t%d - %s\n",i+1,repositorio.armas[i].nome );
    }
}

struct Armadura{
    char nome[100];
    int defesa;
};

struct Armadura nova_armadura(char *nome, int defesa){
    struct Armadura armadura;
    strcpy(armadura.nome, nome);
    armadura.defesa = defesa;

    return armadura;
}


struct Personagem{
    char nome[100];
    int pontos_vida;
    struct Arma arma;
    struct Armadura armadura;
};

struct Personagem novo_personagem(char *nome, int pontos_vida, struct Arma arma, struct Armadura armadura){
    struct Personagem personagem;
    strcpy(personagem.nome, nome);
    personagem.pontos_vida = pontos_vida;
    personagem.arma =  arma;
    personagem.armadura = armadura;

    return personagem;
}

int main(){
    struct Arma armas[10];
    struct Arma arma_1 = nova_arma("espada",50);
    struct Arma arma_2 = nova_arma("machado",65);
    struct Arma arma_3 = nova_arma("muchaco",30);

    struct RepositorioArmas repositorio_armas= novo_repositorio_armas(armas);

    add_arma_repositorio_armas(arma_1,&repositorio_armas);
    add_arma_repositorio_armas(arma_2,&repositorio_armas);
    add_arma_repositorio_armas(arma_3,&repositorio_armas);

    printf("%s\n", repositorio_armas.armas[0].nome);
    //printf("%s\n", arma_1.nome);
    printf("%d\n", repositorio_armas.proxima_posicao_disponivel);
    printar_armas_dispoiveis(repositorio_armas);







    return 0;
}
