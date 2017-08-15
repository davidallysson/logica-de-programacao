<?php

#Faça um programa que peça uma nota, entre zero e dez.
#Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Laços 1 - PHP</title>
  </head>
  <body>
    <?php if (empty($_GET)): ?>
      <form action="lacos1.php" method="get">
        Digite uma nota: <input type="text" name="nota"/> <input type="submit" value="Enter">
      </form>
    <?php else: ?>
      <?php if ( ($_GET['nota'] < 0) || ($_GET['nota'] > 10) ): ?>
        <form action="lacos1.php" method="get">
          Digite uma nota: <input type="text" name="nota"/> <input type="submit" value="Enter">
        </form>
        <br>
        <?= "Nota inválida!"; ?>
      <?php else: ?>
        <?= "Nota válida!"; ?>
      <?php endif; ?>
    <?php endif; ?>
  </body>
</html>
