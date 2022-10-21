<?php

#Escreva uma função chamada soma_array que retorna a soma dos elementos de um array.

function soma_array($array) {
  $somaDosElementos = 0;
  foreach ($array as $indice => $elemento) {
    $somaDosElementos += $elemento;
  }
  return $somaDosElementos;
}
