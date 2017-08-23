<?php

# Escreva um programa que leia uma matriz N x M, e imprima a sua transposta.

$matriz = array(array(1, 2, 3), array(4, 5, 6));
$transposta = array();

echo "MATRIZ: <br>";
for ($i=0; $i < count($matriz); $i++) {
  for ($j=0; $j < count($matriz[$i]); $j++) {
    echo $matriz[$i][$j] . " ";
  }
  echo "<br>";
}

for ($i=0; $i < count($matriz); $i++) {
  for ($j=0; $j < count($matriz[$i]); $j++) {
    $transposta[$j][$i] = $matriz[$i][$j];
  }
}

echo "<br>";
echo "TRANSPOSTA: <br>";
for ($i=0; $i < count($transposta); $i++) {
  for ($j=0; $j < count($transposta[$i]); $j++) {
    echo $transposta[$i][$j] . " ";
  }
  echo "<br>";
}
