#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<locale.h>
// #include<windows.h>

#include <unistd.h>

    int main () {

 
        // Definindo variaveis

        char pais[] = "Brasil";

        char est[] = "Sao Paulo";
        char *cid1 = "Sao Paulo", *cid2 = "Santos", *cid3 = "Itanhaem", *cid4 = "Peruibe";
        float pop1, pop2, pop3, pop4, apop, cpop, upop; 
        int npt1, npt2, npt3, npt4, anpt, at1, at2, cidcomp, cnpt, unpt;
        float area1, area2, area3, area4, pib1, pib2, pib3, pib4, aarea, apib, carea, uarea, cpib, upib;
       //  float dp1, dp2, dp3, dp4, pc1, pc2, pc3, pc4, sp1, sp2, sp3, sp4, adp, apc, asp; 
        int atesc1r = 0, atesc2r = 0;

        char ct;
        float sm;
        char *cidesc = "", *atrib1 = "", *atrib2 = "";

        // Atribui valores as cartas

        int i = 0;
        srand(time(0));
        
        while (i < 5) { 
            
            double apop = 100000.0 + ((double)rand() / RAND_MAX) * (8000000.0);
            double aarea = 100000.0 + ((double)rand() / RAND_MAX) * (8000000.0);
            double apib = 100000.0 + ((double)rand() / RAND_MAX) * (8000000.0);
            double anpt = 100.0 + ((double)rand() / RAND_MAX) * (800.0);

            switch (i) {

                case 0:

                pop1 = apop;
                area1 = aarea;
                pib1 = apib;
                npt1 = anpt;
                
                break;
            
                case 1:

                pop2 = apop;
                area2 = aarea;
                pib2 = apib;
                npt2 = anpt;
                
                break;

                case 2:

                pop3 = apop;
                area3 = aarea;
                pib3 = apib;
                npt3 = anpt;
               
                break;

                case 3:

                pop4 = apop;
                area4 = aarea;
                pib4 = apib;
                npt4 = anpt;
               
                break;


            default:
                break;
            }
     
            i++;

        }

        system("clear");


        printf("Bem vindo ao jogo de cartas Super Trunfo !\n\nSerao criadas quatro cartas e voce jogara contra o computador.\n");
        printf("Devera escolher com qual dentre as quatro cidades criadas voce ira jogar.\n");
        printf("Escolha entao quais atributos ira disputar.\nVence quem tiver maiores ganhos entre os atributos escolhidos !!\n");
        printf("Vamos comecar e Boa Sorte !\n\n");
        printf("Tecle Enter para continuar .......");

        getchar();

        printf("\n\n");

        printf("-----      Criando Cartas      ------\n\n");
        printf("-----          AGUARDE         ------\n\n");

        int t=0;
        char bar[]="/";

        while (t<35)  {    
            
            printf("%.*s", t, bar); 
        
            fflush(stdout);

            // Sleep(30);  
            usleep(40000);

            
            t++;

           
        }

        do {

            system("clear");


            printf("Nessa versao o Pais e Brasil e o estado e Sao Paulo.\n");

            printf("Voce deve escolher uma cidade ...\n\n");
        
            printf("A. Sao Paulo\nB. Santos\nC. Itanhaem\nD. Peruibe\n");

            scanf("%c", &ct);

            // limita  a  escolha as opcoes disponivels
        
        } while (ct != 'A' && ct != 'a' && ct != 'B' && ct != 'b' && ct != 'C' && ct != 'c' && ct != 'D' && ct != 'd'); 

        // Define a cidade 
        // Faz a escolha aleatoria da cidade para o computador disputar 
        // Declara as propriedades as variaveis para a comoracao     
       
        switch (ct){
        case 'A':
        case 'a':
            cidesc = cid1;
            upop = pop1;
            uarea = area1;
            upib=pib1;
            unpt=npt1;

            do{cidcomp =  1 + rand() % 4;
             } while (cidcomp == 1);
            break;

        case 'B':
        case 'b':
            cidesc = cid2;

            upop = pop2;
            uarea = area2;
            upib=pib2;
            unpt=npt2;

            do{cidcomp =  1 + rand() % 4;
            } while (cidcomp == 2);
            break;

        case 'C':
        case 'c':
            cidesc = cid3;

            upop = pop3;
            uarea = area3;
            upib=pib3;
            unpt=npt3;
            do{cidcomp =  1 + rand() % 4;
            } while (cidcomp == 3);
            break;
            
        case 'D':
        case 'd':
            cidesc = cid4;

            upop = pop4;
            uarea = area4;
            upib=pib4;
            unpt=npt4;

            do{cidcomp =  1 + rand() % 4;
            } while (cidcomp == 4);
            break;
        
        default:
            break;
        }


        while (getchar() != '\n');  // limpa o buffer do teclado

        
        switch (cidcomp)
        {
        case 1:
            cpop = pop1;
            carea = area1;
            cpib = pib1;
            cnpt = npt1;
            break;

        case 2:  
            cpop = pop2;
            carea = area2;
            cpib = pib2;
            cnpt = npt2;
            break;

        case 3:

            cpop = pop3;
            carea = area3;
            cpib = pib3;
            cnpt = npt3;
            break;

        case 4:

            cpop = pop4;
            carea = area4;
            cpib = pib4;
            cnpt = npt4;
            break;
        
        default:
            break;
        }

        // Limpa a tela e apresenta as opcoes dos tributos
        
        do {
            
            system("clear");



            printf("Pais: Brasil\n");
            printf("Estado: Sao Paulo\n");
            printf("Cidade: %s\n", cidesc);
            printf("Atributo 1a Opcao: \n");
            printf("Atributo 2a Opcao: \n");


            printf("\nEscolha o 1o. atributo que ira disputar !\n\n");
            printf("1. Populacao\n2. Area\n3. Pib\n4. Pontos Turisticos\n5. Densidade Demografica\n6. Pib Per Capita\n7. Super\n");

            scanf("%d",&at1);

        } while (at1 != 1 && at1 != 2 && at1 != 3 && at1 != 4 && at1 != 5 && at1 != 6 && at1 != 7 );

            while (getchar() != '\n');

            switch (at1)
            {
            case 1:
                atrib1 = "Populacao";  
                (upop > cpop) ?  atesc1r++ : atesc1r-- ;   
                break;
            
            case 2:
                atrib1 = "Area";
                (uarea > carea) ?  atesc1r++ : atesc1r-- ;   
                break;
            
            case 3:
                atrib1 = "Pib"; 
                (upib > cpib) ?  atesc1r++ : atesc1r-- ;   
                break;
            
            case 4:
                atrib1 = "Pontos Turisticos";
                (unpt > cnpt) ?  atesc1r++ : atesc1r-- ;   
                break;  

            case 5:
                atrib1 = "Densidade Demografica"; 
                ((upop/uarea) > (cpop/carea)) ?  atesc1r++ : atesc1r-- ;   
                break;
            
            case 6:
                atrib1 = "Pib Per Capita";   
                ((upib/upop) > (cpib/cpop)) ?  atesc1r++ : atesc1r-- ;   
                break;

            case 7:
                atrib1 = "Super";   
                ((upop+uarea+upib+unpt) > (cpop+carea+cpib+cnpt)) ?  atesc1r++ : atesc1r-- ;   
                break;
            
            default:
                break;
            }

        
        do {
            system("clear");

            printf("Pais: Brasil\n");
            printf("Estado: Sao Paulo\n");
            printf("Cidade: %s\n", cidesc);
            printf("Atributo 1a Opcao: %s\n", atrib1);
            printf("Atributo 2a Opcao: %s\n", atrib2);


            printf("\nEscolha agora o 2o. atributo que ira disputar !\n\n");
        
            if (at1 != 1){ printf("1. Populacao\n"); }
            if (at1 != 2){ printf("2. Area\n"); }
            if (at1 != 3){ printf("3. Pib\n"); }
            if (at1 != 4){ printf("4. Pontos Turisticos\n"); }
            if (at1 != 5){ printf("5. Densidade Demografica\n"); }
            if (at1 != 6){ printf("6. Pib Per Capita\n"); }
            if (at1 != 7){ printf("7. Super\n"); }

            scanf("%d",&at2);

            if (at2 == at1) {
                at2=0;
                continue;
            }

           
        } while (at2 != 1 && at2 != 2 && at2 != 3 && at2 != 4 && at2 != 5 && at2 != 6 && at2 != 7 );


        while (getchar() != '\n');


        switch (at2)
            {
            case 1:
                atrib2 = "Populacao";  
                (upop > cpop) ?  atesc2r++ : atesc2r-- ;   
                break;
            
            case 2:
                atrib2 = "Area";
                (uarea > carea) ?  atesc2r++ : atesc2r-- ;   
                break;
            
            case 3:
                atrib2 = "Pib"; 
                (upib > cpib) ?  atesc2r++ : atesc2r-- ;   
                break;
            
            case 4:
                atrib2 = "Pontos Turisticos";
                (unpt > cnpt) ?  atesc2r++ : atesc2r-- ;   
                break;  

            case 5:
                atrib2 = "Densidade Demografica"; 
                ((upop/uarea) > (cpop/carea)) ?  atesc2r++ : atesc2r-- ;   
                break;
            
            case 6:
                atrib2 = "Pib Per Capita";   
                ((upib/upop) > (cpib/cpop)) ?  atesc2r++ : atesc2r-- ;   
                break;

            case 7:
                atrib2 = "Super";   
                ((upop+uarea+upib+unpt) > (cpop+carea+cpib+cnpt)) ?  atesc2r++ : atesc2r-- ;   
                break;
            
            default:
                break;
            }

            system("clear");

            printf("Pais: Brasil\n");
            printf("Estado: Sao Paulo\n");
            printf("Cidade: %s\n", cidesc);
            printf("Atributo 1a Opcao: %s\n", atrib1);
            printf("Atributo 2a Opcao: %s\n\n", atrib2); 

            printf("Tecle enter para ver os resultados... \n\n");


            while (getchar() != '\n');




            printf("                        |         Jogador      |        Computador\n");
            printf("--------------------------------------------------------------------\n");

            printf("Cidade                  |    ");
            printf ("%12s", cid1);
            printf("      |      ");
            printf ("%12s\n", cid2);

            printf("Populacao               |    ");
            printf ("%12.0f", upop);
            printf("      |      ");
            printf ("%12.0f", cpop);

            if (at1 == 1 || at2 == 1){
                (upop>cpop)?printf("    Ganhou    ") : printf("    Perdeu");
            } 

            printf("\n");

            printf("Area                    |    ");
            printf ("%12.0f", uarea);
            printf("      |      ");
            printf ("%12.0f", carea);

            if (at1 == 2 || at2 == 2){
                (uarea>carea)?printf("    Ganhou    ") : printf("    Perdeu");
            } 
            printf("\n");
            
            printf("Pib                     |    ");
            printf ("%12.0f", upib);
            printf("      |      ");
            printf ("%12.0f", cpib);

            if (at1 == 3 || at2 == 3){
                (upib>cpib)?printf("    Ganhou    ") : printf("    Perdeu");
            } 
            printf("\n");

            printf("Pontos Turisticos       |    ");
            printf ("%12.0d", unpt);
            printf("      |      ");
            printf ("%12.0d", cnpt);

            if (at1 == 4 || at2 == 4){
                (unpt>cnpt)?printf("    Ganhou    ") : printf("    Perdeu");
            } 
            printf("\n");

            printf("Densidade Demografica   |    ");
            printf ("%12.2f", upop/uarea);
            printf("      |      ");
            printf ("%12.2f", cpop/carea);

            if (at1 == 5 || at2 == 5){
                ((upop/uarea)>(cpop/carea))?printf("    Ganhou    ") : printf("    Perdeu");
            } 
            printf("\n");

            printf("Pib Per Capita          |    ");
            printf ("%12.2f", upib/upop);
            printf("      |      ");
            printf ("%12.2f", cpib/cpop);

            if (at1 == 6 || at2 == 6){
                ((upib/upop)>(cpib/cpop))?printf("    Ganhou    ") : printf("    Perdeu");
            } 
            printf("\n");

            printf("Super                   |    ");
            printf ("%12.0f", (upop+uarea+upib));
            printf("      |      ");
            printf ("%12.0f", (cpop+carea+cpib));

            if (at1 == 7 || at2 == 7){
                ((upop+uarea+upib)>(cpop+carea+cpib))?printf("    Ganhou    ") : printf("    Perdeu");
            } 

            printf("\n\n");

            switch (atesc1r+atesc2r)
            {
            case 0:
                printf("Cada um ganhou em um atributo, voces empataram !!!!\n\n");
                break;

                case 1:
                case 2:
                printf("Parabens !!! Voce foi vencedor em ambos os atributos !\n\n");
                break;
                
                case -1:
                case -2:
                printf("Infelizmente voce perdeu em ambos os atributos escolhidos. Tente novamente !\n\n");
                break;
            
            default:
                break;
            }




    }