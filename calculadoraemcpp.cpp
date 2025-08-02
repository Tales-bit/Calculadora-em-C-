#include<stdio.h>

void operacao(char c){
    float n1,n2,res;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    if(c=='+'){
        res=n1+n2;
        printf("Resultado: %f + %f = %f\n\n", n1, n2, res);
    }
    if(c=='-'){
        res=n1-n2;
        printf("Resultado: %f - %f = %f\n\n", n1, n2, res);
    }
    if(c=='*'){
        res=n1*n2;
        printf("Resultado: %f * %f = %f\n\n", n1, n2, res);

    }
    if(c=='/'){
        if(n2==0){
            printf("Erro: Divisao por zero nao e permitida\n\n");
        }else{
        res=n1/n2;
        printf("Resultado: %f / %f = %f\n\n", n1, n2, res);
        }
    }
}

int main(){
    int esc, i, j;
    char caractere;
    for(i=0; i<256; i++){

        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");
        if(scanf("%d", &esc)!=1){
            while(getchar()!= '\n');
                printf("\nErro: entrada nao numerica, por favor, digite um numero\n\n");
                continue;
        }
        // Estrutura com switch
        
        switch(esc){
            case 1:
                operacao('+');
                break;
            case 2:
                operacao('-');
                break;
            case 3:
                operacao('*');
                break;
            case 4:
                operacao('/');
                break;
            case 5:
                printf("\nAdeus!\n");
                break;
            default:
                printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
                continue;
        }
        // Estrutura com if

        /*if(esc==1){
            operacao('+');
        }
        if(esc==2){
            operacao('-');
        }
        if(esc==3){
            operacao('*');
        }
        if(esc==4){
            operacao('/');
        }
        if(esc==5){
            printf("\nAdeus!\n");
            break;
        }
        if(esc<1 || esc>5){
            printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
            continue;
        }*/
        for(j=0; j<256; j++){
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &caractere);
        if(caractere=='s' || caractere=='S'){
            printf("\n\n\n");
            break;
        }
        if(caractere=='n' || caractere=='N'){
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            i=256;
            break;
        }
        printf("Respota invalida. Por favor, digite 's' para sim ou 'n' para nao\n\n");
        }
    }
}