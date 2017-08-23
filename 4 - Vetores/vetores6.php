<?php

#São dadas as matrizes A = (aij) e B = (bij), quadradas de ordem 4, com aij = 3i + 4j e
#bij = – 4i – 3j. Considerando C = A + B, escreva um programa que calcule a matriz C.

$a = array();
$b = array();
$c = array();

for ($i = 0; $i < 4; $i++) {
  for ($j = 0; $j < 4; $j++) {
    $a[$i][$j] = (3 * $i) + (4 * $j);
    $b[$i][$j] = (-4 * $i) - (3 * $j);
    $c[$i][$j] = $a[$i][$j] + $b[$i][$j];
  }
}

for ($i = 0; $i < 4; $i++) {
  for ($j = 0; $j < 4; $j++) {
    echo $c[$i][$j] . " ";
  }
  echo "<br>";
}
