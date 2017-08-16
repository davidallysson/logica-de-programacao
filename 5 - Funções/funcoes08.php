<?php

#Escreva uma função, chamada ordenarArray, que recebe um array como parâmetro
#e retorna o array ordenado.

function ordenarArray($array) {
  do {
    $trocado = false;
    for ($i = 0; $i < count($array) - 1; $i++) {
      if ($array[$i] > $array[$i+1]) {
        $aux = $array[$i];
        $array[$i] = $array[$i+1];
        $array[$i+1] = $aux;
        $trocado = true;
      }
    }

  } while ($trocado);
  return $array;
}

$meuArray = ordenarArray( array(5, 2, 12, 9) );

for ($i=0; $i < count($meuArray); $i++) {
  echo $meuArray[$i] . " ";
}
