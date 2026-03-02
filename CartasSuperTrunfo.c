#include <stdio.h>

    int main () { 



    // =========== 1 DECLARAÇÃO DAS VARIÁVEIS ===========
      // carta: número da carta 1
      // populacao e turistico: valores inteiros
      // estado: apenas 1 letra (A até H)
      // cod: código como string (ex: "A01") -> 3 caracteres + '\0' (fim da string) = 4
      // cidade: nome da cidade como string (neste exercício vamos digitar sem espaço: "SaoPaulo"
      // areakm e pib: números com casas decimais (float)

        int carta, populacao, turistico;
        char estado, cod [4], cidade [20] ;
        float areakm, pib ;


        // ===========2 ENTRADA DE DADOS (LEITURA) ===========
        // Aqui o programa pede para o usuário digitar os dados e guarda nas variáveis.

        printf("=================================================\n");
        printf("CARTA 01\n");
        printf("=================================================\n");
       


        printf("Carta: ");
        scanf("%d", &carta);            //=========== %d lê inteiro (int) -> precisa de & (endereço)
        

        printf("Estado: ");
        scanf(" %c", &estado);          // ========== espaço antes do %c ignora ENTER/espacos que ficaram no buffer
         

        printf("Código da carta: ");
        scanf("%3s", cod);              //=========== lê string sem espaço; %3s limita para não estourar o vetor


     // LEMBRETE IMPORTANTE:
     // %s lê apenas UMA palavra (até o primeiro espaço).
     // Ex: "São Paulo" -> cidade = "São" e sobra "Paulo" para a próxima leitura.
     // Então a leitura da população (%d) falha porque encontra "Paulo" (texto) e não número.
        
        printf("Nome da cidade: ");                                     
        scanf("%s", cidade);   
                                   
        
    // população deve ser inteiro, sem ponto e sem texto
                                                         
        printf("População: ");           // ===========   Por isso parecia que "População" não deixava digitar.
        scanf("%d", &populacao);          /* Use cidade sem espaço (SaoPaulo/RioDeJaneiro) 
                                             ou mude a forma de ler o nome. scanf("%s", &cidade1); */                               
                                          
                                
        printf("Área: ");
        scanf("%f", &areakm);                //===========float -> usar ponto (ex: 1521.11)
       

        printf("PIB: ");
        scanf("%f", &pib);                   // ===========float -> usar ponto (ex: 699.28)
        
        
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico);                //============ inteiro




    // ========= 3) SAÍDA DE DADOS (IMPRIMIR) =========
    // Depois de ler tudo, mostramos os dados formatados (bonitinho) na tela.


        printf("\nCarta 1: \n", carta);
        printf("Estado: %c\n", estado);
        printf("Código da carta: %3s\n", cod);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d\n", populacao);


        // %.2f imprime o float com 2 casas decimais

        printf("Área: %.2f km2\n", areakm);
        printf("PIB: %.2f bilhoes de reais\n", pib);
        printf("Números de Pontos Turísticos: %d\n", turistico);

 //-------------- FIMM DA PRIMEIRA CARTA -----------------------------


       printf("=================================================\n");
       printf("CARTA 02\n");
       printf("=================================================\n");
 
 
     
//============SEGUNDA CARTA==================

    /*populacao1 e turistico1: valores inteiros
    estado1: apenas 1 letra (A até H)
    cod1: código como string (ex: "A01") -> 3 caracteres + '\0' (fim da string) = 4
    cidade1: nome da cidade como string (neste exercício vamos digitar sem espaço: "SaoPaulo"
    areakm1 e pib1: números com casas decimais (float) */

        int carta1, populacao1, turistico1;
        char estado1, cod1 [4], cidade1 [20] ;
        float areakm1, pib1 ;

             printf("Carta: ");
             scanf("%d", &carta1);            //=========== %d lê inteiro (int) -> precisa de & (endereço)
        

            printf("Estado: ");
            scanf(" %c", &estado1);          // ========== espaço antes do %c ignora ENTER/espacos que ficaram no buffer
         

            printf("Código da carta: ");    //=========== lê string sem espaço; %3s limita para não estourar o vetor
            scanf("%3s", cod1);         

            printf("Nome da cidade: ");      // ===========   Por isso parecia que "População" não deixava digitar.                              
            scanf("%s", cidade1);              /* Use cidade sem espaço (SaoPaulo/RioDeJaneiro) 
                                                 ou mude a forma de ler o nome. scanf("%s", &cidade1); */  

            printf("População: ");           
            scanf("%d", &populacao1);             // população deve ser inteiro, sem ponto e sem texto                          
                                          
                                
            printf("Área: ");
            scanf("%f", &areakm1);                  //===========float -> usar ponto (ex: 1521.11)
       

            printf("PIB: ");
            scanf("%f", &pib1);                      // ===========float -> usar ponto (ex: 699.28)
        
        
            printf("Número de Pontos Turísticos: ");
            scanf("%d", &turistico1);                   //============ inteiro



// =========  SAÍDA DE DADOS (IMPRIMIR) =========
   
            printf("\nCarta 2: \n", carta1);
            printf("Estado: %c\n", estado1);
            printf("Código da carta: %3s\n", cod1);
            printf("Nome da cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);


        // %.2f imprime o float com 2 casas decimais

           printf("Área: %.2f km2\n", areakm1);
           printf("PIB: %.2f bilhoes de reais\n", pib1);
           printf("Números de Pontos Turísticos: %d\n", turistico1);



        return 0;
    }