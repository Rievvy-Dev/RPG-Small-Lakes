#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arma{
    char nome[100];
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
//adiciona uma nova arma a lista de armas do repositorio.
//Exemplo de uso:
//add_arma_repositorio_armas(arma_1,&repositorio_armas);
void add_arma_repositorio_armas(struct Arma arma, struct RepositorioArmas* repositorio_armas){
    repositorio_armas->armas[repositorio_armas->proxima_posicao_disponivel]=arma;
    repositorio_armas->proxima_posicao_disponivel+=1;
}

void printar_armas_dispoiveis(struct RepositorioArmas repositorio){
    int i;
    printf("Armas disponiveis:\n");
    for(i=0;i<repositorio.proxima_posicao_disponivel;i++){
        printf("\t%d - %s\n",i+1,repositorio.armas[i].nome );
    }
}

struct Arma selecione_arma_por_id(int indice_arma,struct RepositorioArmas repositorio_armas){
    struct Arma arma_retorno = repositorio_armas.armas[indice_arma];
    return arma_retorno;
}

struct Arma selecione_arma_por_nome(char *nome_arma, struct RepositorioArmas repositorio_armas){
    int i;
    struct Arma arma_retorno;
    for(i=0;i<repositorio_armas.proxima_posicao_disponivel;i++){
        if(strcmp(repositorio_armas.armas[i].nome,nome_arma)==0){
            arma_retorno=repositorio_armas.armas[i];
        }
    }
    return arma_retorno;
}
//exemplo de uso: mudar_nome_arma("espada flamejante",&arma_1);
void mudar_nome_arma(char * novo_nome_arma, struct Arma *arma){
    strcpy(arma->nome, novo_nome_arma);
}
//exemplo de uso: mudar_dano_arma(50,&arma_1);
void mudar_dano_arma(int novo_dano_arma, struct Arma *arma){
    arma->dano=novo_dano_arma;
}

void remova_arma_por_id(int indice_arma,struct RepositorioArmas *repositorio_armas){
    int i, j;
    for(i=0;i<repositorio_armas->proxima_posicao_disponivel;i++){
        if(i==indice_arma){
            for(j=i;j<repositorio_armas->proxima_posicao_disponivel;j++){
                repositorio_armas->armas[j]=repositorio_armas->armas[j+1];
            }
        }
    }
    
    repositorio_armas->proxima_posicao_disponivel-=1;
}

void remova_arma_por_nome(char * nome_arma,struct RepositorioArmas *repositorio_armas){
    int i, j;
    for(i=0;i<repositorio_armas->proxima_posicao_disponivel;i++){
        if(strcmp(repositorio_armas->armas[i].nome,nome_arma)==0){
            for(j=i;j<repositorio_armas->proxima_posicao_disponivel;j++){
                repositorio_armas->armas[j]=repositorio_armas->armas[j+1];
            }
        }
    }
    repositorio_armas->proxima_posicao_disponivel-=1;
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
    struct Arma arma_4 = nova_arma("kunai",20);

    struct RepositorioArmas repositorio_armas= novo_repositorio_armas(armas);

    add_arma_repositorio_armas(arma_1,&repositorio_armas);
    add_arma_repositorio_armas(arma_2,&repositorio_armas);
    add_arma_repositorio_armas(arma_3,&repositorio_armas);
    add_arma_repositorio_armas(arma_4,&repositorio_armas);

    printf("%s\n", repositorio_armas.armas[0].nome);
    //printf("%s\n", arma_1.nome);
    printf("%d\n", repositorio_armas.proxima_posicao_disponivel);
    printar_armas_dispoiveis(repositorio_armas);

    printf("nome antigo (esperado: espada): %s\n", repositorio_armas.armas[0].nome);
    mudar_nome_arma("espada flamejante",&repositorio_armas.armas[0]);
    printf("nome novo nome(esperado: espada flamejante): %s\n", repositorio_armas.armas[0].nome);

    remova_arma_por_nome("kunai",&repositorio_armas);

    printar_armas_dispoiveis(repositorio_armas);

    return 0;
}
