<?php

#Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
#C = (5 * (F-32) / 9)

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 9 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'A temperatura, em Celsius, é de: ' . ((5 * ($_GET['farenheit'] - 32)) / 9); ?>
    <?php else: ?>
      <form action="sequenciais9.php" method="get">
        Digite uma temperatura, em Farenheit: <input type="text" name="farenheit"/><br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
