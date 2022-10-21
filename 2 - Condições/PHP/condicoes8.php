<?php

#Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Condicionais 8 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?php if ($_GET['angulo'] <= 90): ?>
        <?= "O ângulo está no primeiro quadrante"; ?>
      <?php elseif ($_GET['angulo'] > 90 && $_GET['angulo'] <= 180): ?>
        <?= "O ângulo está no segundo quadrante"; ?>
      <?php elseif ($_GET['angulo'] > 180 && $_GET['angulo'] <= 270): ?>
        <?= "O ângulo está no terceiro quadrante"; ?>
      <?php elseif ($_GET['angulo'] > 270 && $_GET['angulo'] <= 360): ?>
        <?= "O ângulo está no quarto quadrante"; ?>
      <?php endif; ?>
    <?php else: ?>
      <form action="condicoes8.php" method="get">
        Digite um ângulo, em graus: <input type="text" name="angulo"/>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
