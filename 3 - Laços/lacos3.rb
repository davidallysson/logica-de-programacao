#Faça um programa que leia 5 números e informe o maior número.

maior = 0
for i in 1..5 do
  num = gets.to_i
  maior = num if num > maior
end
puts "O maior dos cinco números é: #{maior}"
