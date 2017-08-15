<?php

#Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10.
#O usuário deve informar de qual numero ele deseja ver a tabuada.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Laços 6 - PHP</title>
  </head>
  <body>
    <?php if (empty($_GET)): ?>
      <form action="lacos6.php" method="get">
        Digite um número: <input type="text" name="num"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php else: ?>
      <?php
      for ($indice = 0; $indice <= 10; $indice++) {
        echo $_GET['num'] . " X $indice = " . ($_GET['num'] * $indice) . "<br>";
      }
      ?>
    <?php endif; ?>
  </body>
</html>
