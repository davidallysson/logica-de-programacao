<?php

#Faça um programa que leia 5 números e informe a soma e a média dos números.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Laços 4 - PHP</title>
  </head>
  <body>
    <?php if (empty($_GET)): ?>
      <form action="teste.php" method="get">
        Digite um número: <input type="text" name="num1"/> <br>
        Digite um número: <input type="text" name="num2"/> <br>
        Digite um número: <input type="text" name="num3"/> <br>
        Digite um número: <input type="text" name="num4"/> <br>
        Digite um número: <input type="text" name="num5"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php else: ?>
      <?php
      $soma = 0;
      $numeros = array($_GET['num1'], $_GET['num2'], $_GET['num3'], $_GET['num4'], $_GET['num5']);
      for ($indice = 0; $indice < 5; $indice++) {
        $soma += $numeros[$indice];
      }
      $media = $soma / 5;
      ?>
      <?= "A soma dos numeros é: $soma <br>"; ?>
      <?= "A média dos numeros é: $media" ; ?>
    <?php endif; ?>
  </body>
</html>
