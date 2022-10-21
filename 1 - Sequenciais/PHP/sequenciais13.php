<?php

#Escreva um programa que leia um número real e faça o arredondamento para inteiro.
#Se a parte fracionária for maior do que 0.5 o arredondamento deve ser feito para o próximo inteiro.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 13 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= round($_GET['num']); ?>
    <?php else: ?>
      <form action="teste.php" method="get">
        Digite um número fracionado: <input type="text" name="num"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
