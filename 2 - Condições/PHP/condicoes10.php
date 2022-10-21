<?php

#Escreva um programa que leia dois números inteiros e informe se o maior é múltiplo do menor

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 10 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['num1'] >= $_GET['num2']): ?>
        <?= "O número " . $_GET['num1'] . " é maior."; ?>
        <?php if ($_GET['num1'] % $_GET['num2'] == 0): ?>
          <?= "O número " . $_GET['num2'] . " é multiplo de " . $_GET['num1']; ?>
        <?php endif; ?>
      <?php else: ?>
        <?= "O número " . $_GET['num2'] . " é maior."; ?>
        <?php if ($_GET['num2'] % $_GET['num1'] == 0): ?>
          <?= "O número " . $_GET['num1'] . " é multiplo de " . $_GET['num2']; ?>
        <?php endif; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes10.php" method="get">
        Digite um numero: <input type="text" name="num1"/> <br>
        Digite um numero: <input type="text" name="num2"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
