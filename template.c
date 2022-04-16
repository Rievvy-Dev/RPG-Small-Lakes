#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arma{
    char nome[100];
    int dano;
    int pontos_preco;
};

struct Arma nova_arma(char *nome, int dano, int pontos_preco){
    struct Arma arma;
    strcpy(arma.nome, nome);
    arma.dano =  dano;
    arma.pontos_preco = pontos_preco;

    return arma;
}

struct RepositorioArmas{
    struct Arma armas[10];
    int proxima_posicao_disponivel;
};

struct RepositorioArmas novo_repositorio_armas(struct Arma *armas){
    struct RepositorioArmas repositorio;
    int i;
    for(i = 0; i < sizeof(armas)/sizeof(armas[0]); i++){
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
    repositorio_armas->proxima_posicao_disponivel += 1;
}

void printar_armas_dispoiveis(struct RepositorioArmas repositorio){
    int i;
    printf("Armas disponiveis:\n");
    for(i = 0; i < repositorio.proxima_posicao_disponivel; i++){
        printf("\t%d - %s\n", i+1, repositorio.armas[i].nome);
    }
}

struct Arma selecione_arma_por_id(int indice_arma, struct RepositorioArmas repositorio_armas){
    struct Arma arma_retorno = repositorio_armas.armas[indice_arma];
    return arma_retorno;
}

struct Arma selecione_arma_por_nome(char *nome_arma, struct RepositorioArmas repositorio_armas){
    int i;
    struct Arma arma_retorno;
    for(i = 0; i < repositorio_armas.proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_armas.armas[i].nome,nome_arma) == 0){
            arma_retorno = repositorio_armas.armas[i];
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
    arma->dano = novo_dano_arma;
}

void remova_arma_por_id(int indice_arma, struct RepositorioArmas *repositorio_armas){
    int i, j;
    for(i = 0; i < repositorio_armas->proxima_posicao_disponivel; i++){
        if(i == indice_arma){
            for(j = i; j < repositorio_armas->proxima_posicao_disponivel; j++){
                repositorio_armas->armas[j] = repositorio_armas->armas[j+1];
            }
            repositorio_armas->proxima_posicao_disponivel--;
        }
    }
}

void remova_arma_por_nome(char * nome_arma, struct RepositorioArmas *repositorio_armas){
    int i, j;
    for(i = 0; i < repositorio_armas->proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_armas->armas[i].nome,nome_arma) == 0){
            for(j = i; j < repositorio_armas->proxima_posicao_disponivel; j++){
                repositorio_armas->armas[j] = repositorio_armas->armas[j+1];
            }
            repositorio_armas->proxima_posicao_disponivel--;
        }
    }

}

// Inicio CRUD -> "Armaduras"

struct Armadura{
    char nome[100];
    int defesa;
    int pontos_preco;
};

struct Armadura nova_armadura(char *nome, int defesa, int pontos_preco){
    struct Armadura armadura;
    strcpy(armadura.nome, nome);
    armadura.defesa = defesa;
    armadura.pontos_preco = pontos_preco;

    return armadura;
}

struct RepositorioArmaduras{
    struct Armadura armaduras[10];
    int proxima_posicao_disponivel;
};

struct RepositorioArmaduras novo_repositorio_armaduras(struct Armadura *armaduras){
    struct RepositorioArmaduras repositorio;
    int i;
    for(i = 0; i < sizeof(armaduras)/sizeof(armaduras[0]); i++){
        repositorio.armaduras[i] = armaduras[i];
    }
    repositorio.proxima_posicao_disponivel = 0;

    return repositorio;
}
//adiciona uma nova armadura a lista de armaduras do repositorio.
//Exemplo de uso:
//add_armadura_repositorio_armaduras(armadura_1,&repositorio_armaduras);
void add_armadura_repositorio_armaduras(struct Armadura armadura, struct RepositorioArmaduras* repositorio_armaduras){
    repositorio_armaduras->armaduras[repositorio_armaduras->proxima_posicao_disponivel] = armadura;
    repositorio_armaduras->proxima_posicao_disponivel += 1;
}

void printar_armaduras_dispoiveis(struct RepositorioArmaduras repositorio){
    int i;
    printf("Armaduras disponiveis:\n");
    for(i = 0; i < repositorio.proxima_posicao_disponivel; i++){
        printf("\t%d - %s\n", i+1, repositorio.armaduras[i].nome);
    }
}

struct Armadura selecione_armadura_por_id(int indice_armadura, struct RepositorioArmaduras repositorio_armaduras){
    struct Armadura armadura_retorno = repositorio_armaduras.armaduras[indice_armadura];
    return armadura_retorno;
}

struct Armadura selecione_armadura_por_nome(char *nome_armadura, struct RepositorioArmaduras repositorio_armaduras){
    int i;
    struct Armadura armadura_retorno;
    for(i = 0; i < repositorio_armaduras.proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_armaduras.armaduras[i].nome,nome_armadura) == 0){
            armadura_retorno = repositorio_armaduras.armaduras[i];
        }
    }
    return armadura_retorno;
}

//exemplo de uso: mudar_nome_armadura("espada flamejante",&armadura_1);

void mudar_nome_armadura(char * novo_nome_armadura, struct Armadura *armadura){
    strcpy(armadura->nome, novo_nome_armadura);
}

//exemplo de uso: mudar_def_armadura(50,&armadura_1);

void mudar_def_armadura(int nova_def_armadura, struct Armadura *armadura){
    armadura->defesa = nova_def_armadura;
}

void remova_armadura_por_id(int indice_armadura, struct RepositorioArmaduras *repositorio_armaduras){
    int i, j;
    for(i = 0; i < repositorio_armaduras->proxima_posicao_disponivel; i++){
        if(i == indice_armadura){
            for(j = i; j < repositorio_armaduras->proxima_posicao_disponivel; j++){
                repositorio_armaduras->armaduras[j] = repositorio_armaduras->armaduras[j+1];
            }
            repositorio_armaduras->proxima_posicao_disponivel--;
        }
    }
}

void remova_armadura_por_nome(char *nome_armadura, struct RepositorioArmaduras *repositorio_armaduras){
    int i, j;
    for(i = 0; i < repositorio_armaduras->proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_armaduras->armaduras[i].nome, nome_armadura) == 0){
            for(j = i; j < repositorio_armaduras->proxima_posicao_disponivel; j++){
                repositorio_armaduras->armaduras[j] = repositorio_armaduras->armaduras[j+1];
            }
            repositorio_armaduras->proxima_posicao_disponivel--;
        }
    }

}

// Inicia CRUD -> "Monstros"

struct Monstros{
    char nome_monstro[100];
    int vida_monstro;
    int pontos;
    int dano;
};

struct Monstros novo_monstro(char *nome_monstro, int vida_monstro, int pontos, int dano){
    struct Monstros monstros;
    strcpy(monstros.nome_monstro, nome_monstro);
    monstros.vida_monstro = vida_monstro;
    monstros.pontos = pontos;
    monstros.dano = dano;

    return monstros;
}

struct RepositorioMonstros{
    struct Monstros monstros[10];
    int proxima_posicao_disponivel;
};

struct RepositorioMonstros novo_repositorio_monstros(struct Monstros *monstros){
    struct RepositorioMonstros repositorio;
    int i;
    for(i = 0; i < sizeof(monstros)/sizeof(monstros[0]); i++){
        repositorio.monstros[i] = monstros[i];
    }
    repositorio.proxima_posicao_disponivel = 0;

    return repositorio;
}

void add_monstro_repositorio_monstros(struct Monstros monstros, struct RepositorioMonstros *repositorio_monstros){
    repositorio_monstros->monstros[repositorio_monstros->proxima_posicao_disponivel] = monstros;
    repositorio_monstros->proxima_posicao_disponivel += 1;
}

// Finaliza CRUD -> "Monstros"

struct Personagem{
    char nome[100];
    int pontos_vida;
    int pontos;
    struct Arma arma;
    struct Armadura armadura;
};

struct Personagem novo_personagem(char *nome, int pontos_vida,int pontos, struct Arma arma, struct Armadura armadura){
    struct Personagem personagem;
    strcpy(personagem.nome, nome);
    personagem.pontos_vida = pontos_vida;
    personagem.pontos=pontos;
    personagem.arma =  arma;
    personagem.armadura = armadura;

    return personagem;
}

int main(){
    struct Arma armas[10];
    struct Arma arma_1 = nova_arma("espada",50,25);
    struct Arma arma_2 = nova_arma("machado",65,30);
    struct Arma arma_3 = nova_arma("muchaco",30,20);
    struct Arma arma_4 = nova_arma("kunai",20,15);

    struct RepositorioArmas repositorio_armas= novo_repositorio_armas(armas);

    add_arma_repositorio_armas(arma_1,&repositorio_armas);
    add_arma_repositorio_armas(arma_2,&repositorio_armas);
    add_arma_repositorio_armas(arma_3,&repositorio_armas);
    add_arma_repositorio_armas(arma_4,&repositorio_armas);

    struct Armadura armaduras[10];
    struct Armadura armadura_1 = nova_armadura("armadura de couro",25,30);
    struct Armadura armadura_2 = nova_armadura("escama de peixe",30,45);
    struct Armadura armadura_3 = nova_armadura("armadura de couro curtido",30,40);
    struct Armadura armadura_4 = nova_armadura("Pele de dragao",80,150);

    struct RepositorioArmaduras repositorio_armaduras= novo_repositorio_armaduras(armaduras);

    add_armadura_repositorio_armaduras(armadura_1,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_2,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_3,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_4,&repositorio_armaduras);

    // Inicio Monstros

    struct Monstros monstros[10];
    struct Monstros monstro_1 = novo_monstro("Orc Albino", 150, 60, 500);

    struct RepositorioMonstros repositorio_monstros = novo_repositorio_monstros(monstros);

    add_monstro_repositorio_monstros(monstro_1, &repositorio_monstros);

    // Fim Monstros

    struct Personagem personagem = novo_personagem (
                            "Cleiton",
                            150,
                            0,
                            selecione_arma_por_nome("kunai",repositorio_armas),
                            selecione_armadura_por_nome("armadura de couro",repositorio_armaduras));

    printf("Nome do personagem: %s\n",personagem.nome);
    printf("Pontos de vida do personagem: %d\n",personagem.pontos_vida);
    printf("Pontuacao atual do personagem: %d\n",personagem.pontos);
    printf("Arma do personagem: %s\n",personagem.arma.nome);
    printf("Armadura do personagem: %s\n",personagem.armadura.nome);
    printf("Primeiro monstro: %s\n", monstro_1.nome_monstro);
    printf("Vida do monstro: %d", monstro_1.vida_monstro);

    return 0;
}
