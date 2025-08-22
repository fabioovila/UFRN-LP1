#include <iostream>
#include <string>
#include <vector>
#include "decl.h"

using namespace std;

int main()
{
    int opcao, entradaVenda;
    string entradaFuncionario;
    bool ativo = true;
    
    vector <string> funcionarios;
    vector <int> vendas;
    
    while (ativo) {
        limparTerminal();
        showMenuInicial();
        
        cout << "Selecione a opcao desejada: ";
        cin >> opcao;
        cin.ignore();
        
        divisaoLinha();
        
        switch (opcao) {
          case 1:
            funcionarios.push_back(inserirFuncionario());
            break;
            
          case 2:
            vendas.push_back(inserirVenda());
            break;
            
          case 3:
            emitirRelatorioFuncionarios(funcionarios);
            ativo = false;
            break;
            
          case 4:
            emitirRelatorioVendas(vendas);
            ativo = false;
            break;
            
          case 0:
            limparTerminal();
            cout << "\nPrograma encerrado!\n" << endl;
            ativo = false;
            break;
            
          default:
            break;
        }
        
        divisaoLinha();
    }

    return 0;
}