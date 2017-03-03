#Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra.

angulo = gets.to_i
if (angulo <= 90)
	puts "O ângulo está no primeiro quadrante"
elsif (angulo > 90 and angulo <= 180)
	puts "O ângulo está no segundo quadrante."
elsif (angulo > 180 and angulo <= 270)
	puts "O ângulo está no terceiro quadrante."
elsif (angulo > 270 and angulo <= 360)
	puts "O ângulo está no quarto quadrante."
end
