<?php #Faça um programa que peça o raio de um círculo, calcule e mostre sua área. ?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 6 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'A área da circunferência é de: ' . ( pow($_GET['raio'], 2)  * M_PI); ?>
    <?php else: ?>
      <form action="sequenciais6.php" method="get">
        Digite o valor do raio de um círculo: <input type="text" name="raio"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
