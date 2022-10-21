#Escreva uma função recursiva que gere a sequência fibonnaci até uma determinada posição "n" vinda por parâmetro.

def fibonnaci(x)
  if x == 1 || x == 2
    return 1
  else
    return fibonnaci(x - 1) + fibonnaci(x - 2)
  end
end
