<?php

#Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 6 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ( strlen($_GET['nome1']) > strlen($_GET['nome2']) ): ?>
        <?= $_GET['nome1'] . " é maior."; ?>
      <?php else: ?>
        <?= $_GET['nome2'] . " é maior."; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes6.php" method="get">
        Digite um nome: <input type="text" name="nome1"/> <br>
        Digite outro nome: <input type="text" name="nome2"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
