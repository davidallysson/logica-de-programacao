#Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

puts "Digite o tamanho do lado de um quadrado: "
lado = gets.to_f
area = lado ** 2
puts "O dobro da área é de: #{area ** 2}"
