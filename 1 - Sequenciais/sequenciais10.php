<?php

#Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
#F = 1.80 * C + 32;

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 10 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'A temperatura, em Farenheit, é de: ' . (1.8 * $_GET['celsius'] + 32); ?>
    <?php else: ?>
      <form action="sequenciais10.php" method="get">
        Digite uma temperatura, em Celsius: <input type="text" name="celsius"/><br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
