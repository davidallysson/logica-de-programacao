# Lógica de Programação

![Lógica de Programação](https://github.com/davidallysson/davidallysson.github.io/blob/master/img/logica-de-programa%C3%A7%C3%A3o.png?raw=true)

## :warning: :construction: Em Construção :construction: :warning:

Repositório contendo exercícios resolvidos de lógica de programação em diversas linguagens. Alguns links possivelmente ainda não estarão funcionando. (Encontrou algum erro ou link quebrado? abre uma issue aê!)

## Como executar os códigos (no Windows):

### 1. Em C:

  - Baixe o gcc através deste link: (http://tdm-gcc.tdragon.net/download)
  - Instale o gcc normalmente no seu computador.
  - Caminhe, no terminal, até a pasta onde o arquivo .c está localizado.
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
    - ps: geralmente se encontra em:

        “C:\Windows\Microsoft.NET\Framework64\v4.0.30319″.

    - ps²: Não esqueça de colocar o caractere ponto-e-vírgula (;) para inserir uma nova entrada na variável “PATH”.
  - Pronto! Agora é só verificar se deu certo! Abra o terminal e execute:

      ```
      $ csc
      ```

  - Se tiver dado tudo certo aparecerá algo assim:

      ```
      $ Microsoft (R) Visual C# Compiler version 4.6.1087.0 for C# 5 Copyright (C) Microsoft Corporation. All rights reserved.
      ```

  - Navegue até chegar na pasta onde o seu código C# se encontra, e execute: (essa linha de código gerará o '.exe')

      ```
      $ csc nomedoarquivo.cs
      ```

  - Agora execute:

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
    $ javac arquivo.java
    ```
  - Feito isso é só executar:
    ```
    $ java arquivo
    ```

### 4. Em Ruby:

  - Instale o Ruby no seu computador. (https://rubyinstaller.org/downloads/)
  - Abra o terminal e caminhe até a pasta onde o código se encontra.
  - Execute o seguinte comando:

        $ ruby arquivo.ruby

### 5. Em PHP:

  - Instale o XAMPP no seu computador. (https://www.apachefriends.org/pt_br/index.html)
  - Após instalado, vá até C://xampp//htdocs e ao chegar lá crie uma pasta para colocar os códigos PHP dentro.
  - Feito isso, abra o XAMPP e inicie o servidor Apache.
  - Após o servidor começar a funcionar vá até o navegador e acesse: http://localhost/nome_da_pasta_criada/nome_do_codigo.php

### 6. Em Python:

  - Instale o Python no seu computador. (https://www.python.org/downloads/)
  - Abra o terminal e caminhe até a pasta onde o código se encontra.
  - Execute o seguinte comando:

        $ python arquivo.py

## Questões Introdutórias:

### 1. Sequenciais

1 - Faça um programa que mostre a mensagem "Alo mundo" na tela.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.c) -
[C#](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.cs) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais1.rb)

2 - Faça um programa que peça um número e então mostre a mensagem: "O número informado foi {numero}."

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais2.rb)

3 - Faça um programa que peça dois números e imprima a soma.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais3.rb)

4 - Faça um programa que peça as 4 notas bimestrais e mostre a média.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais4.rb)

5 - Faça um programa que converta metros para centímetros

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais5.rb)

6 - Faça um programa que peça o raio de um círculo, calcule e mostre sua área.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais6.rb)

7 - Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais7.rb)

8 - Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais8.rb)

9 - Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9)

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais9.rb)

10 - Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais10.rb)

11 - Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
  - o produto do dobro do primeiro com metade do segundo
  - a soma do triplo do primeiro com o terceiro
  - o terceiro elevado ao cubo

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais11.rb)

12 - Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7 * altura) - 58.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais12.rb)

13 - Escreva um programa que leia um número real e faça o arredondamento para inteiro. Se a parte fracionária for maior do que 0.5 o arredondamento deve ser feito para o próximo inteiro.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.php) -
[Python](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.py) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/1%20-%20Sequenciais/sequenciais13.rb)

### 2. Condicionais

1 - Escreva um programa que leia um número e mostre se ele é igual a 10.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes1.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes1.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes1.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes1.rb)

2 - Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes2.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes2.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes2.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes2.rb)

3 - Escreva um programa que leia um número e mostre se ele é positivo.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes3.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes3.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes3.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes3.rb)

4 - Escreva um programa que leia dois números e informe se eles são iguais.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes4.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes4.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes4.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes4.rb)

5 - Escreva um programa que leia dois números e mostre o maior.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes5.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes5.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes5.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes5.rb)

6 - Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes6.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes6.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes6.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes6.rb)

7 - Escreva um programa que leia um número e mostre se ele é positivo.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes7.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes7.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes7.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes7.rb)

8 - Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes8.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes8.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes8.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes8.rb)

9 - Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra e quantas voltas ele dá. (360º = uma volta)

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes9.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes9.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes9.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes9.rb)

10 - Escreva um programa que leia dois números inteiros e informe se o maior é múltiplo do menor

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes10.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes10.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes10.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes10.rb)

11 - Escreva um programa que leia dois nomes de times de futebol, a quantidade de gols do primeiro time, a quantidade de gols do segundo time e mostre o nome do time vencedor da partida.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes11.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes11.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes11.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes11.rb)

12 - Brincadeira do ímpar ou par: escreva um programa que leia dois nomes e dois valores inteiros, que correspondem ao que cada um colocou, e informe quem ganhou o "impar ou par".

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes12.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes12.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes12.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes12.rb)

13 - Escreva um programa que leia 4 números e mostre o maior.

[C](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes13.c) -
[Java](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes13.java) -
[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes13.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/2%20-%20Condi%C3%A7%C3%B5es/condicoes13.rb)

### 3. Laços

1 - Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos1.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos1.rb)

2 - Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos2.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos2.rb)

3 - Faça um programa que leia 5 números e informe o maior número.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos3.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos3.rb)

4 - Faça um programa que leia 5 números e informe a soma e a média dos números.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos4.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos4.rb)

5 - Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos5.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos5.rb)

6 - Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos6.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/3%20-%20Laços/lacos6.rb)

### 4. Vetores

1 - Escreva um programa que leia 30 números e armazene-os em um array. Depois leia mais um número inteiro, que deve corresponder a um índice do array, e troque o primeiro elemento com o elemento do índice lido. Caso o índice não seja válido o programa deve trocar o primeiro com o último elemento. Ao final o programa deve mostrar os elementos do array, um elemento por linha.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores1.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores1.rb)

2 - Escreva um programa que leia uma matriz de inteiros 5 x 5, e mostre a linha cuja a soma dos números é a maior.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores2.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores2.rb)

3 - Escreva um programa que leia uma matriz N x M, e imprima a sua transposta.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores3.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores3.rb)

4 - Escreva um programa que leia uma matriz N x M de strings, e mostre a posição com a string de maior tamanho.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores4.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores4.rb)

5 - Dadas as matrizes:

     |  1  2  3  |     | -7 -8  9  |     |  2  3 -4  |
     | -4  5  6  |     | 12  6  5  |     |  6  7  1  |
     |  4  6  8  |     |  8  7  4  |     |  2  8  7  |
           A                 B                 C
determine a matriz D resultante da operação A + B – C.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores5.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores5.rb)

6 - São dadas as matrizes A = (aij) e B = (bij), quadradas de ordem 4, com aij = 3i + 4j e bij = – 4i – 3j. Considerando C = A + B, escreva um programa que calcule a matriz C.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores6.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/4%20-%20Vetores/vetores6.rb)

### 5. Funções

1 - Escreva uma função, chamada maior2, que retorna o maior de dois números

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes01.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes01.rb)

2 - Escreva uma função, chamada maior3, que retorna o maior de três números.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes02.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes02.rb)

3 - Escreva uma função chamada eImpar que retorna true se o número for ímpar ou false se ele não for ímpar.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes03.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes03.rb)

4 - Escreva uma função chamada fat que retorna o fatorial de um número. A função deve verificar se o parâmetro passado é inteiro e maior do que zero, caso contrário deve retornar -1.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes04.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes04.rb)

5 - Escreva uma função chamada soma_array que retorna a soma dos elementos de um array.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes05.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes05.rb)

6 - Escreva uma função, chamada media_ifrn, que recebe dois parâmetros reais e calcule a média ponderada, considerando o cálculo da média dos cursos superiores do IFRN.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes06.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes06.rb)

7 - Escreva uma função, chamada transposta_matriz, que recebe uma matriz como parâmetro e retorna sua transposta.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes07.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes07.rb)

8 - Escreva uma função, chamada ordenarArray, que recebe um array como parâmetro e retorna o array ordenado.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes08.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/5%20-%20Fun%C3%A7%C3%B5es/funcoes08.rb)

### 6. Recursividade

1 - Escreva uma função recursiva que realize a operação de divisão.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/div.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/div.rb)

2 - Escreva uma função recursiva que gere o fatorial de um número "x".

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/fatorial.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/fatorial.rb)

3 - Escreva uma função recursiva que gere a sequência fibonnaci até uma determinada posição "n" vinda por parâmetro.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/fibonnaci.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/fibonnaci.rb)

4 - Escreva uma função recursiva que retorne o resto de uma divisão inteira.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/mod.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/mod.rb)

5 - Escreva uma função recursiva que realize a operação de exponenciação.

[PHP](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/potencia.php) -
[Ruby](https://github.com/davidallysson/logica-de-programacao/blob/master/6%20-%20Recursividade/potencia.rb)

## Problemas contextualizados:

Os problemas a seguir são retirados dos seguintes sites:

* [URI](https://www.urionlinejudge.com.br)
* [UVA](uva.onlinejudge.org)
* [SPOJ.BR](http://br.spoj.com/)

### URI - Categoria Iniciante

* [1001 - Extremamente Basico](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1001%20-%20Extremamente%20B%C3%A1sico%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/ExtremamenteBasico.c)
* [1002 - Área do Círculo](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1002%20-%20%C3%81rea%20do%20C%C3%ADrculo%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/AreaDoCirculo.c)
* [1003 - Soma Simples](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1003%20-%20Soma%20Simples%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/SomaSimples.c)
* [1004 - Produto Simples](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1004%20-%20Produto%20Simples%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/ProdutoSimples.c)
* [1005 - Média 1](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1005%20-%20M%C3%A9dia%201%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/Media1.c)
* [1006 - Média 2](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1006%20-%20M%C3%A9dia%202%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/Media2.c)
* [1007 - Diferença](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/1007%20-%20Diferen%C3%A7a%20-%20URI%20Online%20Judge.pdf) => [Código](https://github.com/davidallysson/logica-de-programacao/blob/master/URI/Iniciante/Diferenca.c)
