<?php #Faça um programa que peça dois números e imprima a soma. ?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 3 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'A soma dos números é: ' . ($_GET['num1'] + $_GET['num2']); ?>
    <?php else: ?>
      <form action="sequenciais3.php" method="get">
        Digite um número: <input type="text" name="num1"/>
        Digite outro número: <input type="text" name="num2"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
