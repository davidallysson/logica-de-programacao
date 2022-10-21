<?php

#Escreva um programa que leia dois nomes de times de futebol, a quantidade de gols do primeiro time, a quantidade de gols do segundo time e mostre o nome do time vencedor da partida.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 11 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if($_GET['gols1'] > $_GET['gols2']): ?>
        <?= "O time vencedor é o " . $_GET['time1']; ?>
      <?php elseif($_GET['gols1'] == $_GET['gols2']): ?>
        <?= "O placar deu empate" ?>
      <?php else: ?>
        <?= "O time vencedor é o " . $_GET['time2']; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes11.php" method="get">
        Digite o nome do primeiro time: <input type="text" name="time1"/> <br>
        Digite o número de gols: <input type="text" name="gols1"/> <br>
        Digite o nome do segundo time: <input type="text" name="time2"/> <br>
        Digite o número de gols: <input type="text" name="gols2"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
