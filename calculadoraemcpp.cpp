#include<iostream>
#include<limits> // O uso dessa biblioteca será explicado depois

using namespace std;

// Abaixo é definido a função operacao
void operacao(char c){
    double n1,n2;
    cout << endl << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    if(c=='+'){
        cout << "Resultado: " << n1 << "+" << n2 << "=" << n1+n2 << endl << endl;
    }
    if(c=='-'){
        cout << "Resultado: " << n1 << "-" << n2 << "=" << n1-n2 << endl << endl;
    }
    if(c=='*'){
        cout << "Resultado: " << n1 << "*" << n2 << "=" << n1*n2 << endl << endl;
    }
    if(c=='/'){
        // Não é permitido divisão por zero
        if(n2==0){
            printf("Erro: Divisao por zero nao e permitida\n\n");
        }else{
        cout << "Resultado: " << n1 << "/" << n2 << "=" << n1/n2 << endl << endl;
        }
    }
}

int main(){
    int esc, i, j;
    char caractere;
    // Tudo a seguir está dentro de um loop para permitir o usuario realizar outra operação sem abrir novamente o programa
    for(i=0; i<256; i++){
        //Imprime o terminal
        cout << "===============================" << endl;
        cout << "   Calculadora Simples" << endl;
        cout << "===============================" << endl;
        cout << "Selecione uma operacao:" << endl;
        cout << "1. Adicao" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "4. Divisao" << endl;
        cout << "5. Sair" << endl;
        cout << "Opcao: ";

        // Essa parte a seguir é o motivo do uso daquela biblioteca
        if (!(cin >> esc)) {
            cin.clear(); // limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descarta até o fim da linha
            cout << "\nErro: entrada nao numerica, por favor, digite um numero\n\n";
            continue;
        }

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
                cout << endl << "Adeus!" << endl;
                return 0;
                break;
            default:
                cout << endl << "Erro: opcao invalida, por favor digite uma opacao valida" << endl << endl;
                continue;
        }
    
        
        for(j=0; j<256; j++){
            cout << "Deseja realizar outra operacao? (s/n):";
            cin >> caractere;
        if(caractere=='s' || caractere=='S'){
            cout <<endl << endl << endl;
            break;
        }
        if(caractere=='n' || caractere=='N'){
            cout << "Obrigado por usar a calculadora! Ate a proxima." << endl;
            i=256;
            break;
        }
        cout << "Respota invalida. Por favor, digite 's' para sim ou 'n' para nao" << endl << endl;
        }
    }
}