<?php

#Brincadeira do ímpar ou par: escreva um programa que leia dois nomes e dois valores inteiros, que correspondem ao que cada um colocou, e informe quem ganhou o "impar ou par".

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 12 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ( ($_GET['dedos1'] + $_GET['dedos2']) % 2 == 1): ?>
        <?= "O jogador vencedor é: " . $_GET['nome1']; ?>
      <?php else: ?>
        <?= "O jogador vencedor é: " . $_GET['nome2']; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes12.php" method="get">
        Digite o nome do primeiro jogador: <input type="text" name="nome1"/> <br>
        Digite o nome do segundo jogador: <input type="text" name="nome2"/> <br>
        Digite o número de dedos do primeiro jogador: <input type="text" name="dedos1"/> <br>
        Digite o número de dedos do segundo jogador: <input type="text" name="dedos2"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
