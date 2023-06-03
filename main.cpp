#include <iostream>
#include <string>
using namespace std;
#include "Phila.h";

int main()
{

    PILHA ph;
    Inicializar(ph);
    int opcao;
    char letra;

    do {
        cout << "1.Insira um Elemento na Phila" << endl;
        cout << "2.Remover Elemento na Phila" << endl;
        cout << "3.Mostrar phila" << endl;
        cout << "0.Sair do Programa" << endl;
        cin >> opcao;

        switch (opcao) {

            case 1:
                cout << "Insira a letra desajada na Phila" << endl;
                cin >> letra;

                if (InserirPilha(ph, letra))
                    cout << "Inserido com Sucesso" << endl;
                else
                    cout << "Letra não inserida" << endl;
                break;

            case 2:

                if (DeletarPhila(ph))
                    cout << "Retirado com Sucesso" << endl;
                else
                    cout << "Letra nao Retirada" << endl;
                break;

            case 3:
                MostrarPhila(ph);
                break;
        }

    } while (opcao != 0);

    return 0;
}
