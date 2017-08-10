<?php #Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário. ?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 7 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'O dobro da área do quadrado é de: ' . ( pow($_GET['lado'], 2)  * 2); ?>
    <?php else: ?>
      <form action="sequenciais7.php" method="get">
        Digite o valor da lateral do quadrado: <input type="text" name="lado"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
