#Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

numero = gets.to_i
if (numero % 7 == 0)
	puts "#{numero} é múltiplo de 7."
else
	puts "#{numero} não é múltiplo de 7."
end
