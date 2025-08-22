#pragma once

#include <string>
#include <vector>

void divisaoLinha();

void limparTerminal();

void showMenuInicial();

void emitirRelatorioFuncionarios(const std::vector<std::string>& funcionarios);

void emitirRelatorioVendas(const std::vector<int>& vendas);

std::string inserirFuncionario();

int inserirVenda();