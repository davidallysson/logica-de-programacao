<?php

#Escreva um programa que leia uma matriz N x M de strings, e mostre a posição com a string de maior tamanho.

$indiceMaior = "";
$tamanhoDaMaiorString = 0;
$matriz = array(array("Josh", "David", "Mandy"),
                array("Marcus", "Dave", "Thomas"),
                array("Edward", "Thompson", "Samantha"));

foreach ($matriz as $i => $array) {
  foreach ($array as $j => $elemento) {
    echo $elemento . " ";
    $tamanhoDaString = strlen($elemento);
    if ($tamanhoDaString > $tamanhoDaMaiorString) {
      $tamanhoDaMaiorString = $tamanhoDaString;
      $indiceMaior = "[$i][$j]";
    }
  }
  echo "<br>";
}
echo "<br>";
echo "O índice da maior String é: $indiceMaior";
