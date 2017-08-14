<?php

#Escreva um programa que leia um número e mostre se ele é positivo.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 7 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['num'] >= 0): ?>
        <?= $_GET['num'] . " é positivo."; ?>
      <?php else: ?>
        <?= $_GET['num'] . " é negativo."; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes7.php" method="get">
        Digite um número: <input type="text" name="num"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
