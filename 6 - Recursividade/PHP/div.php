<?php

#Escreva uma função recursiva que realize a operação de divisão.

function div($x, $y) {
  if ($x < $y) {
    return 0;
  } elseif ($x - $y < $y) {
    return 1;
  } else {
    return 1 + div($x - $y, $y);
  }
}
