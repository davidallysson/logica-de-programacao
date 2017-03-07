#Escreva um programa que leia uma matriz de inteiros 5 x 5, e mostre a linha cuja a soma dos números é a maior.

matriz = []
soma_linha = []

5.times do
    matriz << []
end

#Ler matriz 5x5
for i in 0..matriz.size - 1 do
  for j in 0..matriz.size - 1 do
    matriz[i][j] = gets.to_i
  end
end

#Somar todas as linhas
for i in 0..matriz.size - 1 do
  soma_linha[i] = 0
  for j in 0..matriz.size - 1 do
    soma_linha[i] += matriz[i][j]
  end
end

#Descobrir a maior linha
indiceDoMaior = 0
for i in 1..soma_linha.size - 1 do
  if(soma_linha[i] > soma_linha[indiceDoMaior])
    indiceDoMaior = i
  end
end

#Exibir a maior linha
for i in 0..matriz.size - 1 do
  print "#{matriz[indiceDoMaior][i]} "
end
print "\n"
