#Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra e quantas voltas ele dá. (360º = uma volta)

angulo = gets.to_i

voltas = angulo / 360
angulo = angulo % 360
quadrante = 0
if (angulo <= 90)
	quadrante = 1
elsif (angulo > 90 and angulo <= 180)
	quadrante = 2
elsif (angulo > 180 and angulo <= 270)
	quadrante = 3
elsif (angulo > 270 and angulo <= 360)
	quadrante = 4
end

puts "Angulo: #{angulo}\n Quadrante: #{quadrante}\n Número de voltas: #{voltas}\n "
