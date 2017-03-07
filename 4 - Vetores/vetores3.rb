# Escreva um programa que leia uma matriz N x M, e imprima a sua transposta.

matriz = []
transposta = []

puts "Digite a quantidade de linhas da matriz: "
linhas = gets.to_i

linhas.times do
    matriz << []
    transposta << []
end

for l in 0..matriz.size - 1 do
	for c in 0..matriz.size - 1 do
		matriz[l][c] = gets.to_i
	end
end

print "#{matriz}\n\n"

for l in 0..matriz.size - 1 do
	for c in 0..matriz.size - 1 do
		transposta[c][l] = matriz[l][c]
	end
end

print "#{transposta}"
