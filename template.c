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

void printar_armas_disponiveis(struct RepositorioArmas repositorio){
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

void printar_armaduras_disponiveis(struct RepositorioArmaduras repositorio){
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
void ver_status_monstro(struct Monstros monstro){
    printf("\nStatus do Inimigo:\n");
    printf("Nome: %s\n", monstro.nome_monstro);
    printf("Vida: %d\n", monstro.vida_monstro);
    printf("Pontos dados: %d\n", monstro.pontos);
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

struct PocaoVida{
    char nome[100];
    int cura;
    int pontos;
};
struct PocaoVida nova_pocao_vida(char *nome, int cura,int pontos){
    struct PocaoVida pocao_vida;
    strcpy(pocao_vida.nome, nome);
    pocao_vida.cura = cura;
    pocao_vida.pontos=pontos;

    return pocao_vida;
};

struct RepositorioPocaoVida{
    struct PocaoVida pocoes_vida[10];
    int proxima_posicao_disponivel;
};

struct RepositorioPocaoVida novo_repositorio_pocao_vida(struct PocaoVida *pocoes_vida){
    struct RepositorioPocaoVida repositorio;
    int i;
    for(i = 0; i < sizeof(pocoes_vida)/sizeof(pocoes_vida[0]); i++){
        repositorio.pocoes_vida[i] = pocoes_vida[i];
    }
    repositorio.proxima_posicao_disponivel = 0;

    return repositorio;
}

void add_poacao_vida_repositorio_pocao_vida(struct PocaoVida pocao_vida, struct RepositorioPocaoVida *repositorio_pocao_vida){
    repositorio_pocao_vida->pocoes_vida[repositorio_pocao_vida->proxima_posicao_disponivel] = pocao_vida;
    repositorio_pocao_vida->proxima_posicao_disponivel ++;
}

void remova_pocao_vida_por_id(int indice_pocao_vida, struct RepositorioPocaoVida *repositorio_pocao_vida){
    int i, j;
    for(i = 0; i < repositorio_pocao_vida->proxima_posicao_disponivel; i++){
        if(i == indice_pocao_vida){
            for(j = i; j < repositorio_pocao_vida->proxima_posicao_disponivel; j++){
                repositorio_pocao_vida->pocoes_vida[j] = repositorio_pocao_vida->pocoes_vida[j+1];
            }
            repositorio_pocao_vida->proxima_posicao_disponivel--;
        }
    }
}

void remova_pocao_vida_por_nome(char * nome_pocao, struct RepositorioPocaoVida * repositorio_pocao_vida){
    int i, j;
    for(i = 0; i < repositorio_pocao_vida->proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_pocao_vida->pocoes_vida[i].nome, nome_pocao) == 0){
            for(j = i; j < repositorio_pocao_vida->proxima_posicao_disponivel; j++){
                repositorio_pocao_vida->pocoes_vida[j] = repositorio_pocao_vida->pocoes_vida[j+1];
            }
            repositorio_pocao_vida->proxima_posicao_disponivel--;
        }
    }

}

int quantidade_pocao_disponivel(char * pocao,struct RepositorioPocaoVida repositorio){
    int retorno,i;
    retorno=0;
    for(i=0;i<repositorio.proxima_posicao_disponivel;i++){
        if(strcmp(repositorio.pocoes_vida[i].nome,pocao)==0){
            retorno++;
        }
    }
    return retorno;
}

int possui_pocao(char * pocao,char lista_pocoes[10][50],int tamanho_lista){
    int retorno,i;
    retorno=-1;
    for(i=0;i<tamanho_lista;i++){
        if(strcmp(lista_pocoes[i],pocao)==0){
            retorno=0;
        }
    }
    return retorno;
}

void printar_pocoes_disponiveis(struct RepositorioPocaoVida repositorio){
    int i,j,cont;
    int proxima_posicao_pocoes_disponiveis=0;
    char pocoes_disponiveis[10][50];
    printf("Pocoes de Cura disponiveis:\n");
    
    for(i=0;i<repositorio.proxima_posicao_disponivel;i++){
        cont=0;
        for(j=i;j<repositorio.proxima_posicao_disponivel;j++){
            if(strcmp(repositorio.pocoes_vida[i].nome,repositorio.pocoes_vida[j].nome)==0 && cont==0 && possui_pocao(repositorio.pocoes_vida[j].nome,pocoes_disponiveis,proxima_posicao_pocoes_disponiveis)!=0){
                strcpy(pocoes_disponiveis[proxima_posicao_pocoes_disponiveis],repositorio.pocoes_vida[i].nome);
                proxima_posicao_pocoes_disponiveis++;
                cont++;               
            }
        } 
    }
    for(i=0; i<proxima_posicao_pocoes_disponiveis;i++){
        printf("\t%s  - - - -  x%d\n",pocoes_disponiveis[i],quantidade_pocao_disponivel(pocoes_disponiveis[i],repositorio));
    }
}

struct Personagem{
    char nome[100];
    int pontos_vida;
    int pontos;
    struct Arma arma;
    struct Armadura armadura;
    struct RepositorioPocaoVida repositorio_pocao_vida;
};

struct Personagem novo_personagem(char *nome, int pontos_vida,int pontos, struct Arma arma, struct Armadura armadura, struct RepositorioPocaoVida repositorio_pocao_vida){
    struct Personagem personagem;
    strcpy(personagem.nome, nome);
    personagem.pontos_vida = pontos_vida;
    personagem.pontos=pontos;
    personagem.arma =  arma;
    personagem.armadura = armadura;
    personagem.repositorio_pocao_vida=repositorio_pocao_vida;

    return personagem;
}

void ver_status_personagem(struct Personagem personagem){
    printf("\nStatus do Personagem:\n");
    printf("Nome: %s\n", personagem.nome);
    printf("Vida: %d\n", personagem.pontos_vida);
    printf("Pontos de Gloria: %d\n", personagem.pontos);
    printf("Arma: %s\n", personagem.arma.nome);
    printf("Nome da Armadura: %s -- Durabilidade: %d\n", personagem.armadura.nome, personagem.armadura.defesa);
    // Lembrar de ver a quantidade de po��es dispon�veis no personagem.
}

// Inicio Fun��es de Batalha

void batalha(struct Personagem personagem, struct Monstros monstro){
    int dano_recebido, vida_atual_monstro;

    while(vida_atual_monstro > 0 && personagem.pontos_vida > 0){

        dano_recebido = personagem.armadura.defesa - monstro.dano;
        vida_atual_monstro = monstro.vida_monstro - personagem.arma.dano;

            if(dano_recebido > 0){
                personagem.armadura.defesa = dano_recebido;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_monstro(monstro);
                ver_status_personagem(personagem);
            }
            if(dano_recebido == 0){
                personagem.armadura.defesa = dano_recebido;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_monstro(monstro);
                ver_status_personagem(personagem);
                printf("Sua Armadura Foi Quebrada!\n");
            }
            if(dano_recebido < 0){
                personagem.armadura.defesa = 0;
                personagem.pontos_vida = personagem.pontos_vida + dano_recebido;

                if(personagem.pontos_vida <= 0){
                    printf("\nGAME OVER\n");
                    exit(0);
                }else{
                    printf("\nO inimigo foi derrotado!\n");
                    personagem.pontos = personagem.pontos + monstro.pontos;
                    ver_status_personagem(personagem);
                }
            }
        }
        if(personagem.pontos_vida > 0 && monstro.vida_monstro <= 0){
            printf("Personagem Ganhou");
        }
}

/*void batalha_ataque(struct Personagem personagem, struct Monstros monstro){
    int vida_atual_do_monstro;

    vida_atual_do_monstro = monstro.vida_monstro - personagem.arma.dano;

    if(vida_atual_do_monstro > 0){
        monstro.vida_monstro = vida_atual_do_monstro;
        ver_status_monstro(monstro);
    }
    if(vida_atual_do_monstro == 0){

    }
    if(vida_atual_do_monstro <= 0){

    }
}*/

// Fim Fun��es de Batalha


void print_mago(){
    //use o site https://www.topster.pt/gerador-ascii/ para gerar as imagens
    printf("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW##WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW****WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW@******@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWWW@##@WWWWWWWWWWWWWWWWWWWWWWWW@********@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWW=++++++++#WWWWWWWWWWWWWWWWWWWW@**********@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WW@++-----:++++WWWWWWWWWWWWWWWWWW@************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WW*+:------++++=WWWWWWWWWWWWWWWW@**************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WW=++:----:++++#WWWWWWWWWWWWWWW@****************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWW+++++++++++*WWWWWWWWWWWWWWW@******************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWW#++++++++@WWWWWWWWWWWWWWW@********************@WWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWW*++++++=WWWWWWWWWWWWWWW@**********************@WWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWW#++++++@WWWWWWWWWWWWWWW************************WWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW*++++=WWWWWWWWWWWWWWW**************************WWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWWWWWW****************************WWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWWWWW******************************WWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWWWW=******************************=WWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWWW=********************************=WWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWW@#=****************************************=#@WWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@#=****************************************************=#WWWWWWWWWWW\n");

    printf("WWWWWW#++++*********=+------:::::::::::::::::::::::::-----:+**********=WWWWWWWW\n");

    printf("WWWWWW#++++*=#@@@@#::---:::::####::::::::::::::####:::::---::#@@@@#==***=WWWWWW\n");

    printf("WWWWWW#++++#@@@@@@+:----::::+####*::::::::::::*####+::::----:+@@@@@@@@@@#@WWWWW\n");

    printf("WWWWWW#++++#@@@@@@+:----:::::####+::::::::::::+####:::::----:+@@@@@@@@@@WWWWWWW\n");

    printf("WWWWWW#++++@@@@@@@#:----::::::::::::+******+::::::::::::----:#@@@@@@WWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWW@:---:::::::::::::+++++::::::::::::::---:@WWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWW#---:::::----------------------:::::---#WWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWW@:----------------+:------------:---:@WWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWW+-------:::+************+:::-------+WWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWW#------:::::::--------:::::::------#WWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWWW*--------------------------------*WWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWWW#++++@WWWWWWWWWWW+--------------------------------+WWWWWWWWWWWWWWWWWWWWWW\n");

    printf("WWWWW#*::::=@WWWWW@#===+--------------------------------+===#@WWWWWWWWWWWWWWWWW\n");

    printf("WWW+::::::::::**********:------------------------------:*********@WWWWWWWWWWWWW\n");

    printf("WW*::::::::::::+*********------------------------------************#WWWWWWWWWWW\n");

    printf("WW*::::::::::::+*********+----------------------------+**************@WWWWWWWWW\n");

    printf("WW#::::::::::::***********+--------------------------+****************@WWWWWWWW\n");

    printf("WW=+::::::::::***************+--------------------+*******************=WWWWWWWW\n");

    printf("WW=**+::::::+*****************:------------------:*********************WWWWWWWW\n");

    printf("WW=***+++++***********************==:------:==*************************WWWWWWWW\n");

    printf("WW=***+++++*************************========***************************WWWWWWWW\n");

    printf("(c) 2022 topster.de############################################################\n");
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
    struct Armadura armadura_1 = nova_armadura("armadura de couro",20,30);
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
    struct Monstros monstro_1 = novo_monstro("Orc Albino", 50, 60, 10);
    struct Monstros monstro_2 = novo_monstro("Hidra", 150, 60, 20);
    struct Monstros monstro_3 = novo_monstro("Gorgona", 150, 60, 30);
    struct Monstros monstro_4 = novo_monstro("Dragao", 150, 60, 500);


    struct RepositorioMonstros repositorio_monstros = novo_repositorio_monstros(monstros);

    add_monstro_repositorio_monstros(monstro_1, &repositorio_monstros);

    // Fim Monstros
    struct PocaoVida pocoes[10];

    struct PocaoVida p1=nova_pocao_vida("Cura Grande",50,80);
    struct PocaoVida p2=nova_pocao_vida("Cura Grande",50,80);
    struct PocaoVida p3=nova_pocao_vida("Cura Media",25,40);
    struct PocaoVida p4=nova_pocao_vida("Cura Grande",50,80);
    struct PocaoVida p5=nova_pocao_vida("Cura Media",25,40);
    struct PocaoVida p6=nova_pocao_vida("Cura Pequena",12,20);

    struct RepositorioPocaoVida repositorio_pocao_vida=novo_repositorio_pocao_vida(pocoes);

    add_poacao_vida_repositorio_pocao_vida(p1,&repositorio_pocao_vida);
    add_poacao_vida_repositorio_pocao_vida(p2,&repositorio_pocao_vida);
    add_poacao_vida_repositorio_pocao_vida(p3,&repositorio_pocao_vida);
    add_poacao_vida_repositorio_pocao_vida(p4,&repositorio_pocao_vida);
    add_poacao_vida_repositorio_pocao_vida(p5,&repositorio_pocao_vida);
    add_poacao_vida_repositorio_pocao_vida(p6,&repositorio_pocao_vida);

    struct Personagem personagem = novo_personagem (
                            "Cleiton",
                            150,
                            0,
                            selecione_arma_por_nome("kunai",repositorio_armas),
                            selecione_armadura_por_nome("armadura de couro",repositorio_armaduras),
                            repositorio_pocao_vida);

    printf("Nome do personagem: %s\n",personagem.nome);
    printf("Pontos de vida do personagem: %d\n",personagem.pontos_vida);
    printf("Pontuacao atual do personagem: %d\n",personagem.pontos);
    printf("Arma do personagem: %s\n",personagem.arma.nome);
    printf("Armadura do personagem: %s\n",personagem.armadura.nome);

    
    printf("Primeiro monstro: %s\n", monstro_1.nome_monstro);
    printf("Vida do monstro: %d\n", monstro_1.vida_monstro);
    print_mago();
    
    
    
    //printar_pocoes_disponiveis(repositorio_pocao_vida);
    //remova_pocao_vida_por_nome("Cura Pequena",&repositorio_pocao_vida);  
    printar_pocoes_disponiveis(repositorio_pocao_vida);  
    //print_mago();

    printf("Primeiro monstro: %s\n", monstro_1.nome_monstro);
    printf("Vida do monstro: %d\n", monstro_1.vida_monstro);
    printf("Dano do monstro: %d\n",monstro_1.dano);


    batalha(personagem, monstro_1);




    //printar_pocoes_disponiveis(repositorio_pocao_vida);
    remova_pocao_vida_por_nome("Cura Pequena",&repositorio_pocao_vida);
    //printar_pocoes_disponiveis(repositorio_pocao_vida);
    printar_armaduras_disponiveis(repositorio_armaduras);
    //printf("\n");
    //printf("Batalha 1:\n");
    //batalha(personagem, monstro_1);
    //printf("\n");
    //printf("Batalha 2:\n");
    //batalha(personagem, monstro_2);
    //printf("\n");
    //printf("Batalha 3:\n");
    //batalha(personagem, monstro_3);
    //printf("\n");
    //printf("Batalha 4:\n");
    //batalha_defesa(personagem, monstro_4);
    //printf("\n");

    return 0;
}
