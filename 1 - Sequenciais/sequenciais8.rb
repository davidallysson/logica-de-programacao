#Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
#Calcule e mostre o total do seu salário no referido mês.

puts "Qual o valor da sua hora de trabalho?"
valordahora = gets.to_f
puts "Quantas horas você trabalha por dia?"
horastrabalhadas = gets.to_i
quantidadededias = 22 #estimativa de dias úteis em um mês
puts "O seu salário no mês é de: #{ (valordahora * horastrabalhadas) * quantidadededias}"
