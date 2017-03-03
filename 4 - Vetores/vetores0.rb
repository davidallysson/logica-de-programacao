#Escreva um programa que leia 30 números e armazene-os em um array. Depois leia
#mais um número inteiro, que deve corresponder a um índice do array, e troque o
#primeiro elemento com o elemento do índice lido. Caso o índice não seja válido
#o programa deve trocar o primeiro com o último elemento. Ao final o programa
#deve mostrar os elementos do array, um elemento por linha.

aux = 0
puts "Digite 5 números: "
numeros = 5.times.map do gets.to_i end

print "#{numeros} \n"

puts "Digite o indice a ser trocado: "
indice = gets.to_i

if(indice > 0 and indice < numeros.size) then
	#valido
	aux = numeros[0]
	numeros[0] = numeros[indice]
	numeros[indice] = aux
else
	#invalido
	aux = numeros[0]
	numeros[0] = numeros[numeros.size - 1]
	numeros[numeros.size - 1] = aux
end

print "#{numeros}"
