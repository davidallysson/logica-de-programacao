<?php

#Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário,
#mostrando uma mensagem de erro e voltando a pedir as informações.

?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Laços 2 - PHP</title>
  </head>
  <body>
    <?php if (empty($_GET)): ?>
      <form action="lacos2.php" method="get">
        Digite seu usuário: <input type="text" name="user"/> <br>
        Digite sua senha: <input type="password" name="pass"/> <br>
        <input type="submit" value="Enter">
      </form>
    <?php else: ?>
      <?php if ($_GET['user'] == $_GET['pass']): ?>
        <form action="lacos2.php" method="get">
          Digite seu usuário: <input type="text" name="user"/> <br>
          Digite sua senha: <input type="password" name="pass"/> <br>
          <input type="submit" value="Enter">
        </form>
        <br>
        <?= "Usuário e Senha não podem ser iguais."; ?>
      <?php else: ?>
        <?= "Bem-vindo " . $_GET['user']; ?>
      <?php endif; ?>
    <?php endif; ?>
  </body>
</html>
