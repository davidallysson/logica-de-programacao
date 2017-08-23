#Escreva uma função recursiva que realize a operação de divisão.

def div(x, y)
  if x < y
  	return 0
  elsif x - y < y
    return 1
  else
    return 1 + div(x - y, y)
  end
end
