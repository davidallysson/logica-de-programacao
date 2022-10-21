#Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
#(72.7 * altura) - 58.

puts "Digite sua altura: "
altura = gets.to_f
pesoideal = (72.7 * altura) - 58
puts "O seu peso ideal deve ser: #{pesoideal}"
