#Escreva um programa que leia um número e mostre se ele é positivo.

numero = gets.to_i
if (numero >= 0)
	puts "O numero #{numero} é positivo."
else
	puts "O numero #{numero} é negativo."
end
