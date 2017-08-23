<?php

#Escreva uma função recursiva que gere o fatorial de um número "x".

function fat($x) {
  if ($x < 0 && x % 1 != 0) {
    return -1;
  } elseif ($x == 1) {
    return 1;
  } else {
    return $x * fat($x - 1);
  }
}
