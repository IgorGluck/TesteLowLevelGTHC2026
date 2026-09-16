# Micro Core Utils

Implementação de uma versão simplificada de alguns utilitários básicos do Linux em linguagem C, desenvolvida como parte do **Teste LowLevel GTHC 2026**.

O projeto tem como objetivo praticar conceitos de programação de baixo nível

## Utilitários implementados

### `echo`

O `echo` recebe argumentos pela linha de comando e os imprime na saída padrão, separando-os por espaços.


#### Limitações

* A implementação inicial não possui todas as opções presentes no `echo` original.
* O tratamento da opção `-n` ainda precisa ser implementado.

---

### `cat`

O `cat` abre arquivos informados na linha de comando e escreve seu conteúdo na saída padrão.


#### Limitações

* A leitura atualmente é limitada ao tamanho do buffer utilizado em uma chamada de `read()`.
* Arquivos maiores que o buffer não são processados completamente em uma única leitura.
* O tratamento de múltiplos arquivos ainda precisa ser melhorado.
* O tratamento de erros pode ser aprimorado utilizando mensagens mais informativas.

---

### `wc`

O `wc` foi iniciado a partir da mesma ideia de entrada e saída utilizada no `cat`, mas utilizando o valor retornado por `read()` para realizar contagem de bytes.


#### Limitações

* A implementação ainda não reproduz completamente o comportamento do `wc` original.
* As opções `-l`, `-w` e `-c` precisam ser implementadas de forma completa.
* A contagem de palavras e linhas ainda precisa ser aprimorada.

---

### `grep`

O `grep` foi desenvolvido para praticar a busca de uma sequência de caracteres dentro do conteúdo de um arquivo.

A ideia utilizada é comparar os caracteres da palavra procurada com os caracteres presentes no buffer, sem utilizar uma implementação pronta de busca de substring.

#### Limitações

* A busca ainda está em desenvolvimento.
* A implementação não reproduz completamente o comportamento do `grep` original.
* As opções `-i`, `-n` e `-c` ainda precisam ser implementadas.
* A saída ainda precisa ser adaptada para mostrar somente as linhas que correspondem à busca.
* O tratamento de múltiplos arquivos ainda precisa ser aprimorado.

---

# Conceitos utilizados

Durante o desenvolvimento foram estudados principalmente os seguintes conceitos:

* Linguagem C
* `argc` e `argv`
* Ponteiros
* Arrays de caracteres
* Buffers
* Descritores de arquivos
* Entrada e saída de dados
* `open()`
* `read()`
* `write()`
* `close()`
* Valores de retorno de chamadas de sistema
* Tratamento básico de erros
* Compilação utilizando GCC
* Ambiente MSYS2 UCRT64
* Controle de versão utilizando Git

O projeto foi desenvolvido de forma incremental, utilizando documentação e material de estudo para compreender as chamadas de sistema antes de utilizá-las.

# Limitações gerais do projeto

Este projeto não tem como objetivo reproduzir integralmente as implementações reais das GNU Coreutils.

As implementações foram desenvolvidas como exercícios de aprendizado e, por isso, possuem diferenças e limitações em relação aos programas originais.

Entre os principais pontos que ainda podem ser aprimorados estão:

* processamento de arquivos maiores que o buffer;
* tratamento completo de `stdin`;
* tratamento do argumento `-`;
* múltiplos arquivos;
* opções de linha de comando;
* mensagens de erro mais especificas;
* códigos de retorno apropriados;

Essas limitações são conhecidas e fazem parte do estado atual do projeto.

# Melhorias futuras

Como próximos passos, podem ser implementados:

1. Processamento de arquivos de qualquer tamanho.
2. Implementação completa do `echo -n`.
3. Implementação das opções `wc -l`, `wc -w` e `wc -c`.
4. Implementação das opções `grep -i`, `grep -n` e `grep -c`.
5. Suporte à entrada padrão.
6. Suporte ao argumento `-`.
7. Melhor tratamento de múltiplos arquivos.
8. Uso de `perror()` e `errno` para mensagens de erro mais informativas.



# Material de estudo

O principal material utilizado para compreender as operações de baixo nível foi o livro:

**KERRISK, Michael. The Linux Programming Interface: A Linux and UNIX System Programming Handbook. No Starch Press, 2010.**

O livro foi utilizado principalmente como material de estudo e consulta para compreender as chamadas de sistema e os conceitos utilizados no projeto.

## Capítulos utilizados

### Capítulo 3 — System Programming Concepts

**Páginas 43–68**

---

### Capítulo 4 — File I/O: The Universal I/O Model

**Páginas 69–88**

---

### Capítulo 6 — Processes

**Páginas 113–138**

