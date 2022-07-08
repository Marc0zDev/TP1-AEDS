#include <stdio.h>
#include <stdlib.h>
void main(){
    const int C = 4;
    const int A = 20;
    int alunos[A][C],inicio=0,vazio=0,maiorCR=0,curso,posA=0,aux[A],cont=0,b=0;
    do{
        printf("BEM VINDOS AO NOSSO SISTEMA!!!!\n");
        printf("=====Menu=====\n");
        printf("(1)-Preencher a Matriz com dados dos alunos-\n");
        printf("(2)-Vizualiar a Matriz-\n");
        printf("(3)-Visualizar o CR dos alunos[CR mais alto sera informado]-\n");
        printf("(4)-Cursos da Faculdade[Codigos]-\n");
        printf("(5)-Sair-\n");
        printf("Digite um numero:");
        scanf("%d",&inicio);
        system("cls");
        if(inicio==1){
            for(int i = 0;i<A;i++){
                for(int j = 0;j<C;j++){
                    if(j==0){
                        printf("Digite a sua matricula:");
                        scanf("%d",&alunos[i][j]);
                    }
                    else if(j==1){
                        checkpoint:
                        printf("Digite o codigo do seu curso:");
                        scanf("%d",&alunos[i][j]);
                        if(alunos[i][j]>9999){
                            goto checkpoint;
                        }
                    }
                    else if(j==2){
                        printf("Qual o seu sexo?\n");
                        printf("(1)Masculino\n");
                        printf("(2)Feminino\n");
                        printf("(3)Outro\n");
                        printf("Digite um numero acima:");
                        scanf("%d",&alunos[i][j]);
                    }
                    else if(j==3){
                        printf("Digite seu CR\n");
                        scanf("%d",&alunos[i][j]);
                    }

                }
            }
            vazio++;
            system("cls");
        }
        else if(inicio==2){
            if(vazio==0){
                printf(":Matriz vazia Erro 157!@:");
            }
            else{
                printf("Matricula===Curso===Sexo===CR\n");
                for(int i = 0;i<A;i++){
                    for(int j = 0;j<C;j++){
                        if(j==2 && alunos[i][j]==1){
                            printf("Masculino===");
                        }
                        else if(j==2 && alunos[i][j]==2){
                            printf("Feminino===");
                        }
                        else if(j==2 && alunos[i][j]>=3){
                            printf("Outro===");
                        }
                        else{
                            printf("%d===",alunos[i][j]);
                        }
                        
                    }
                    printf("\n");
                }
            }
            
        }
        else if(inicio==3){
            printf("Digite o codigo do curso desejado:");
            scanf("%d",&curso);
            for(int i = 0;i<A;i++){
                if(alunos[i][1]==curso){
                    if(alunos[i][2]==2){
                        if(maiorCR<alunos[i][3]){
                            maiorCR=alunos[i][3];
                            posA=i;
                        }
                    }
                }
            }
            printf("O maior CR e da aluna %d com o calor de %d\n",posA,maiorCR);
            system("cls");

        }
        else if(inicio==4){
            if(vazio==0){
                printf("MAtriz Vazia ERRO 789&*¨!");
            }
            else{
                for(int i = 0;i<A;i++){
                    cont=0;
                    for(int j = 0;j<A;j++){
                        if(alunos[i][1]==aux[j]){
                        cont=1;
                        }
                    }
                    if(cont==0){
                    aux[b]=alunos[i][1];
                    b++;
                    }
                }
                
            }
            for(int i = 0;i<b;i++){
                if(aux[i]==0){

                }
                else{
                    printf("Curso[%d]\n",aux[i]);
                }
                
            }
            
            

        }

    }while(inicio!=5);
   
    
   
}
