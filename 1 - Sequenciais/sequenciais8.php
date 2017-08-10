<?php

#Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
#Calcule e mostre o total do seu salário no referido mês.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 8 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'O seu salario, em um mes, é de: ' . (($_GET['valordahora'] * $_GET['horastrabalhadas']) * $_GET['quantidadededias']); ?>
    <?php else: ?>
      <form action="sequenciais8.php" method="get">
        Digite o valor da sua hora de trabalho:  <input type="text" name="valordahora"/><br>
        Digite quantas horas voce trabalha por dia:  <input type="text" name="horastrabalhadas"/><br>
        <input type="hidden" name="quantidadededias" value="22"> <!-- estimativa de dias úteis em um mês -->
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
