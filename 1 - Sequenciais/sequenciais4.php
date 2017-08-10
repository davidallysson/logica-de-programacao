<?php #Faça um programa que peça as 4 notas bimestrais e mostre a média. ?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 4 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'A media das notas é: ' . ( ($_GET['num1'] + $_GET['num2'] + $_GET['num3'] + $_GET['num4']) / 4); ?>
    <?php else: ?>
      <form action="sequenciais4.php" method="get">
        Digite a nota do 1° bimestre: <input type="text" name="num1"/><br>
        Digite a nota do 2° bimestre: <input type="text" name="num2"/><br>
        Digite a nota do 3° bimestre: <input type="text" name="num3"/><br>
        Digite a nota do 4° bimestre: <input type="text" name="num4"/><br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
