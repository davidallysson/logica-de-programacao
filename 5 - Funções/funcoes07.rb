#Escreva uma função, chamada transposta_matriz, que recebe uma matriz como
#parâmetro e retorna sua transposta.

def transposta_matriz(matriz)
  transposta = []
  matriz.size.times do
  	transposta << []
  end
  for i in 0..matriz.size - 1 do
    for j in 0..matriz.size - 1 do
      transposta[j][i] = matriz[i][j]
    end
  end
  return transposta
end
