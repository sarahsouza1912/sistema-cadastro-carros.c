# Sistema de Cadastro de Veículos em C 🚗

Este é um programa de console desenvolvido em linguagem C para gerenciamento e persistência de dados de veículos. O sistema permite cadastrar carros, salvá-los em um arquivo de texto externo e realizar buscas por placa.

Projetado como uma atividade prática para exercitar conceitos de estruturas de dados e manipulação de arquivos.

## 🚀 Funcionalidades

* **Cadastrar Carro:** Registra modelo, placa, ano e preço. Os dados são salvos na memória e gravados no arquivo `cadastro.txt`.
* **Consultar Carro:** Permite buscar um veículo cadastrado utilizando a placa como chave de busca.
* **Persistência de Dados:** Gravação automática dos dados inseridos em um arquivo de texto.

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C
* **Bibliotecas Padrão:** `<stdio.h>`, `<string.h>`, `<locale.h>`

## 📁 Estrutura do Código

O projeto utiliza uma estrutura (`struct`) para definir o tipo de dado `carros`:

```c
struct carros {
    char modelo[50];
    char placa[10];
    int ano;
    float preço;
};
