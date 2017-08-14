<?php

#Escreva um programa que leia um número e mostre se ele é igual a 10.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 1 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['num'] == 10): ?>
        <?= "O valor é igual a 10"; ?>
      <?php else: ?>
        <?= "O valor é diferente de 10"; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes1.php" method="get">
        Digite um número: <input type="text" name="num"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
