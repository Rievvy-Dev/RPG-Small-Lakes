#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_historia_introducao(){
    printf("Vale Folks.\n");
    printf("Um lugar por muito tempo pacifico, considerado por muitos o proprio Eden, banhado pelas aguas cristalinas e correntes\n");
    printf("do Rio de Jollya, dava para escutar os cantos dos passaros ecoando no vento e das crianças brincando por entre as parreiras\n");
    printf("de uva, o cheiro de lirio e tulipas arrojava os campos e deixava tudo perfeito, ate tudo mudar...\n\n");
    printf("Lerry de Green Falls, um mensageiro que andava pelos arredores de SmallLakes distribuindo correspondencias de todos\n");
    printf("os quatro reinos, infelizmente estava no lugar errado e na hora errada quando um portal se abriu bem na sua frente,\n");
    printf("era o proprio abismo, o limbo, o vazio, onde todas as criaturas que a muito tinham sido expulsas e banidas pelos humanos\n");
    printf("habitavam, estas criaturas viviam num infinito jogo voraz, onde apenas os mais fortes sobreviviam, o lar de dragoes e\n");
    printf("todo tipo de criatura amedrontadora, agora tinham a sua saida, uma liberdade, a abertura do portal foi o que eles \n");
    printf("esperaram por milhoes de anos, e agora toda a espera e sua luta por sobrevivencia tinha sentido...\n\n");
    printf("O que restava agora e que O GUERREIRO ESCOLHIDO conseguisse nos salvar, o unico com habilidade suficiente para derrotar ");
    printf("as criaturas, fechar o portal e salvar o nosso reino...\n");
    printf("\nAperte enter para continuar...");
    char opcao;
    do{
        scanf("%c", &opcao);
    } while(opcao != '\n');
    
    printf("\n\n####################################################################################################################\n\n");

}

void print_tutorial(){
    printf("\t--- Tutorial ---\n\n");
    printf("\t-Crie seu personagem, apos isto voce recebera um kit inicial de armadura e uma espada de madeira, mate seu primeiro\n");
    printf("\tinimigo para provar seu valor.\n");
    printf("\t-Cada inimigo da uma quantidade diferente de pontos de gloria, use estes pontos para trocar por equipamentos na loja,\n");
    printf("\tvoce pode acessar a loja a partir do menu de opcoes.\n");
    printf("\t-Lembre-se de se equipar com armas e armaduras mais poderosas para progredir na aventura, a dificuldade dos inimigos vai\n");
    printf("\taumentando no decorrer da aventura e somente sera possivel avancar com os equipamentos adequados.\n");
    printf("\t-Cada monstro causa uma quantidade diferente de dano, caso sua armadura suporte o dano do monstro nao sera descontado \n");
    printf("\tda sua vida, caso contrario seu personagem perdera de vida o que a sua armadura nao aguentar, para recuperar esta vida\n");
    printf("\tcompre pocoes de cura na loja com o Dasenberg o Mago. \n");
    printf("\t-Caso sua vida chegue a zero vc perde o jogo e tera que iniciar novamente.\n");
    printf("\t-- POCOES --.\n");
    printf("\t-Para usar as pocoes entre em 'Personagem' no Menu Principal, e use as pocoes na funcao 'Tomar Pocao de Cura'\n");
    printf("\t####ATENCAO####\n");
    printf("\t-Tome muito cuidado como gasta seus pontos de gloria e usa suas pocoes, os primeiros niveis sao os mais complicados\n");
    printf("\t-Derrote o ultimo Boss para salvar SmallLakes, Boa Sorte aventureiro...\n\n");

}


void print_mago(){
    //use o site https://www.topster.pt/gerador-ascii/ para gerar as imagens

    printf("\n");

    printf("\tWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW##WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW****WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW@******@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWWW@##@WWWWWWWWWWWWWWWWWWWWWWWW@********@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWW=++++++++#WWWWWWWWWWWWWWWWWWWW@**********@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWW@++-----:++++WWWWWWWWWWWWWWWWWW@************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWW*+:------++++=WWWWWWWWWWWWWWWW@**************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWW=++:----:++++#WWWWWWWWWWWWWWW@****************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWW+++++++++++*WWWWWWWWWWWWWWW@******************@WWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWW#++++++++@WWWWWWWWWWWWWWW@********************@WWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWW*++++++=WWWWWWWWWWWWWWW@**********************@WWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWW#++++++@WWWWWWWWWWWWWWW************************WWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW*++++=WWWWWWWWWWWWWWW**************************WWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWWWWWW****************************WWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWWWWW******************************WWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWWWW=******************************=WWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWWW=********************************=WWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWW@#=****************************************=#@WWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@#=****************************************************=#WWWWWWWWWWW\n");

    printf("\tWWWWWW#++++*********=+------:::::::::::::::::::::::::-----:+**********=WWWWWWWW\n");

    printf("\tWWWWWW#++++*=#@@@@#::---:::::####::::::::::::::####:::::---::#@@@@#==***=WWWWWW\n");

    printf("\tWWWWWW#++++#@@@@@@+:----::::+####*::::::::::::*####+::::----:+@@@@@@@@@@#@WWWWW\n");

    printf("\tWWWWWW#++++#@@@@@@+:----:::::####+::::::::::::+####:::::----:+@@@@@@@@@@WWWWWWW\n");

    printf("\tWWWWWW#++++@@@@@@@#:----::::::::::::+******+::::::::::::----:#@@@@@@WWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWW@:---:::::::::::::+++++::::::::::::::---:@WWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWW#---:::::----------------------:::::---#WWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWW@:----------------+:------------:---:@WWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWW+-------:::+************+:::-------+WWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWW#------:::::::--------:::::::------#WWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWWW*--------------------------------*WWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWWW#++++@WWWWWWWWWWW+--------------------------------+WWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\tWWWWW#*::::=@WWWWW@#===+--------------------------------+===#@WWWWWWWWWWWWWWWWW\n");

    printf("\tWWW+::::::::::**********:------------------------------:*********@WWWWWWWWWWWWW\n");

    printf("\tWW*::::::::::::+*********------------------------------************#WWWWWWWWWWW\n");

    printf("\tWW*::::::::::::+*********+----------------------------+**************@WWWWWWWWW\n");

    printf("\tWW#::::::::::::***********+--------------------------+****************@WWWWWWWW\n");

    printf("\tWW=+::::::::::***************+--------------------+*******************=WWWWWWWW\n");

    printf("\tWW=**+::::::+*****************:------------------:*********************WWWWWWWW\n");

    printf("\tWW=***+++++***********************==:------:==*************************WWWWWWWW\n");

    printf("\tWW=***+++++*************************========***************************WWWWWWWW\n");

    printf("\t(c) 2022 topster.de############################################################\n");
}

void print_orc(){
    
    printf("\n");

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
    printf("\n");
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

struct RepositorioArmas novo_repositorio_armas(){
    struct RepositorioArmas repositorio;
    int i;
    struct Arma armas[10];
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

void ver_caracteristicas_arma(struct Arma arma){
    printf("Nome: %s // Dano: %d // Preco: %d \n\n",arma.nome,arma.dano,arma.pontos_preco);
}

void printar_caracteristicas_armas_disponiveis(struct RepositorioArmas repositorio){
    int i;
    printf("\n\t*** ARMAS DISPONIVEIS ***\n");
    for(i = 0; i < repositorio.proxima_posicao_disponivel; i++){
        printf("\t%d. ", i+1);
        ver_caracteristicas_arma(repositorio.armas[i]);
    }
}

void printar_armas_disponiveis(struct RepositorioArmas repositorio){
    int i;
    printf("Armas disponiveis:\n");
    for(i = 0; i < repositorio.proxima_posicao_disponivel; i++){
        printf("\t%d - %s\n", i+1, repositorio.armas[i].nome);
    }
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

struct RepositorioArmaduras novo_repositorio_armaduras(){
    struct RepositorioArmaduras repositorio;
    int i;
    struct Armadura armaduras[10];
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
    repositorio_armaduras->proxima_posicao_disponivel ++;
}

void ver_caracteristicas_armadura(struct Armadura armadura){
    printf("Nome: %s // Defesa: %d // Preco: %d \n\n",armadura.nome,armadura.defesa,armadura.pontos_preco);
}

void printar_caracteristicas_armaduras_disponiveis(struct RepositorioArmaduras repositorio){
    int i;
    printf("\n\t*** ARMADURAS DISPONIVEIS ***\n\n");
    for(i = 0; i < repositorio.proxima_posicao_disponivel; i++){
        printf("\t%d. ", i+1);
        ver_caracteristicas_armadura(repositorio.armaduras[i]);
    }
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

struct RepositorioPocaoVida novo_repositorio_pocao_vida(){
    struct RepositorioPocaoVida repositorio;
    int i;
    struct PocaoVida pocoes_vida[10];
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

struct PocaoVida selecione_pocao_por_id(int indice_pocao, struct RepositorioPocaoVida repositorio_pocoes){
    struct PocaoVida pocao_retorno = repositorio_pocoes.pocoes_vida[indice_pocao];
    return pocao_retorno;
}

struct PocaoVida selecione_pocao_vida_por_nome(char * nome_pocao, struct RepositorioPocaoVida  * repositorio_pocao_vida){
    struct PocaoVida pocao_retorno;
    int i;

    for(i = 0; i < repositorio_pocao_vida->proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_pocao_vida->pocoes_vida[i].nome, nome_pocao) == 0){
            pocao_retorno=repositorio_pocao_vida->pocoes_vida[i];
        }
    }
    return pocao_retorno;

}
int selecione_indice_pocao_por_nome(char *nome_pocao, struct RepositorioPocaoVida repositorio_pocoes){
    int i;
    int indice_pocao_retorno;
    for(i = 0; i < repositorio_pocoes.proxima_posicao_disponivel; i++){
        if(strcmp(repositorio_pocoes.pocoes_vida[i].nome,nome_pocao) == 0){
            indice_pocao_retorno = i;
        }
    }
    return indice_pocao_retorno;
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

void remova_pocao_vida_por_nome(char * nome_pocao, struct RepositorioPocaoVida  * repositorio_pocao_vida){
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

void printar_caracteristas_pocao(struct PocaoVida pocao){
    printf(" Nome: %s // Cura Efetuada: %d // Preco: %d \n\n",pocao.nome,pocao.cura,pocao.pontos);
}

void printar_caracteristicas_pocoes(struct RepositorioPocaoVida repositorio){
    int i;

    printf("\n\t*** POCOES DISPONIVEIS ***\n\n");
    for(i=0; i<repositorio.proxima_posicao_disponivel;i++){
        printf("\t%d.",i+1);
        printar_caracteristas_pocao(repositorio.pocoes_vida[i]);
    }
}

void printar_pocoes_disponiveis(struct RepositorioPocaoVida repositorio){
    int i,j,cont;
    int proxima_posicao_pocoes_disponiveis=0;
    char pocoes_disponiveis[10][50];
    printf("\tPocoes de Cura disponiveis:\n");

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
        printf("\t%d.\t%s  - - - -  x%d\n",i+1,pocoes_disponiveis[i],quantidade_pocao_disponivel(pocoes_disponiveis[i],repositorio));
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
    printf("\n\n\tStatus do Personagem:\n\n");
    printf("\tNome: %s\n", personagem.nome);
    printf("\tVida: %d\n", personagem.pontos_vida);
    printf("\tPontos de Gloria: %d\n", personagem.pontos);
    printf("\tArma: %s -- Dano: %d\n", personagem.arma.nome,personagem.arma.dano);
    printf("\tNome da Armadura: %s -- Durabilidade: %d\n", personagem.armadura.nome, personagem.armadura.defesa);
    printar_pocoes_disponiveis(personagem.repositorio_pocao_vida);
    // Lembrar de ver a quantidade de po��es dispon�veis no personagem.
}

void tomar_pocao(struct PocaoVida  pocao, struct Personagem *personagem){
    if(quantidade_pocao_disponivel(pocao.nome,personagem->repositorio_pocao_vida)>0){
        int indice_pocao_cura;
        indice_pocao_cura = selecione_indice_pocao_por_nome(pocao.nome,personagem->repositorio_pocao_vida);
        remova_pocao_vida_por_id(indice_pocao_cura,&personagem->repositorio_pocao_vida);

        if((personagem->pontos_vida + pocao.cura) <= 100){
            personagem->pontos_vida+= pocao.cura;
        }else{
            personagem->pontos_vida=100;
        }
    }else{
        printf("\n\t*** VOCE NAO POSSUI ESSE TIPO DE POCAO, VA COMPRAR ALGUMAS NA LOJA ***\n");
    }
}

void printar_menu_pocoes_disponiveis(struct Personagem *personagem){
    printf("\n\t*** POCOES DISPONIVEIS ***\n");

    printf("\n\t1.Pocao de Cura Grande   - - - -  x%d\n",quantidade_pocao_disponivel("Pocao de Cura Grande",personagem->repositorio_pocao_vida));
    printf("\t2.Pocao de Cura Media    - - - -  x%d\n",quantidade_pocao_disponivel("Pocao de Cura Media",personagem->repositorio_pocao_vida));
    printf("\t3.Pocao de Cura Pequena  - - - -  x%d\n",quantidade_pocao_disponivel("Pocao de Cura Pequena",personagem->repositorio_pocao_vida));
    printf("\t4.Sair\n");
    printf("\t\t*** VIDA ATUAL: %d ***\n\n",personagem->pontos_vida);
}




void menu_tomar_pocao(struct Personagem *personagem){
    int  option;
    int indice_pocao_cura;
    do{
        printar_menu_pocoes_disponiveis(personagem);
        printf("\tInforme o numero da pocao que voce quer tomar: ");
        scanf("%d", &option);
        
        if(option==1){
            tomar_pocao(selecione_pocao_vida_por_nome("Pocao de Cura Grande",&personagem->repositorio_pocao_vida),personagem);
        }else if(option==2){
            tomar_pocao(selecione_pocao_vida_por_nome("Pocao de Cura Media",&personagem->repositorio_pocao_vida),personagem);
            printf("\n\n\n%s\n\n\n",selecione_pocao_vida_por_nome("Pocao de Cura Media",&personagem->repositorio_pocao_vida).nome);
        }else if(option==3){
            tomar_pocao(selecione_pocao_vida_por_nome("Pocao de Cura Pequena",&personagem->repositorio_pocao_vida),personagem);
        }else if(option==4){
            menu_personagem(*personagem);
        } 
    }while (option!=4);
    
}

void print_menu_personagem(struct Personagem *personagem){
    printf("\n\t*** MENU DO(A) PERSONAGEM ***\n");
    printf("\n\t1. Vizualizar Status de %s\n",personagem->nome);
    printf("\t2. Tomar Pocao de Cura\n");
    printf("\t3. Sair\n");
    printf("\n\tDigite uma das opcoes acima: ");
}

void menu_personagem(struct Personagem * personagem){
    int option;
    do{
        print_menu_personagem(personagem);
        scanf("%d", &option);

        if(option == 1){
            ver_status_personagem(*personagem);
        }else if(option==2){
            menu_tomar_pocao(personagem);
        }else if (option==3){
            menu_principal(personagem);
        }
    }while (option!=3);
    

}


struct Loja{
    struct RepositorioArmas repositorio_armas;
    struct RepositorioArmaduras repositorio_armaduras;
    struct RepositorioPocaoVida repositorio_pocoes;
};

struct Loja nova_loja(struct RepositorioArmas armas_disponiveis,struct RepositorioArmaduras armaduras_disponiveis,struct RepositorioPocaoVida pocoes_disponiveis){
    struct Loja loja;
    loja.repositorio_armas=armas_disponiveis;
    loja.repositorio_armaduras=armaduras_disponiveis;
    loja.repositorio_pocoes=pocoes_disponiveis;
    return loja;
}

struct Loja iniciar_loja(){
    
    struct Arma arma_1 = nova_arma("Espada de Madeira",20, 0);
    struct Arma arma_2 = nova_arma("Machado Berserker",70,80);
    struct Arma arma_3 = nova_arma("Espada de Arcanite",120,200);
    struct Arma arma_4 = nova_arma("Espada de Dragon Steel",260,500);
    struct Arma arma_5 = nova_arma("Laminas de Nichirin",1360,6000);
    struct RepositorioArmas repositorio_armas_loja=novo_repositorio_armas();

    add_arma_repositorio_armas(arma_1,&repositorio_armas_loja);
    add_arma_repositorio_armas(arma_2,&repositorio_armas_loja);
    add_arma_repositorio_armas(arma_3,&repositorio_armas_loja);
    add_arma_repositorio_armas(arma_4,&repositorio_armas_loja);
    add_arma_repositorio_armas(arma_5,&repositorio_armas_loja);
    

    struct Armadura armadura_1 = nova_armadura("Armadura de Couro",60,20);
    struct Armadura armadura_2 = nova_armadura("Espirito Berserker",480,180);
    struct Armadura armadura_3 = nova_armadura("Armadura de Arcanite",1100,380);
    struct Armadura armadura_4 = nova_armadura("Armadura de Dragon Steel",3000,1800);
    struct Armadura armadura_5 = nova_armadura("Armaguarda SmallLakes", 6000,8000);

    struct RepositorioArmaduras repositorio_armaduras_loja=novo_repositorio_armaduras();
    
    add_armadura_repositorio_armaduras(armadura_1,&repositorio_armaduras_loja);
    add_armadura_repositorio_armaduras(armadura_2,&repositorio_armaduras_loja);
    add_armadura_repositorio_armaduras(armadura_3,&repositorio_armaduras_loja);
    add_armadura_repositorio_armaduras(armadura_4,&repositorio_armaduras_loja);
    add_armadura_repositorio_armaduras(armadura_5,&repositorio_armaduras_loja);

    struct PocaoVida p1=nova_pocao_vida("Pocao de Cura Grande",100,20);
    struct PocaoVida p2=nova_pocao_vida("Pocao de Cura Media",50,10);
    struct PocaoVida p3=nova_pocao_vida("Pocao de Cura Pequena",20,4);
    
    struct RepositorioPocaoVida repositorio_pocoes_loja=novo_repositorio_pocao_vida();

    add_poacao_vida_repositorio_pocao_vida(p1,&repositorio_pocoes_loja);
    add_poacao_vida_repositorio_pocao_vida(p2,&repositorio_pocoes_loja);
    add_poacao_vida_repositorio_pocao_vida(p3,&repositorio_pocoes_loja);
    
    
    struct Loja loja=nova_loja(repositorio_armas_loja,repositorio_armaduras_loja,repositorio_pocoes_loja);

    return loja;   
}

int venda_item_possivel(int pontos_item,int pontos_personagem){
    int retorno;
    if(pontos_personagem>=pontos_item){
        retorno=0;
    }else{
        retorno=1;
    }
    return retorno;
}

void vender_arma_personagem(struct Arma arma, struct Personagem * personagem){
    if(venda_item_possivel(arma.pontos_preco,personagem->pontos)==0){
        personagem->arma=arma;
        personagem->pontos-= arma.pontos_preco;
        printf("\n\t *** VENDA REALIZADA COM SUCESSO ***\n");
        print_mago();
        printf("\n\t *** OBRIGADO!!! DESEJA MAIS ALGUMA COISA ? ***\n");
    }else{
        print_mago();
        printf("\n\t *** INFELIZMENTE VOCE NAO TEM PONTOS O SUFICIENTE, VA MATAR MAIS ALGUNS MONSTROS! ***\n");
    }
}

void vender_armadura_personagem(struct Armadura armadura, struct Personagem * personagem){
    if(venda_item_possivel(armadura.pontos_preco,personagem->pontos)==0){
        personagem->armadura=armadura;
        personagem->pontos -= armadura.pontos_preco;
        printf("\n\t *** VENDA REALIZADA COM SUCESSO ***\n");
        print_mago();
        printf("\n\t *** OBRIGADO!!! DESEJA MAIS ALGUMA COISA ? ***\n");
    }else{
        print_mago();
        printf("\n\t *** INFELIZMENTE VOCE NAO TEM PONTOS O SUFICIENTE, VA MATAR MAIS ALGUNS MONSTROS! ***\n");
    }
}

int venda_pocao_possivel(struct PocaoVida pocao,struct Personagem *personagem){
    int retorno;
    retorno=-1;
    if(venda_item_possivel(pocao.pontos,personagem->pontos)==0){
        if(personagem->repositorio_pocao_vida.proxima_posicao_disponivel<=10){
            retorno=0;
        }else{
            retorno=1;
        }
    }else{
        retorno=2;
    }
    return retorno;
}

void printar_pontuacao_atual_personagem(int pontos_personagem){
    printf("\n\t*** PONTOS ATUAIS DO PERSONAGEM: %d ***\n", pontos_personagem);
}

void vender_pocao_personagem(struct PocaoVida pocao,struct Personagem * personagem){
    if(venda_pocao_possivel(pocao,personagem)==0){
        add_poacao_vida_repositorio_pocao_vida(pocao,&personagem->repositorio_pocao_vida);
        personagem->pontos -= pocao.pontos;
        printf("\n\t *** COMPRA REALIZADA COM SUCESSO ***\n");
        print_mago();
        printf("\n\t *** OBRIGADO!!! DESEJA MAIS ALGUMA COISA ? ***\n");
    }else if(venda_pocao_possivel(pocao,personagem)==1){
        print_mago();
        printf("\n\t *** HUMMMMM ME PARECE QUE VOCÊ JÁ CARREGA POCOES DEMAIS, VOLTE QUANDO REALMENTE PRECISAR COMPRAR ALGUMA ***\n");
    }else if(venda_pocao_possivel(pocao,personagem)==2){
        print_mago();
        printf("\n\t *** INFELIZMENTE VOCE NAO TEM PONTOS O SUFICIENTE, VA MATAR MAIS ALGUNS MONSTROS! ***\n");
    }
}

void print_menu_loja(char * nome_aventureiro){
    print_mago();
    printf("\n");
    printf("\t*** QUE TAL FICAR UM POUCO MAIS FORTE PARA A SUA JORNADA %s ?***\n",nome_aventureiro);
    printf("\n");
    printf("\tCompre qualquer coisa que lhe for util:\n");
    printf("\n\t1. Armas\n");
    printf("\t2. Armaduras\n");
    printf("\t3. Pocoes\n");
    printf("\t4. Sair\n");
}

void print_menu_loja_armas(struct Loja loja){
    printar_caracteristicas_armas_disponiveis(loja.repositorio_armas);
    printf("\t%d. Sair",loja.repositorio_armas.proxima_posicao_disponivel+1);
}

void menu_loja_armas(struct Loja loja,struct Personagem *personagem){
    
    int option;

    while (option!=loja.repositorio_armas.proxima_posicao_disponivel+1){
        printar_pontuacao_atual_personagem(personagem->pontos);
        print_menu_loja_armas(loja);
        printf("\nSelecione a arma que você gostaria de comprar: ");
        scanf("%d",&option);

        if(option==loja.repositorio_armas.proxima_posicao_disponivel+1){
            menu_loja(personagem);
        }
        vender_arma_personagem(selecione_arma_por_id(option-1,loja.repositorio_armas),personagem);
    }
}

void print_menu_loja_armaduras(struct Loja loja){
    printar_caracteristicas_armaduras_disponiveis(loja.repositorio_armaduras);
    printf("%d.\t Sair",loja.repositorio_armaduras.proxima_posicao_disponivel+1);
}

void menu_loja_armaduras(struct Loja loja,struct Personagem *personagem){
    
    int option;

    while (option!=loja.repositorio_armaduras.proxima_posicao_disponivel+1){
        printar_pontuacao_atual_personagem(personagem->pontos);
        print_menu_loja_armaduras(loja);
        printf("\nSelecione a armadura que você gostaria de comprar: ");
        scanf("%d",&option);

        if(option==loja.repositorio_armas.proxima_posicao_disponivel+1){
            menu_loja(personagem);
        }
        vender_armadura_personagem(selecione_armadura_por_id(option-1,loja.repositorio_armaduras),personagem);
    }
}

void print_menu_loja_pocoes(struct Loja loja){
    printar_caracteristicas_pocoes(loja.repositorio_pocoes);
    printf("\t%d. Sair",loja.repositorio_pocoes.proxima_posicao_disponivel+1);
}

void menu_loja_pocoes(struct Loja loja,struct Personagem *personagem){
    
    int option;

    while (option!=loja.repositorio_pocoes.proxima_posicao_disponivel+1){
        printar_pontuacao_atual_personagem(personagem->pontos);
        print_menu_loja_pocoes(loja);
        printf("\n\tSelecione a pocao que voce gostaria de comprar: ");
        scanf("%d",&option);

        if(option==loja.repositorio_pocoes.proxima_posicao_disponivel+1){
            menu_loja(personagem);
        }
        vender_pocao_personagem(selecione_pocao_por_id(option-1,loja.repositorio_pocoes),personagem);
    }
}
//void print_menu_loja_armadura

void menu_loja(struct Personagem * personagem){
    struct Loja loja= iniciar_loja();
    int option=0;

    while (option!=4){
        print_menu_loja(personagem->nome);
        printf("\n\tDigite uma das opcoes acima: ");
        scanf("%d",&option);

        if(option==1){
            menu_loja_armas(loja,personagem);
        }else if(option==2){
            menu_loja_armaduras(loja,personagem);
        }else if(option==3){
            menu_loja_pocoes(loja,personagem);
        }
        else if(option==4){
            menu_principal(personagem);
            break;
        }
    }
}


// Inicio Fun��es de Batalha

void batalha(struct Personagem *personagem, struct Monstros monstro){
    int durabilidade, vida_atual_monstro, vida_atual_personagem;

        ver_status_personagem(*personagem);
        ver_status_monstro(monstro);

    do{

        durabilidade = personagem->armadura.defesa - monstro.dano;
        vida_atual_personagem = personagem->pontos_vida + durabilidade;
        vida_atual_monstro = monstro.vida_monstro - personagem->arma.dano;

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

            if(vida_atual_monstro <= 0 && vida_atual_personagem > 0){
                personagem->pontos = personagem->pontos + monstro.pontos;
                monstro.vida_monstro = 0;
                monstro.pontos = 0;
                ver_status_personagem(*personagem);
                ver_status_monstro(monstro);
                printf("\n");
                printf("\tAquele reino que por muito tempo foi pacifico e que derrepente havia sido devastado por todo tipo de criatura,\n");
                printf("\testava seguro novamente. Em meio a tanto caos, um jovem guerreiro com um destino travado a dezenas de geracoes,\n");
                printf("\tassumiu toda a responsabilidade de salvar o lugar que ama, ninguem conhecia sua verdadeira historia apenas\n");
                printf("\tsabiam que ele era um heroi e que poderiam contar com ele sempre que corressem perigo, infelizmente as grandes\n");
                printf("\tbatalhas travadas deixaram lacunas em sua alma, o vazio nao era algo para se brincar, e ate para ele foi\n");
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
// Fim Fun��es de Batalha

//##############################################################################################################

// Menu de Batalha --INICIO--


void menu_batalha(struct Personagem *personagem){
    int option;
    char sim;

    //MONSTROS
    struct Monstros monstros[10];
    struct Monstros monstro_1 = novo_monstro("Orc Esqueleto", 100, 100, 30);
    struct Monstros monstro_2 = novo_monstro("Hidra", 280, 500, 50);
    struct Monstros monstro_3 = novo_monstro("Quimera", 570, 1100, 90);
    struct Monstros monstro_4 = novo_monstro("Dragao do Abismo", 1200, 4800, 180);
    struct Monstros monstro_5 = novo_monstro("The Last Knight", 15600, 10000, 500);

        do{
            printf("\n\t*** MENU DE BATALHA ***\n");
            printf("\n\t======================================");
            printf("\n\t|1. Batalhar com -- Orc Esqueleto    |\n");
            printf("\t|2. Batalhar com -- Hidra            |\n");
            printf("\t|3. Batalhar com -- Quimera          |\n");
            printf("\t|4. Batalhar com -- Dragao do Abismo |\n");
            printf("\t|5. Batalhar com -- The Last Knight  |\n");
            printf("\t|6. Voltar Para o Menu de Opcoes.    |\n");
            printf("\t======================================");
            printf("\n\tDigite uma das opcoes para iniciar sua batalha ou voltar para o menu inicial: ");
            scanf("%d", &option);

            if(option == 1){
                printf("\n");
                print_orc();
                ver_status_monstro(monstro_1);
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
                ver_status_monstro(monstro_2);
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
                ver_status_monstro(monstro_3);
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
                ver_status_monstro(monstro_4);
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
                ver_status_monstro(monstro_5);
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

void print_menu_principal(){
    printf("\n\t*** MENU PRINCIPAL ***\n");
    printf("\n\t===========================\n");
    printf("\t| 1. Sair em uma Aventura |\n");
    printf("\t| 2. Loja                 |\n");
    printf("\t| 3. Personagem           |\n");
    printf("\t| 4. Ajuda/Instrucoes     |\n");
    printf("\t| 5. Abandonar Aventura   |\n");
    printf("\t===========================");
    printf("\n\t Digite uma das opcoes acima: ");
}

void menu_principal(struct Personagem *personagem){
    int option;
    
    do{
        print_menu_principal();
        scanf("%d", &option);

        if(option == 1){
            menu_batalha(personagem);
        }else if(option==2){
            menu_loja(personagem);
        }else if (option==3){
            menu_personagem(personagem);
        }else if(option==4){
            print_tutorial();
        }else if(option==5){
            exit(0);
        }
    }while (option!=5);    

}



void start_game(){
    print_historia_introducao();

    print_tutorial();
    printf("\tDigite o nome do seu guerreiro: ");
    char  nome_personagem[100];
    scanf("%[^\n]s",&nome_personagem);

    struct Personagem personagem = novo_personagem(
                            nome_personagem,
                            100,
                            0,
                            nova_arma("Espada de Madeira",20,0),
                            nova_armadura("Armadura de Couro",60,20),
                            novo_repositorio_pocao_vida());
    menu_principal(&personagem);


}

int main(){
    
    start_game();

    return 0;
}
