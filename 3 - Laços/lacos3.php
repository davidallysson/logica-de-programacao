<?php

#Faça um programa que leia 5 números e informe o maior número.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Laços 3 - PHP</title>
  </head>
  <body>
    <?php if (empty($_GET)): ?>
      <form action="lacos3.php" method="get">
        Digite um número: <input type="text" name="num1"/> <br>
        Digite um número: <input type="text" name="num2"/> <br>
        Digite um número: <input type="text" name="num3"/> <br>
        Digite um número: <input type="text" name="num4"/> <br>
        Digite um número: <input type="text" name="num5"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php else: ?>
      <?php
      $maior = 0;
      $numeros = array($_GET['num1'], $_GET['num2'], $_GET['num3'], $_GET['num4'], $_GET['num5']);

      for ($indice = 0; $indice < 5; $indice++) {
        if ($numeros[$indice] > $maior) {
          $maior = $numeros[$indice];
        }
      }
      ?>
      <?= "O maior numero de todos: $maior" ; ?>
    <?php endif; ?>
  </body>
</html>
