#Escreva um programa que leia dois números inteiros e informe se o maior é múltiplo do menor

numero1 = gets.to_i
numero2 = gets.to_i

if (numero1 >= numero2)
	puts "O número #{numero1} é maior."
	if (numero1 % numero2 == 0)
		puts "#{numero2} é múltiplo de #{numero1}."
	end
elsif (numero2 >= numero1)
	puts "O número #{numero2} é maior."
	if (numero2 % numero1 == 0)
		puts "#{numero1} é múltiplo de #{numero2}."
	end
end
