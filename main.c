#include <stdio.h>
#include <string.h>
#include <locale.h>

struct carros{
    char modelo[50];
    char placa[10];
    int ano;
    float preço;
    
};

int main(){
    struct carros carros[100];
    setlocale(LC_ALL,"Portuguese");
    FILE *arquivo = fopen ("cadastro.txt","w");

    if(arquivo==NULL){
        printf("ERRO");
    return 1;}

    int i,totalcarros=0,menu,maxcarros=100,encontrado=0;
    char placabusca[10];
    

    do{
        printf("(1)Cadastrar Carro\n");
        printf("(2)Consultar Carro\n");
        printf("(3)Sair do Programa\n");
        printf("escolha uma opção do menu: ");
        scanf("%i",& menu);
        getchar();

        

        switch(menu){
            case 1:
            if(totalcarros<maxcarros){
                printf("Modelo:");
                fgets(carros[totalcarros].modelo,50,stdin);
                carros[totalcarros].modelo[strcspn(carros[totalcarros].modelo, "\n")]=0;

                printf("Placa:");
                fgets(carros[totalcarros].placa,10,stdin);
                carros[totalcarros].placa[strcspn(carros[totalcarros].placa, "\n")]=0;

                printf("Ano:");
                scanf("%i",& carros[totalcarros].ano);

                printf("Preço:");
                scanf("%f",& carros[totalcarros].preço);

                

        fprintf(arquivo,"Modelo: %s\n",carros[totalcarros].modelo);
        fprintf(arquivo,"Placa: %s\n",carros[totalcarros].placa);
        fprintf(arquivo,"Ano: %i\n",carros[totalcarros].ano);
        fprintf(arquivo,"Preço: %f\n",carros[totalcarros].preço);

                totalcarros++;

            printf("carro cadastrado!\n");
            printf("\n");
                getchar();
            }
            else{
                printf("quantidade de carros cadastrados atingidos!");
            }
            break;

            case 2:
            if(totalcarros){

                printf("digite a placa do carro que deseja encontrar: \n");
                scanf("%s",placabusca);
                
                for(i=0; i<totalcarros; i++){
                   if (strcmp (carros[i].placa, placabusca) ==0 ){
                    printf("carro encontrado!\n");
                    printf("Modelo:%s\n",carros[i].modelo);
                    printf("Placa:%s\n",carros[i].placa);
                    printf("Ano:%d\n",carros[i].ano);
                    printf("Preço:%.2f\n",carros[i].preço);
                    
                    encontrado = 1;
                   }
                }
            }
            if (encontrado==0){
                printf("carro não encontrado");
            }
            break;

            case 3:
            printf("Encerrando o programa...");
            break;
        }
        


    }while(menu!=3);

    fclose(arquivo);

    return 0;
}
