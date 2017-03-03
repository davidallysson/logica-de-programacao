#Escreva um programa que leia uma matriz N x M de strings, e mostre a posição com a string
#de maior tamanho.

matriz = []

puts "Digite quantas linhas a matriz terá: "
linhas = gets.to_i

puts "Digite quantas colunas a matriz terá: "
colunas = gets.to_i

for i in 0..linhas - 1 do
  matriz << []
  for j in 0..colunas - 1 do
    matriz[i][j] = gets.chomp
  end
end

linhaDaMaior = 0
colunaDaMaior = 0
for i in 0..linhas - 1 do
  for j in 0..colunas - 1 do
    if(matriz[i][j].size > matriz[linhaDaMaior][colunaDaMaior].size)
      linhaMaiorString = i
      colunaMaiorString = j
    end
  end
end

puts matriz[linhaMaiorString][colunaMaiorString]
