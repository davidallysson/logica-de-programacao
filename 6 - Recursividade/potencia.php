<?php

#Escreva uma função recursiva que realize a operação de exponenciação.

function potencia($base, $exp) {
  if ($exp == 1) {
    return $base;
  } else {
    return $base * potencia($base, $exp - 1);
  }
}
