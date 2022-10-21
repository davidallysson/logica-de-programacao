#Escreva uma função chamada fat que retorna o fatorial de um número. A função
#deve verificar se o parâmetro passado é inteiro e maior do que zero, caso contrário
#deve retornar -1.

def fat(x)
	if x >= 0
		fatorial = 1
		for i in 1..x do
			fatorial *= i
		end
		return fatorial
	else
		return -1
	end
end
