<?php

#Escreva um programa que leia dois números e mostre o maior.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 5 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['num1'] > $_GET['num2']): ?>
        <?= $_GET['num1'] . " é maior."; ?>
      <?php else: ?>
        <?= $_GET['num2'] . " é maior."; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes5.php" method="get">
        Digite um número: <input type="text" name="num1"/> <br>
        Digite um número: <input type="text" name="num2"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
