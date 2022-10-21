<?php

#Escreva um programa que leia uma matriz de inteiros 5 x 5, e mostre a linha cuja a soma dos números é a maior.

$somaLinhaMaior = $somaLinhaAtual = 0;
$indiceDaLinhaMaior = 0;
$matriz = array(array(1, 2, 3, 4, 5),
                array(1, 2, 3, 4, 6),
                array(1, 2, 3, 4, 9),
                array(1, 2, 3, 4, 7),
                array(1, 2, 3, 4, 8));

for ($i = 0; $i < count($matriz); $i++) {
  echo "Linha $i: ";
  for ($j = 0; $j < count($matriz[$i]); $j++) {
    echo $matriz[$i][$j] . " ";
    $somaLinhaAtual += $matriz[$i][$j];
  }
  echo " = $somaLinhaAtual";
  if ($somaLinhaMaior < $somaLinhaAtual) {
    $somaLinhaMaior = $somaLinhaAtual;
    $indiceDaLinhaMaior = $i;
  }
  $somaLinhaAtual = 0;
  echo "<br>";
}

echo "<br> A linha cuja soma dos números é maior é a linha $indiceDaLinhaMaior.";
