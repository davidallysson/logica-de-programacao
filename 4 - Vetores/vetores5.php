<?php

#Dadas as matrizes:
#
#     |  1  2  3  |     | -7 -8  9  |     |  2  3 -4  |
# A = | -4  5  6  | B = | 12  6  5  | C = |  6  7  1  |
#     |  4  6  8  |     |  8  7  4  |     |  2  8  7  |
#
#determine a matriz D resultante da operação A + B – C.

$a = array(array(1, 2, 3), array(-4, 5, 6), array(4, 6, 8));
$b = array(array(-7, -8, 9), array(12, 6, 5), array(8, 7, 4));
$c = array(array(2, 3, -4), array(6, 7, 1), array(2, 8, 7));
$d = array();

for ($i = 0; $i < count($a); $i++) {
  for ($j = 0; $j < count($a); $j++) {
    $d[$i][$j] = $a[$i][$j] + $b[$i][$j] - $c[$i][$j];
  }
}

for ($i = 0; $i < count($d); $i++) {
  for ($j = 0; $j < count($d); $j++) {
    echo $d[$i][$j] . " ";
  }
  echo "<br>";
}
