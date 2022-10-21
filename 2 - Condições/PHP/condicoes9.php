<?php

#Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra e quantas voltas ele dá. (360º = uma volta)

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 9 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php
        $voltas = floor($_GET['angulo'] / 360); #arredonda o valor para menos.
        $angulo = $_GET['angulo'] % 360;
      ?>
      <?php if ($_GET['angulo'] <= 90): ?>
        <?php $quadrante = 1; ?>
      <?php elseif ($_GET['angulo'] > 90 && $_GET['angulo'] <= 180): ?>
        <?php $quadrante = 2; ?>
      <?php elseif ($_GET['angulo'] > 180 && $_GET['angulo'] <= 270): ?>
        <?php $quadrante = 3; ?>
      <?php elseif ($_GET['angulo'] > 270 && $_GET['angulo'] <= 360): ?>
        <?php $quadrante = 4; ?>
      <?php endif; ?>
      <?= "Angulo: " . $angulo . "<br> Quadrante: " . $quadrante . "<br> Número de voltas: " . $voltas; ?>
    <?php else: ?>
      <form action="condicoes9.php" method="get">
        Digite um ângulo, em graus: <input type="text" name="angulo"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
