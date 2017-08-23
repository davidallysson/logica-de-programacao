<?php

#Escreva um programa que leia 30 números e armazene-os em um array. Depois leia
#mais um número inteiro, que deve corresponder a um índice do array, e troque o
#primeiro elemento com o elemento do índice lido. Caso o índice não seja válido
#o programa deve trocar o primeiro com o último elemento. Ao final o programa
#deve mostrar os elementos do array, um elemento por linha.

$array = array(8, 4, 12, 28, 26, 15, 30, 59, 47, 2, 5, 13, 65, 22, 19, 1, 3, 16, 7, 21, 33, 39, 42, 10, 27, 51, 17, 44, 31, 35);

echo "Meu Array: <br> <br>";
for ($i=0; $i < count($array); $i++) {
  echo "$array[$i] ";
}

$indiceDoElemento = 4;
echo "<br> <br> Índice do elemento a ser trocado: $indiceDoElemento <br>";

$aux = $array[0];
$array[0] = $array[$indiceDoElemento];
$array[$indiceDoElemento] = $aux;

echo "<br> <br>";
echo "Novo Array: <br> <br>";
for ($i=0; $i < count($array); $i++) {
  echo "$array[$i] ";
}
