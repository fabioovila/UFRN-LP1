#include <iostream>
#include <string>
#include <vector>
#include "decl.h"

using namespace std;

void divisaoLinha() {
    cout << "-------------------------------\n";
}

void limparTerminal() {
    cout << "\033[2J\033[1;1H";
    divisaoLinha();
}

void showMenuInicial() { 
    cout << "[1] - Inserir Funcionario\n[2] - Inserir Venda\n";
    cout << "[3] - Imprimir Relatorio de Funcionarios\n[4] - Imprimir Relatorio de Vendas\n[0] - Sair" << endl;
    divisaoLinha();
}

void emitirRelatorioFuncionarios(const std::vector<std::string>& funcionarios) {
    limparTerminal();

    int i = 1;
    cout << "\n++RELACAO DE FUNCIONARIOS++\n" << endl;
    
    for (const string& func : funcionarios) {
        cout << "[" << i << "] - " << func << "\n";
        ++i;
    }
    
    cout << endl;
}

void emitirRelatorioVendas(const std::vector<int>& vendas) {
    limparTerminal();

    int i = 1, totalVendas = 0;
    cout << "\n++RELACAO DE VENDAS++\n" << endl;
    
    for (const int& venda : vendas) {
        cout << "[" << i << "] - " << venda << ",00\n";
        totalVendas += venda;
        ++i;
    }
    
    cout << "\nTOTAL DE VENDAS = R$ " << totalVendas << ",00\n" << endl;
}

string inserirFuncionario() {
    string txt;
    
    cout << "Insira o nome do funcionario: ";
    getline(cin,txt);
    
    return txt;
}

int inserirVenda() {
    int n;
    
    cout << "Insira o valor da venda: ";
    cin >> n;
    cin.ignore();
    
    return n;
}