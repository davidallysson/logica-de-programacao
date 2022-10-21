#Brincadeira do ímpar ou par: escreva um programa que leia dois nomes e dois valores inteiros, que correspondem ao que cada um colocou, e informe quem ganhou o "impar ou par".

puts "Digite o nome do primeiro jogador:"
nome1 = gets.chomp
puts "Digite o nome do segundo jogador:"
nome2 = gets.chomp

puts "Digite o número de dedos do primeiro jogador:"
mao1 = gets.to_i
puts "Digite o número de dedos do segundo jogador:"
mao2 = gets.to_i

if( (mao1 + mao2) % 2 == 1)
	puts "O jogador vencedor é: #{nome1}"
else
	puts "O jogador vencedor é: #{nome2}"
end
