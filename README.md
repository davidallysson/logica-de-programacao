# Lógica de Programação

Repositório - :warning: :construction: em construção :construction: :warning: - contendo exercícios resolvidos de lógica de programação em diversas linguagens. Alguns links possivelmente ainda não estarão funcionando.

## Como executar os códigos no Windows

### 1. Em C:

  - Baixe o gcc através deste link: (http://tdm-gcc.tdragon.net/download)
  - Instale o gcc normalmente no seu computador.
  - Caminhe até a pasta onde o arquivo .c está localizado.
  - Ao chegar na pasta, compile o código da questão:

      ```
      $ gcc -o teste arquivo.c
      ```

  - Feito isso é só executar:

      ```
      $ teste
      ```

  - ps: o nome "teste" pode ser alterado para qualquer nome.


### 2. Em C#:

  - Configure as variáveis de ambiente para que os código em C# possa ser compilado e executado no terminal:
  - Em Computador (ou Meu Computador), clique em "Configurações Avançadas do Sistema" e depois na aba "Avançado".
  - Clique no botão "Variáveis de Ambiente", procure pela variável PATH e clique em "Editar".
  - Adicione, no final da variável PATH, o diretório em que o compilador do C# se encontra.
  - ps: geralmente se encontra em: “C:\Windows\Microsoft.NET\Framework64\v4.0.30319″.
  - ps²: Não esqueça de colocar o caractere ponto-e-vírgula (;) para inserir uma nova entrada na variável “PATH”.
  - Pronto! Agora é só verificar se deu certo! Abra o terminal e execute:

      ```
      $ csc
      ```

  - Se tiver dado tudo certo aparecerá algo assim:

      ```
      $ Microsoft (R) Visual C# Compiler version 4.6.1087.0 for C# 5 Copyright (C) Microsoft Corporation. All rights reserved.
      ```

  - Navegue até chegar na pasta onde o seu código C# se encontra, e execute:

      ```
      $ csc nomedoarquivo.cs
      ```

  - Essa linha de código gerará o '.exe'. Agora execute:

      ```
      $ nomedoarquivo.exe
      ```


### 3. Em Java:

  - Instale o JDK e o JRE no seu computador. (http://www.oracle.com/technetwork/java/javase/downloads/index.html)
  - Configure as variáveis de ambiente para que os comandos java possam ser utilizados no terminal:
    - Em Computador (ou Meu Computador), clique em "Configurações Avançadas do Sistema" e depois na aba "Avançado".
    - Clique no botão "Variáveis de Ambiente" e depois crie uma nova variável do sistema.
    - O nome da variável será "JAVA_HOME" e o seu valor será o caminho até o JDK instalado. Ex: “C:/Arquivos de programas/Java/jdk1.5.0_05”.
    - Clique em OK e crie novamente outra variável de ambiente.
    - Nomeei ela com "CLASSPATH" e adicione este valor: (se houver algo no CLASSPATH coloque ';' e adicione este conteúdo após o sinal).
    ```
    ;%JAVA_HOME%\lib;%JAVA_HOME%\lib\tools.jar;%JAVA_HOME%\lib\dt.jar;%JAVA_HOME%\lib\htmlconverter.jar;%JAVA_HOME%\jre\lib;%JAVA_HOME%\jre\lib\rt.jar;
    ```
    - Clique em OK e depois procure por "PATH" nas variáveis de ambiente e clique em "Editar".
    - Adicione este conteúdo à variável:
    ```
    $ ;%JAVA_HOME%\bin
    ```
    - Clique em OK e feche todas as janelas.
  - Abra o terminal e caminhe até a pasta onde o código se encontra.
  - Ao chegar na pasta digite:
    ```
    javac arquivo.java
    ```
  - Feito isso é só executar:
    ```
    java arquivo
    ```

### 4. Em Ruby:

  - Instale o Ruby no seu computador. (https://rubyinstaller.org/downloads/)
  - Caminhe até a pasta onde o código se encontra.
  - Execute o seguinte comando:

        $ ruby arquivo.ruby

## Sequenciais

1 - Faça um programa que mostre a mensagem "Alo mundo" na tela.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.c)
[C#](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.cs)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.rb)

2 - Faça um programa que peça um número e então mostre a mensagem: "O número informado foi {numero}."

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.rb)

3 - Faça um programa que peça dois números e imprima a soma.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.rb)

4 - Faça um programa que peça as 4 notas bimestrais e mostre a média.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.rb)

5 - Faça um programa que converta metros para centímetros

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.rb)

6 - Faça um programa que peça o raio de um círculo, calcule e mostre sua área.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.rb)

7 - Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.rb)

8 - Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.rb)

9 - Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9)

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.rb)

10 - Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.rb)

11 - Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
  - o produto do dobro do primeiro com metade do segundo
  - a soma do triplo do primeiro com o terceiro
  - o terceiro elevado ao cubo

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.rb)

12 - Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7 * altura) - 58.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.rb)

13 - Escreva um programa que leia um número real e faça o arredondamento para inteiro. Se a parte fracionária for maior do que 0.5 o arredondamento deve ser feito para o próximo inteiro.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.c)
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.java)
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.php)
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.py)
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.rb)

## Condicionais

1 - Escreva um programa que leia um número e mostre se ele é igual a 10.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes1.rb)

2 - Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes2.rb)

3 - Escreva um programa que leia um número e mostre se ele é positivo.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes3.rb)

4 - Escreva um programa que leia dois números e informe se eles são iguais.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes4.rb)

5 - Escreva um programa que leia dois números e mostre o maior.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes5.rb)

6 - Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes6.rb)

7 - Escreva um programa que leia um número e mostre se ele é positivo.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes7.rb)

8 - Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes8.rb)

9 - Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra e quantas voltas ele dá. (360º = uma volta)

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes9.rb)

10 - Escreva um programa que leia dois números inteiros e informe se o maior é múltiplo do menor

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes10.rb)

11 - Escreva um programa que leia dois nomes de times de futebol, a quantidade de gols do primeiro time, a quantidade de gols do segundo time e mostre o nome do time vencedor da partida.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes11.rb)

12 - Brincadeira do ímpar ou par: escreva um programa que leia dois nomes e dois valores inteiros, que correspondem ao que cada um colocou, e informe quem ganhou o "impar ou par".

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes12.rb)

13 - Escreva um programa que leia 4 números e mostre o maior.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes13.rb)

## Laços

1 - Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos1.rb)

2 - Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos2.rb)

3 - Faça um programa que leia 5 números e informe o maior número.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos3.rb)

4 - Faça um programa que leia 5 números e informe a soma e a média dos números.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos4.rb)

5 - Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos5.rb)

6 - Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos6.rb)

## Vetores

1 - Escreva um programa que leia 30 números e armazene-os em um array. Depois leia mais um número inteiro, que deve corresponder a um índice do array, e troque o primeiro elemento com o elemento do índice lido. Caso o índice não seja válido o programa deve trocar o primeiro com o último elemento. Ao final o programa deve mostrar os elementos do array, um elemento por linha.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores1.rb)

2 - Escreva um programa que leia uma matriz de inteiros 5 x 5, e mostre a linha cuja a soma dos números é a maior.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores2.rb)

3 - Escreva um programa que leia uma matriz N x M, e imprima a sua transposta.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores3.rb)

4 - Escreva um programa que leia uma matriz N x M de strings, e mostre a posição com a string de maior tamanho.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores4.rb)

5 - Dadas as matrizes:

     |  1  2  3  |     | -7 -8  9  |     |  2  3 -4  |
     | -4  5  6  |     | 12  6  5  |     |  6  7  1  |
     |  4  6  8  |     |  8  7  4  |     |  2  8  7  |
           A                 B                 C
determine a matriz D resultante da operação A + B – C.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores5.rb)

6 - São dadas as matrizes A = (aij) e B = (bij), quadradas de ordem 4, com aij = 3i + 4j e bij = – 4i – 3j. Considerando C = A + B, escreva um programa que calcule a matriz C.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores6.rb)

## Funções

1 - Escreva uma função, chamada maior2, que retorna o maior de dois números

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes01.rb)

2 - Escreva uma função, chamada maior3, que retorna o maior de três números.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes02.rb)

3 - Escreva uma função chamada eImpar que retorna true se o número for ímpar ou false se ele não for ímpar.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes03.rb)

4 - Escreva uma função chamada fat que retorna o fatorial de um número. A função deve verificar se o parâmetro passado é inteiro e maior do que zero, caso contrário deve retornar -1.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes04.rb)

5 - Escreva uma função chamada soma_array que retorna a soma dos elementos de um array.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes05.rb)

6 - Escreva uma função, chamada media_ifrn, que recebe dois parâmetros reais e calcule a média ponderada, considerando o cálculo da média dos cursos superiores do IFRN.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes06.rb)

7 - Escreva uma função, chamada transposta_matriz, que recebe uma matriz como parâmetro e retorna sua transposta.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes07.rb)

8 - Escreva uma função, chamada ordenarArray, que recebe um array como parâmetro e retorna o array ordenado.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes08.rb)

## Recursividade

1 - Escreva uma função recursiva que realize a operação de divisão.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/div.rb)

2 - Escreva uma função recursiva que gere o fatorial de um número "x".

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/fatorial.rb)

3 - Escreva uma função recursiva que gere a sequência fibonnaci até uma determinada posição "n" vinda por parâmetro.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/fibonnaci.rb)

4 - Escreva uma função recursiva que retorne o resto de uma divisão inteira.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/mod.rb)

5 - Escreva uma função recursiva que realize a operação de exponenciação.

[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/potencia.rb)
