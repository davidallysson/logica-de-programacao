<?php

#Escreva um programa que leia 4 números e mostre o maior.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 13 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if (($_GET['num1'] >= $_GET['num2']) && ($_GET['num1'] >= $_GET['num3']) && ($_GET['num1'] >= $_GET['num4'])): ?>
        <?= "O maior número é: " . $_GET['num1']; ?>
      <?php elseif (($_GET['num2'] >= $_GET['num1']) && ($_GET['num2'] >= $_GET['num3']) && ($_GET['num2'] >= $_GET['num4'])): ?>
        <?= "O maior número é: " . $_GET['num2']; ?>
      <?php elseif (($_GET['num3'] >= $_GET['num1']) && ($_GET['num3'] >= $_GET['num2']) && ($_GET['num3'] >= $_GET['num4'])): ?>
        <?= "O maior número é: " . $_GET['num3']; ?>
      <?php elseif (($_GET['num4'] >= $_GET['num1']) && ($_GET['num4'] >= $_GET['num2']) && ($_GET['num4'] >= $_GET['num3'])): ?>
        <?= "O maior número é: " . $_GET['num4']; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes13.php" method="get">
        Digite um número: <input type="text" name="num1"/> <br>
        Digite um número: <input type="text" name="num2"/> <br>
        Digite um número: <input type="text" name="num3"/> <br>
        Digite um número: <input type="text" name="num4"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
