#Escreva uma função, chamada maior3, que retorna o maior de três números.

def maior3(x, y, z)
  if (x > y) && (x > z)
    return x
  elsif (y > x) && (y > z)
    return y
  else
    return z
  end
end
