#Escreva uma função recursiva que realize a operação de exponenciação.

def potencia(base, exp)
  if exp == 1
    return base
  else
    return base * potencia(base, exp - 1)
  end
end
