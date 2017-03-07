#Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
#C = (5 * (F-32) / 9)

puts "Digite uma temperatura, em Farenheit: "
farenheit = gets.to_f
celsius = (5 * (farenheit - 32)) / 9
puts "A temperatura, em Celsius, é de: #{celsius}°C"
