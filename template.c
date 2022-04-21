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
    printf("\n\tStatus do Inimigo:\n");
    printf("\tNome: %s\n", monstro.nome_monstro);
    printf("\tVida: %d\n", monstro.vida_monstro);
    printf("\tDano por Ataque: %d\n", monstro.dano);
    printf("\tPontuacao do Inimigo: %d\n", monstro.pontos);
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
    printf("\n\tStatus do Personagem:\n");
    printf("\tNome: %s\n", personagem.nome);
    printf("\tVida: %d\n", personagem.pontos_vida);
    printf("\tPontos de Gloria: %d\n", personagem.pontos);
    printf("\tArma: %s\n", personagem.arma.nome);
    printf("\tNome da Armadura: %s -- Durabilidade: %d\n", personagem.armadura.nome, personagem.armadura.defesa);
    //printf("Pocoes Disponiveis: %d", )
}

// Inicio Funções de Batalha

void batalha(struct Personagem *personagem, struct Monstros monstro){
    int durabilidade, vida_atual_monstro, vida_atual_personagem;

        ver_status_personagem(*personagem);
        ver_status_monstro(monstro);

    do{

        durabilidade = personagem->armadura.defesa - monstro.dano;
        vida_atual_personagem = personagem->pontos_vida + durabilidade;
        vida_atual_monstro = monstro.vida_monstro - personagem->arma.dano;

        //if(vida_atual_monstro > 0){
            if(durabilidade > 0){
                personagem->armadura.defesa = durabilidade;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
            }
            if(durabilidade == 0){
                personagem->armadura.defesa = 0;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_personagem(*personagem);
                printf("\n\tSua Armadura Foi Quebrada!\n");
                ver_status_monstro(monstro);
            }
            if(durabilidade < 0){
                personagem->armadura.defesa = 0;
                personagem->pontos_vida = vida_atual_personagem;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
            }
            if(personagem->pontos_vida <= 0 && monstro.vida_monstro > 0){
                printf("\n\tSEU PERSONAGEM FOI DERROTADO, INICIE UM NOVO JOGO\n");
                exit(0);
            }
        //}
            if(vida_atual_monstro <= 0 && vida_atual_personagem > 0){
                personagem->pontos = personagem->pontos + monstro.pontos;
                monstro.vida_monstro = 0;
                monstro.pontos = 0;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
                printf("\n\tO inimigo foi derrotado!\n");
            }
            if(vida_atual_monstro <= 0 && vida_atual_personagem <= 0){
                personagem->pontos_vida = 0;
                ver_status_personagem(*personagem);
                printf("\n\tVOCE LUTOU BRAVAMENTE E MATOU O MONSTRO, NO ENTANTO NAO SOBREVIVEU PARA CONTAR A HISTORIA.\n\tINICIE UM NOVO JOGO...\n");
                exit(0);
            }
        }while(vida_atual_monstro > 0 && personagem->pontos_vida > 0);
}

void boss_fight(struct Personagem *personagem, struct Monstros monstro){
    int durabilidade, vida_atual_monstro, vida_atual_personagem;

        ver_status_personagem(*personagem);
        ver_status_monstro(monstro);

    do{

        durabilidade = personagem->armadura.defesa - monstro.dano;
        vida_atual_personagem = personagem->pontos_vida + durabilidade;
        vida_atual_monstro = monstro.vida_monstro - personagem->arma.dano;

        //if(vida_atual_monstro > 0){
            if(durabilidade > 0){
                personagem->armadura.defesa = durabilidade;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
            }
            if(durabilidade == 0){
                personagem->armadura.defesa = 0;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_personagem(*personagem);
                printf("\n\tSua Armadura Foi Quebrada!\n");
                ver_status_monstro(monstro);
            }
            if(durabilidade < 0){
                personagem->armadura.defesa = 0;
                personagem->pontos_vida = vida_atual_personagem;
                monstro.vida_monstro = vida_atual_monstro;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
            }
            if(personagem->pontos_vida <= 0 && monstro.vida_monstro > 0){
                printf("\n\tSEU PERSONAGEM FOI DERROTADO, INICIE UM NOVO JOGO\n");
                exit(0);
            }
        //}
            if(vida_atual_monstro <= 0 && vida_atual_personagem > 0){
                personagem->pontos = personagem->pontos + monstro.pontos;
                monstro.vida_monstro = 0;
                monstro.pontos = 0;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
                printf("\n");
                printf("\tAquele reino que por muito tempo foi pacifico e que derrepente havia sido devastado por todo tipo de criatura,\n");
                printf("\testava seguro novamente. Em meio a tanto caos, um jovem guerreiro com um destino travado a dezenas de geracoes,\n");
                printf("\tassumiu toda a responsabilidade de salvar o lugar que ama, ninguem conhecia sua verdadeira historia ele foi\n");
                printf("\tapenas sabiam que ele era um heroi e que poderiam contar com ele sempre que corressem perigo, infelizmente \n");
                printf("\tas grandes batalhas travadas deixaram lacunas em sua alma, o vazio nao era algo para se brincar, e ate para \n");
                printf("\texaustivo e tentador, os espacos em branco na sua alma nunca mais poderiam ser preenchidos, suas memorias nunca\n");
                printf("\tmais voltariam por completo, por sorte o portal tinha se fechado completamente e o tranquilo Vale Folks de\n");
                printf("\tSmallLakes podia voltar a sua rotina normal e pacifica, nao existiam mais perigos para se preocupar\n");
                printf("\tpelo menos era o que parecia...\n");
                printf("\n\tPARABENS POR COMPLETAR O JOGO!! OBRIGADO POR JOGAR!!\n");
                printf("\n\tDirected by, Thiago Almeida and J.B. Neto");
                printf("\n");
                exit(0);
            }
            if(vida_atual_monstro <= 0 && vida_atual_personagem <= 0){
                personagem->pontos_vida = 0;
                ver_status_personagem(*personagem);
                printf("\n\tVOCE LUTOU BRAVAMENTE E MATOU O MONSTRO, NO ENTANTO NAO SOBREVIVEU PARA CONTAR A HISTORIA.\n\tINICIE UM NOVO JOGO...\n");
                exit(0);
            }
        }while(vida_atual_monstro > 0 && personagem->pontos_vida > 0);
}

// Fim Funções de Batalha


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

void print_orc(){

printf("\t----------------++++++:::::+***+******+++++++::--.-:::+:-----------------------\n");

printf("\t--------------:++++++++::++**=**==****=*++*+++::::-:+**:-----------------------\n");

printf("\t--------------++++*****+++*=======@@@@@#@@@=*+*++++==***:----------------------\n");

printf("\t-------------++++***+++*++++===#@@@@@@@@@@#*+**==++#==**:----------------------\n");

printf("\t::::::::::::++*******+++*+++*#@@@@@@@@@@#==*+**=#=++#=*=+----------------------\n");

printf("\t:::::::::*###*++++***+**++=#@@@@@@@#=#@@###======#==#===-----------------------\n");

printf("\t:::::::::*=##@@@#@##==**=@@@@@@@@######=*==######@@==#*+*----------------------\n");

printf("\t----------:+*#@@@@@@@####@@##==###========##@#####@@##=*:----------------------\n");

printf("\t:::::::::--::+*==####=***===*=####=====###########@@#=*+:------------------::--\n");

printf("\t:::::::::::::+**********+==#@##==#####=*::###@#####@@#==+:-----------------:+::\n");

printf("\t:::::::::::::++****=#=#==#@##==*=#####***+:+#@#####@@@@#=*:-.--------------:*++\n");

printf("\t+++::::::::::+****=**=##@###=**====##@===*+::=#####@@@@##=*:-.-------------:*=*\n");

printf("\t::::---------:*******==#####====#@@@@@#=#=**+*=###@@@@@###=+::-------------:+==\n");

printf("\t-------------:**:+=====#####=#@@@#@#=#@=##===*=##==@@@@@###=+::-------------+*=\n");

printf("\t-----------::+***+:+####==##@@#@###==******=========#@@@@@##*+++:-----------:*=\n");

printf("\t-------------+*==*+++=##@@@#===******==#=========*==#@@@@@@#=*=*+::---:::::::*=\n");

printf("\t::::::::::::::+===***===#=***==*===***==####==##===##@@@@@@####=*+:::---:++***=\n");

printf("\t--::+++++::::+*=####=#==#############====##########@W@@@@@@@###==**+::-----+===\n");

printf("\t:++++++:::::+*===#==####@@@@@@@#######==##@@@@###@@WWWW@@@W@####==***+::-----:=\n");

printf("\t::::::::---:+*=#==##@@@@@@@###=====#####@@@@@@@##@WWWWWWWW@########==**+::::+*=\n");

printf("\t------------::*===###@###===*****===#=##@@@@@@WWW@WWWWWWW@##@@@#######=*****===\n");

printf("\t:::::::::::::***==#####==#==#==#=##@@@@@@@@@@WWWWWWWWWWW@@@@@@@#########==#====\n");

}

void print_hidra(){
printf("\t...............................................................................\n");

printf("\t........................-......................................................\n");

printf("\t..............+-.....-==.......+*..............................................\n");

printf("\t..............*=....=#=.......:##:......-:+*========*+:-.......................\n");

printf("\t..............:@=.-###=-:**:-*####=#@#####################@#*:.................\n");

printf("\t...............*#################################################:.............\n");

printf("\t................*###################################################+..........\n");

printf("\t...............:####*--###############################################=-.......\n");

printf("\t.............+######=###############################=+:-...........-:+=##:.....\n");

printf("\t...........+###########################*+--...........-:+**=#####=*+:-.........\n");

printf("\t..........:######*:-.....=##########=...........-*######################*:.....\n");

printf("\t..............:=*.......+######=-...........:=######################*-...:*##-.\n");

printf("\t.......................+####=-...........:########################:..:#######-.\n");

printf("\t...............-*...-*####+............*########################:.-=#########-.\n");

printf("\t................=#####=:.............+########################=..=###########-.\n");

printf("\t.................+*=*:-............-##################=+:-.....:#############-.\n");

printf("\t......................:*+.........+###############+...........+##############-.\n");

printf("\t..................:###-.........-##############*.............:#############+...\n");

printf("\t................:####........-###############=..............-############+.....\n");

printf("\t..............-=########*..-*###############:...............*###########:......\n");

printf("\t............:#############################=................-###########*.......\n");

printf("\t...+@#=*=#######*-.:#####################-.................+##########@-.......\n");

printf("\t.....-#################################:...................###########=........\n");

printf("\t.....-*#############################=-.........:..........*###########:........\n");

printf("\t........:#+......---##############:.....:*=+..*+.........+###########=.........\n");

printf("\t..........-.......-###########=:....-*##=....*=.........=############-.........\n");

printf("\t........:-.......+############*....=###*...+##-..+#-..*#############:..........\n");

printf("\t........=#+::+=#######*:......-..+######=###=-.:###*###############:...........\n");

printf("\t........*#######=+:............*##################################-............\n");

printf("\t...........-:+-............:=#######+-*#########################+..............\n");

printf("\t.......................-=#########=::=########################*................\n");

printf("\t......................-=####################################:..................\n");

printf("\t.........................-##=+:++*==####################=:.....................\n");

printf("\t...........................:*.........=###########=*:..........................\n");

printf("\t..........................-.........-############:.............................\n");

printf("\t..........................*:......:##########===#@+............................\n");

printf("\t..........................=############*-......................................\n");

printf("\t..........................:#####*:-............................................\n");

printf("\t...............................................................................\n");

printf("\t...............................................................................\n");

}

void print_quimera(){
printf("\t.................................................-+**==*:......................\n");

printf("\t...............................................+****=*+***==:..................\n");

printf("\t..............................................**=*****====***::+...............\n");

printf("\t..............................................:+*==@@@#*@+***#::+-.............\n");

printf("\t...............................................-.:+:*==+=**=+#::-+.............\n");

printf("\t..........................--........+-............-+:::+**+=+=:+-+-............\n");

printf("\t.....................:**:+::+****+++-.............::-:::=:*****--*.............\n");

printf("\t...................-*++**+-..................+:..-+--:+#-+=*=::--+.............\n");

printf("\t..................-*++*+....+***:*:+:+**++++++-..::--:=:*=*=::--*..............\n");

printf("\t..................**++#*===:*:+::+++++++++::-....::-**:=***+---*-..............\n");

printf("\t................-*+++*@##=:**+##==:..............:+++***=:::--=................\n");

printf("\t...............*=###==##=*++=#====*-.............*:*=**+:---=:.................\n");

printf("\t..............==*#*==#=====#@#==##==*...........=+:=*---:**-...................\n");

printf("\t............-=*=***#######========*=-..........-*-**-++-.......................\n");

printf("\t..........:****==****=====#**###=####=-........-*==#======*+---................\n");

printf("\t.........-*==*********#====##======#=**+##==***************+:++*****==*+-......\n");

printf("\t..........-***=@@#****==##=#=========#***+=*******************+=********++**-..\n");

printf("\t...........-*+*##=****##===#=======###=*************************+..-+===****:*-\n");

printf("\t...........-***#*@#=##=#==========###=***************************.......-=#**+*\n");

printf("\t............+**-=#=#*========#====*=##**************************=+........-+**+\n");

printf("\t...............+##*#======#========#************=#**************=-:*:-....-:+**\n");

printf("\t...............=#===#==#==##===**#=#*******=**=*#@@=************#+::+::::+-+***\n");

printf("\t...............-**####==#==*#==***#=*******==*####@@@=***********+--:+++**===*-\n");

printf("\t................:.:#=*#*==*+*+************#@@@#@@@@@*.-+==*++*+++***-..........\n");

printf("\t..................+**=#***+************=@=:.:******=@-.......-:******+.........\n");

printf("\t..................=*****##=***=*******=:......+=*****==-........*****..........\n");

printf("\t................:=******=......+******=........-==***=*.......-=***=-..........\n");

printf("\t...........-+*********=-......+=***=*=:......+=***==:........:****==+..........\n");

printf("\t..**===**=*******=*:........*=*****=*......*=**==*..........*******:...........\n");

printf("\t+*+**==********-.........-*=*****=*.....-***=*++:-.....-:+*=**=*=*:............\n");

printf("\t.:-:+*****=*+...-*=======******=:.-==*****=:.:......:********+.................\n");

printf("\t...-..........-:++*=*********=:..:@@*+#@*.........-#@=====-....................\n");

printf("\t................:.::=*****==:......++=+-.........-##=@@@#-.....................\n");

printf("\t-::::-----------------------------------------------:--------------------------\n");

printf("\t.+::+-------.---.....................................-....::----...............\n");

printf("\t.:+*+--------------------.................................::-------------------\n");

}

void print_dragao(){
printf("\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::+=@WW@:::::::::::::::::::::\n");

printf("\t::::::::::::::::@#+::::::::::::::::::::::::#WWW@WWWWWWWWW*:::::::::::::::::::::\n");

printf("\t::::::::::::::-:#WWWWWWW*:::::::::::::-:+@WWWWWWWWWWWWWWW@:::::::::::::::::::::\n");

printf("\t::::::::::::::::::*@WWWWWWW@=+:::::::=*@WWWWWWWWWWWWWWWWWWW@*::::::::::::::::::\n");

printf("\t::::::::::::::::::::*@WWWWWWWW@:::::::WWWWWWWWWWWWWWWWWWWW#*+**::::::::::::::::\n");

printf("\t:::::::::::::::::::::::#WWWWWWWW=::::=WWWWWWWWWWWWWWWWWW@::::::::::::::::::::::\n");

printf("\t:::::::::::::::::::::::::#WWWWWWW@:::@WWWWWWWWWWWWWWWWWWWW=::::::::::::::::::::\n");

printf("\t:::::::::::::::@::::::::::+WWWWWWWW=*WWWWWWWWWWWWWWW@*:::::::::::::::::::::::::\n");

printf("\t::::::::::++::W*::::::::::::@WWWWWWWWWWWWWWWWWWWW@+::::::::::::::::::::::::::::\n");

printf("\t:::::::::::W*@WWWWWW@*::::++#WWWWWWWWWWWWWWWWWWW+::::::::::::::::::::::::::::::\n");

printf("\t:::::::::::@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW#:::::::::::::::::::::::::::::::\n");

printf("\t:::::::::::@WWWWW#=WWWWWWWWWWWWWWWWWWWWWWWWWWWW#::::::::::::::::=::::::::::::::\n");

printf("\t:::::::::::@WWWWWW@:#WWWWWWWWWWWWWWWWWWWWWWWWWW*::::::::::::::#@+::::::::::::::\n");

printf("\t:::::::::::+WWWWW@:::+@WWWWWWWWWWWWWWWWWWWWWWW@:::::::::++=@WW=+:::::::::::::::\n");

printf("\t:::::::::::::=WWW*:::::-*WWWWWWWWWWWWWWWWWWWWWW=++:::::+#W+-:::::::::::::::::::\n");

printf("\t:::::::::::::+WWW@+:::::::@WWWWWWWWWWWWWWWWWWWWWW*:::::=W*:::::::::::::::::::::\n");

printf("\t::::::::::::::*@:+:::::::*WWWWWWWWWWWWWWWWWWWWWWWW=::::=W+:::::::::::::::::::::\n");

printf("\t::::::::::::::::::::::+@WWWW@#=WWWWWWWWWWWWWWWWWWWWW+::*W#:::::::::::::::::::::\n");

printf("\t:::::::::::::::::::*WW##=++:::::WWWWWWWWWWWWWWWWWWWWWW++#WW#+::::::::::::::::::\n");

printf("\t::::::::::::::::*#@@W+::+::::::#WWW*@WW+=WWWWWWWWWWWWWWWW@WWWWW@#=*+:::::::::::\n");

printf("\t::::::::::::::::::@#+:::::::::*WWW*:#WW#::=WWWWWWWWWWWWWWWWWWWWWWWWWW*:::::::::\n");

printf("\t:::::::::::::::::::-:::::::::+WW@##WW@#:::@WW=+#WWWWWWWWWWWWWWWWWWWWW*:::::::::\n");

printf("\t:::::::::::::::::::::::::::::@WWWWW#::::+@WW#+::::+=#@WWWWWWWWWWW@=+:::::::::::\n");

printf("\t:::::::::::::::::::::::::=W@WW#++::::#W@WWW#:::::::::::::::::::::::::::::::::::\n");

printf("\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
}

void print_shadow_lord(){
printf("\t--:+-------------------------------------\n");
printf("\t--*###:----------------------------------\n");
printf("\t--+@=------------------------------------\n");
printf("\t---*#:----------------#WW#---------------\n");
printf("\t---+#----------------*##@@:--------------\n");
printf("\t---:#:-------------:=*@@#@*#=--:---------\n");
printf("\t----#+--------+++##@##@@#@@=:=@@@=:=:----\n");
printf("\t----==--------*#@@@@@@@@##@@@#@@@@#*-----\n");
printf("\t----*#-:=----+@@@@@@@##@@@@@@@@@@@@@:----\n");
printf("\t-++-+@=#:---:=#@@@W@@@@@@@@@@@@@#@@#+----\n");
printf("\t-:*##@@*=+---:*#@@@@@@@@@@@@#=@@@@#+-----\n");
printf("\t-:*@@@##=#-::=#@@@@*@@@@@@@#:*@#@@@@@=+--\n");
printf("\t-:+=@@#@@:--:=@@@@*#@@@@@#@@+=#@@@@@:----\n");
printf("\t-*#@@@@@#*+-:#@@@==@@@#@@@#@@+=@#@*+:----\n");
printf("\t---=@@@@#:::-+@@==@@@@@@@##@@#+@@@:------\n");
printf("\t---=@@@@@*:--:#@*#@@@@@@@###@@=@@=-------\n");
printf("\t---+@@@@@@+--:##+@@@@@@@@@@@@@@@@#-------\n");
printf("\t----#@@@@@*---*##@@@@@@@@@@@@@#@@:-------\n");
printf("\t----=@@@@@=----+#@@@@@@=@@@##@###:-------\n");
printf("\t----+##@@@@----=@@@@@@@#*@@##@#@@=-------\n");
printf("\t-----##@@@@:--:##@@@@@@#*@@##@@@@#*------\n");
printf("\t-----*@@@@@*--+#@@@@@@=#:@@@@@#*##=+-----\n");
printf("\t-----+@@@@@=--:##@@@@@##:#@@@@@*###:-----\n");
printf("\t------#@@@@#--*@#=@@@@##*=@@@@@####*-----\n");
printf("\t------*@@@@@:-=#*+@@@==#::#@@@@#*=##:----\n");
printf("\t------:@#@@@+-##*=@@=-=#+-##@@@#=-##+----\n");
printf("\t-------##@@@=-++:@@#--*#--+#*@##*--=:----\n");
printf("\t-------*@@@@#--:=@@#:-------+@@@:--------\n");
printf("\t----:::+@@@@#=#@@@@#---------#@@@=*+++:::\n");
printf("\t----:::::::::++++:::::::+++++*#=*+::::::-\n");
}
//##############################################################################################################

// Menu de Batalha --INICIO--

void menu_principal(struct Personagem *personagem){
    int option;
    do{
        printf("\n\t===========================\n");
        printf("\t| 1. Sair em uma Aventura |\n");
        printf("\t| 2. Loja                 |\n");
        printf("\t| 3. Personagem           |\n");
        printf("\t| 4. Ajuda/Instruções     |\n");
        printf("\t| 5. Abandonar Aventura   |\n");
        printf("\t===========================");
        printf("\n\t Digite uma das opcoes acima: ");
        scanf("%d", &option);

        if(option == 1){
            menu_batalha(personagem);
        }
        if(option == 2){

        }
        if(option == 3){
            ver_status_personagem(*personagem);
            printf("\n");
            menu_principal(personagem);
        }
        if(option == 4){

        }
    } while(option =! 5);
}

void menu_batalha(struct Personagem *personagem){
    int option;
    char sim;

    //MONSTROS
    struct Monstros monstros[10];
    struct Monstros monstro_1 = novo_monstro("Orc Esqueleto", 100, 50, 30);
    struct Monstros monstro_2 = novo_monstro("Hidra", 280, 150, 50);
    struct Monstros monstro_3 = novo_monstro("Quimera", 570, 300, 90);
    struct Monstros monstro_4 = novo_monstro("Dragao do Abismo", 1200, 500, 180);
    struct Monstros monstro_5 = novo_monstro("Lord of The Dark Void", 15600, 10000, 500);

        do{
            printf("\n\t=======================================");
            printf("\n\t|1. Batalhar com -- Orc Esqueleto    |\n");
            printf("\t|2. Batalhar com -- Hidra            |\n");
            printf("\t|3. Batalhar com -- Quimera          |\n");
            printf("\t|4. Batalhar com -- Dragao do Abismo |\n");
            printf("\t|5. Batalhar com -- The Last Knight  |\n");
            printf("\t|6. Voltar Para o Menu de Opcoes.    |\n");
            printf("\t=======================================");
            printf("\n\tDigite uma das opcoes para iniciar sua batalha ou voltar para o menu inicial: ");
            scanf("%d", &option);

            if(option == 1){
                printf("\n");
                print_orc();
                printf("\n\tQuem ousa interromper meu almoco?? \n\tEspero que esteja preparado aventureiro seu destino sera o mesmo daquela pilha de ossos\n");
                printf("\n");
                printf("\tDeseja iniciar a batalha? Digite [s] para batalhar e digite [n] para voltar ao menu de batalha: ");
                scanf("%s", &sim);
                    if(sim == 'S' || sim == 's'){
                        printf("\n");
                        batalha(personagem, monstro_1);
                    } else{
                        printf("\n");
                        menu_batalha(personagem);
                    }
            }
            if(option == 2){
                printf("\n");
                print_hidra();
                printf("\n\tAcha que so porque derrotou aquele Orc inutil vai poder ir contra mim?\n\tVou adorar ver voce tentar...\n");
                printf("\n");
                printf("\tDeseja iniciar a batalha? Digite [s] para batalhar e digite [n] para voltar ao menu de batalha: ");
                scanf("%s", &sim);
                    if(sim == 'S' || sim == 's'){
                        printf("\n");
                        batalha(personagem, monstro_2);
                    } else{
                        printf("\n");
                        menu_batalha(personagem);
                    }
            }
            if(option == 3){
                printf("\n");
                print_quimera();
                printf("\n\tOra ora se nao e o Aventureiro de quem tenho escutado falar, fico impressionado que tenha chegado tao longe.\n\tMas sua sorte esta prestes a acabar, voce nao passara daqui.\n");
                printf("\n");
                printf("\tDeseja iniciar a batalha? Digite [s] para batalhar e digite [n] para voltar ao menu de batalha: ");
                scanf("%s", &sim);
                    if(sim == 'S' || sim == 's'){
                        printf("\n");
                        batalha(personagem, monstro_3);
                    } else{
                        printf("\n");
                        menu_batalha(personagem);
                    }
            }
            if(option == 4){
                printf("\n");
                print_dragao();
                printf("\n\tQue surpresa, meu mestre disse para tomarmos cuidado com o tal guerreiro escolhido, \n\tmas nao achei que chegaria tao longe\n\tO que te motiva a ir tao longe para salvar este lugar?\n\t... \n\tNenhuma palavra entao? Ok, se prepare para terminar sua jornada aqui.");
                printf("\n");
                printf("\tDeseja iniciar a batalha? Digite [s] para batalhar e digite [n] para voltar ao menu de batalha: ");
                scanf("%s", &sim);
                    if(sim == 'S' || sim == 's'){
                        printf("\n");
                        batalha(personagem, monstro_4);
                    } else{
                        printf("\n");
                        menu_batalha(personagem);
                    }
            }
            if(option == 5){
                printf("\n");
                print_shadow_lord();
                printf("\n\tEntao nos encontramos finalmente, hoje um de nos caira, nao existira um meio termo.\n\tVejo o quao forte voce se tornou, foi uma ardua jornada e voce superou todos os desafios,\n\tmas agora chegou a hora de provar que valeu a pena.");
                printf("\n");
                printf("\n");
                printf("\tDeseja iniciar a ultima batalha? Digite [s] para batalhar e digite [n] para voltar ao menu de batalha: ");
                scanf("%s", &sim);
                    if(sim == 'S' || sim == 's'){
                        printf("\n");
                        boss_fight(personagem, monstro_5);
                    } else{
                        printf("\n");
                        menu_batalha(personagem);
                    }
            }
            if(option == 6){
                printf("\n");
                menu_principal(personagem);
            }
        } while(option != 6);
}


int main(){

    //ARMAS
    struct Arma armas[10];
    struct Arma arma_1 = nova_arma("Espada de Madeira",20, 0);
    struct Arma arma_2 = nova_arma("Espada de Ferro",70,80);
    struct Arma arma_3 = nova_arma("Espada de Arcanite",120,200);
    struct Arma arma_4 = nova_arma("Espada de Dragon Steel",260,500);
    struct Arma arma_5 = nova_arma("Espada Berserker",1360,6000);

    struct RepositorioArmas repositorio_armas= novo_repositorio_armas(armas);

    add_arma_repositorio_armas(arma_1,&repositorio_armas);
    add_arma_repositorio_armas(arma_2,&repositorio_armas);
    add_arma_repositorio_armas(arma_3,&repositorio_armas);
    add_arma_repositorio_armas(arma_4,&repositorio_armas);
    add_arma_repositorio_armas(arma_5,&repositorio_armas);

    //ARMADURAS
    struct Armadura armaduras[10];
    struct Armadura armadura_1 = nova_armadura("Armadura de Couro",60,20);
    struct Armadura armadura_2 = nova_armadura("Armadura de Ferro",240,180);
    struct Armadura armadura_3 = nova_armadura("Armadura de Arcanite",360,380);
    struct Armadura armadura_4 = nova_armadura("Armadura de Dragon Steel",810,1800);
    struct Armadura armadura_5 = nova_armadura("Armaguarda SmallLakes", 6000,8000);

    struct RepositorioArmaduras repositorio_armaduras= novo_repositorio_armaduras(armaduras);

    add_armadura_repositorio_armaduras(armadura_1,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_2,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_3,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_4,&repositorio_armaduras);
    add_armadura_repositorio_armaduras(armadura_5,&repositorio_armaduras);

    //REPOSITORIO POCOES

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

    struct Personagem personagem = novo_personagem(
                            "Cleiton",
                            100,
                            0,
                            selecione_arma_por_nome("Espada de Dragon Steel",repositorio_armas),
                            selecione_armadura_por_nome("Armaguarda SmallLakes",repositorio_armaduras),
                            repositorio_pocao_vida);



    menu_principal(&personagem);

    return 0;
}
