<?php

#Escreva uma função, chamada transposta_matriz, que recebe uma matriz como
#parâmetro e retorna sua transposta.

function transposta_matriz($matriz) {
  $transposta;
  for ($i=0; $i < count($matriz); $i++) {
    for ($j=0; $j < count($matriz[$i]); $j++) {
      $transposta[$j][$i] = $matriz[$i][$j];
    }
  }
  return $transposta;
}

#Declarando uma matriz exemplo
$minhaMatriz = array(
  array(1, 3, 4, 7),
  array(5, 2, 12, 9)
);

#Transpondo matriz
$novaMatriz = transposta_matriz($minhaMatriz);

#Exibindo nova matriz
for ($i=0; $i < count($novaMatriz); $i++) {
  for ($j=0; $j < count($novaMatriz[$i]); $j++) {
    echo $novaMatriz[$i][$j] . " ";
  }
  echo "<br>";
}
