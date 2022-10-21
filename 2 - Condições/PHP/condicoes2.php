<?php

#Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 2 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['num'] % 7 == 0): ?>
        <?= $_GET['num'] . " é multiplo de 7"; ?>
      <?php else: ?>
        <?= $_GET['num'] . " não é multiplo de 7"; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes2.php" method="get">
        Digite um número: <input type="text" name="num"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
