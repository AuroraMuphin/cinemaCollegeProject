#include <iostream>
#include <locale.h>
#include <cstdlib>

typedef struct cinema{
int sala1, sala2, sala3;
}cinema;

using namespace std;

int fim, fimSala, fimIJ;
int opcao, opcaoSala;
int fileira, poltrona;
cinema poltronas[30][30];

int main(){
  setlocale(LC_ALL,"portuguese");

  cout << "Bem vindo ao Cinema!"<< endl;

  do{
    opcaoSala = 0;
    fimSala = 0;
    fimIJ = 0;
    opcao = 0;

    cout << endl<< "Escolha uma opção:"<< endl;
    cout << "1 - 1º Sala: O Mistério da Sombra Sombria e Sóbria."<< endl;
    cout << "2 - 2º Sala: Pato Plácido de Plástico: O Filme."<< endl;
    cout << "3 - 3º Sala: A Verdadeira Razão do Ç Existir."<< endl;
    cout << "4 - Sair do Cinema."<< endl<< endl;
    cin >> opcao;
    system("cls");

    switch (opcao){
      
    // Sala 1

      case 1:
        do{
          opcaoSala = 0;
          fimSala = 0;
          system("cls");
          cout<< "     ";

          for(int j = 0; j < 30; j++){
            if(j+1 < 10){
               cout<< " "<< j+1<< " ";
            }else{
              cout<< j+1<< " ";
            }
          }
          cout<< endl;

          for(int i = 0; i < 30; i++){
            if(i+1 < 10){
              cout<< " "<< i+1<< " - ";
            }else{
              cout<< i+1<< " - ";
            }

            for(int j = 0; j < 30; j++){
              if(poltronas[i][j].sala1 == 1){
                cout<< "[X]";
              }else{
                cout<< "[ ]";
              }
            }cout<< endl;
          }

          switch(fimIJ){
            case 0:
              cout<< "";
            break;

            case 1:
              cout<< endl<< "Poltrona reservada com sucesso!"<< endl;
            break;
            
            case 2:
              cout<< endl<< "A poltrona já está ocupada. Tente outra!"<< endl;
            break;
            
            case 3:
              cout<< endl<< "Poltrona inexistente. Tente novamente."<< endl;
            break;

            case 4:
              cout<< endl<< "Opção inválida."<< endl;
            break;

            default:
              cout<< endl<< "Erro desconhecido."<< endl;
            break;
          }

          cout<< "O que deseja fazer na Sala 1?"<< endl<< endl;
          cout<< "1 - Reservar uma Poltrona"<< endl;
          cout<< "2 - Sair da sala"<< endl<< endl;
          cin >> opcaoSala;
          
          if (opcaoSala == 1){
            cout<< endl<< "Digite o número da fileira:";
            cin >> fileira;
            cout<< endl<< "Agora digite o número da poltrona desta fileira:";
            cin >> poltrona;

            if((fileira > 0 && fileira < 31) && (poltrona > 0 && poltrona < 31)){
              if(poltronas[fileira-1][poltrona-1].sala1 == 0){
                poltronas[fileira-1][poltrona-1].sala1 = 1;
                fimIJ = 1;

              }else if(poltronas[fileira-1][poltrona-1].sala1 == 1){
                fimIJ = 2;
              }else{
                fimIJ = 3;
              }
            }
          }else if(opcaoSala == 2){
            fimSala = 1;
          }else{
            fimIJ = 4;
          }

        }while(fimSala == 0);
      break;

    // Sala 2

      case 2:
        do{
          opcaoSala = 0;
          fimSala = 0;
          system("cls");
          cout<< "     ";

          for(int j = 0; j < 30; j++){
            if(j+1 < 10){
               cout<< " "<< j+1<< " ";
            }else{
              cout<< j+1<< " ";
            }
          }
          cout<< endl;

          for(int i = 0; i < 30; i++){
            if(i+1 < 10){
              cout<< " "<< i+1<< " - ";
            }else{
              cout<< i+1<< " - ";
            }

            for(int j = 0; j < 30; j++){
              if(poltronas[i][j].sala2 == 1){
                cout<< "[X]";
              }else{
                cout<< "[ ]";
              }
            }cout<< endl;
          }

          switch(fimIJ){
            case 0:
              cout<< "";
            break;

            case 1:
              cout<< endl<< "Poltrona reservada com sucesso!"<< endl;
            break;
            
            case 2:
              cout<< endl<< "A poltrona já está ocupada. Tente outra!"<< endl;
            break;
            
            case 3:
              cout<< endl<< "Poltrona inexistente. Tente novamente."<< endl;
            break;

            case 4:
              cout<< endl<< "Opção inválida."<< endl;
            break;

            default:
              cout<< endl<< "Erro desconhecido."<< endl;
            break;
          }

          cout<< "O que deseja fazer na Sala 2?"<< endl<< endl;
          cout<< "1 - Reservar uma Poltrona"<< endl;
          cout<< "2 - Sair da sala"<< endl<< endl;
          cin >> opcaoSala;
          
          if (opcaoSala == 1){
            cout<< endl<< "Digite o número da fileira:";
            cin >>  fileira;
            cout<< endl<< "Agora digite o número da poltrona desta fileira:";
            cin >> poltrona;

            if((fileira > 0 && fileira < 31) && (poltrona > 0 && poltrona < 31)){
              if(poltronas[fileira-1][poltrona-1].sala2 == 0){
                poltronas[fileira-1][poltrona-1].sala2 = 1;
                fimIJ = 1;

              }else if(poltronas[fileira-1][poltrona-1].sala2 == 1){
                fimIJ = 2;
              }else{
                fimIJ = 3;
              }
            }
          }else if(opcaoSala == 2){
            fimSala = 1;
          }else{
            fimIJ = 4;
          }

        }while(fimSala == 0);
      break;

    //Sala 3

      case 3:
        do{
          opcaoSala = 0;
          fimSala = 0;
          system("cls");
          cout<< "     ";

          for(int j = 0; j < 30; j++){
            if(j+1 < 10){
               cout<< " "<< j+1<< " ";
            }else{
              cout<< j+1<< " ";
            }
          }
          cout<< endl;

          for(int i = 0; i < 30; i++){
            if(i+1 < 10){
              cout<< " "<< i+1<< " - ";
            }else{
              cout<< i+1<< " - ";
            }

            for(int j = 0; j < 30; j++){
              if(poltronas[i][j].sala3 == 1){
                cout<< "[X]";
              }else{
                cout<< "[ ]";
              }
            }cout<< endl;
          }

          switch(fimIJ){
            case 0:
              cout<< "";
            break;

            case 1:
              cout<< endl<< "Poltrona reservada com sucesso!"<< endl;
            break;
            
            case 2:
              cout<< endl<< "A poltrona já está ocupada. Tente outra!"<< endl;
            break;
            
            case 3:
              cout<< endl<< "Poltrona inexistente. Tente novamente."<< endl;
            break;

            case 4:
              cout<< endl<< "Opção inválida."<< endl;
            break;

            default:
              cout<< endl<< "Erro desconhecido."<< endl;
            break;
          }

          cout<< "O que deseja fazer na Sala 3?"<< endl<< endl;
          cout<< "1 - Reservar uma Poltrona"<< endl;
          cout<< "2 - Sair da sala"<< endl<< endl;
          cin >> opcaoSala;
          
          if (opcaoSala == 1){
            cout<< endl<< "Digite o número da fileira:";
            cin >>  fileira;
            cout<< endl<< "Agora digite o número da poltrona desta fileira:";
            cin >> poltrona;

            if((fileira > 0 && fileira < 31) && (poltrona > 0 && poltrona < 31)){
              if(poltronas[fileira-1][poltrona-1].sala3 == 0){
                poltronas[fileira-1][poltrona-1].sala3 = 1;
                fimIJ = 1;

              }else if(poltronas[fileira-1][poltrona-1].sala3 == 1){
                fimIJ = 2;
              }else{
                fimIJ = 3;
              }
            }
          }else if(opcaoSala == 2){
            fimSala = 1;
          }else{
            fimIJ = 4;
          }

        }while(fimSala == 0);
      break;

      case 4:
        fim = 1;
        break;
    
      default:
        cout << "Opção inválida, tente novamente";
        break;

    }
    system("cls");

  }while(fim == 0);
  cout << "Obrigada pelas suas reservas!"<< endl;

  return 0;
}