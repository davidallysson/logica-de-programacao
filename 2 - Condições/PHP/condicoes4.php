<?php

#Escreva um programa que leia dois números e informe se eles são iguais.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 4 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['num1'] == $_GET['num2']): ?>
        <?= "Os números são iguais."; ?>
      <?php else: ?>
        <?= "Os números são diferentes."; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes4.php" method="get">
        Digite um número: <input type="text" name="num1"/> <br>
        Digite um número: <input type="text" name="num2"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
