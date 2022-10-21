#Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
#  - o produto do dobro do primeiro com metade do segundo
#  - a soma do triplo do primeiro com o terceiro
#  - o terceiro elevado ao cubo

puts "Digite dois numeros inteiros: "
n1 = gets.to_i
n2 = gets.to_i
puts "Digite um número real: "
n3 = gets.to_f
puts "O produto do dobro do primeiro com metade do segundo é: #{(n1 * 2) * (n2 / 2)}"
puts "A soma do triplo do primeiro com o terceiro é: #{(n1 * 3) + n3}"
puts "O terceiro elevado ao cubo é: #{n3 ** 3}"
