#Escreva um programa que leia um número real e faça o arredondamento para inteiro.
#Se a parte fracionária for maior do que 0.5 o arredondamento deve ser feito para o próximo inteiro.

puts "Digite um número fracionado: "
numero = gets.to_f
puts "#{numero.round}"
