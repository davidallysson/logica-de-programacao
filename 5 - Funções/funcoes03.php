<?php

#Escreva uma função chamada eImpar que retorna true se o número for ímpar ou false se
#ele não for ímpar.

function eImpar($x) {
  if ($x % 2 == 1) {
    return "true";
  } else {
    return "false";
  }
}
