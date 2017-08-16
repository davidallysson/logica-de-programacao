<?php

#Escreva uma função, chamada maior3, que retorna o maior de três números.

function maior3($x, $y, $z) {
  if ( ($x > $y) && ($x > $z) ) {
    return $x;
  } elseif (($y > $x) && ($y > $z)) {
    return $y;
  } else {
    return $z;
  }
}
