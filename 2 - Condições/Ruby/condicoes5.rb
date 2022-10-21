#Escreva um programa que leia dois números e mostre o maior.

numero1 = gets.to_i
numero2 = gets.to_i
if (numero1 >= numero2)
	puts "O número #{numero1} é maior."
else
	puts "O número #{numero2} é maior."
end
