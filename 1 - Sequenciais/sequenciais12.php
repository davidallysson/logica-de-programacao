<?php

#Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
#(72.7 * altura) - 58.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 12 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'Seu peso ideal seria: ' . ( ( 72.7 * $_GET['altura'] ) - 58 ) . ' quilos'; ?>
    <?php else: ?>
      <form action="sequenciais12.php" method="get">
        Digite sua altura, em metros: <input type="text" name="altura"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
