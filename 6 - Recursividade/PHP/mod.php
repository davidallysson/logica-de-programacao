<?php

#Escreva uma função recursiva que retorne o resto de uma divisão inteira.

function mod($x, $y) {
  if ($x < $y) {
    return $x;
  }
  elseif ($x - $y < $y) {
    return $x - $y;
  }
  else {
    return mod($x - $y, $y);
  }
}
