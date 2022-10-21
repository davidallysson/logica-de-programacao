<?php

#Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
#  - o produto do dobro do primeiro com metade do segundo
#  - a soma do triplo do primeiro com o terceiro
#  - o terceiro elevado ao cubo

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Sequenciais 11 - PHP</title>
  </head>
  <body>
    <?php if (!empty($_GET)): ?>
      <?= 'O produto do dobro do primeiro com metade do segundo é de: ' . ( ($_GET['num1'] * 2) * ($_GET['num2'] / 2) ); ?> <br>
      <?= 'A soma do triplo do primeiro com o terceiro é de: ' . ( ($_GET['num1'] * 3) + $_GET['num3']); ?> <br>
      <?= 'O terceiro elevado ao cubo é: ' . ( pow($_GET['num3'], 3) ); ?>
    <?php else: ?>
      <form action="sequenciais11.php" method="get">
        Digite dois numeros inteiros: <input type="text" name="num1"/> <input type="text" name="num2"/> <br>
        Digite um número real: <input type="text" name="num3"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php endif; ?>
  </body>
</html>
