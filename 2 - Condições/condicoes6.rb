#Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

nome1 = gets.chomp
nome2 = gets.chomp
if (nome1.length >= nome2.length)
	puts nome1
else
	puts nome2
end
