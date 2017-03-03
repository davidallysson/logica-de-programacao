#Escreva uma função chamada soma_array que retorna a soma dos elementos de um array.

def soma_array(array)
	somaDosElementos = 0
	for i in 0..array.size - 1 do
		somaDosElementos += array[i]
	end
	return somaDosElementos
end
