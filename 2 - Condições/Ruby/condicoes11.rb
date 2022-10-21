#Escreva um programa que leia dois nomes de times de futebol, a quantidade de gols do primeiro time, a quantidade de gols do segundo time e mostre o nome do time vencedor da partida.

puts "Escreva o nome do primeiro time: "
nome1 = gets.chomp
puts "Escreva o número de gols do primeiro time: "
gols1 = gets.to_i
puts "Escreva o nome do segundo time: "
nome2 = gets.chomp
puts "Escreva o número de gols do segundo time: "
gols2 = gets.to_i

if(gols1 > gols2)
	puts "O time vencedor é o: #{nome1}"
elsif (gols1 == gols2)
	puts "Deu empate"
else
	puts "O time vencedor é o: #{nome2}"
end
