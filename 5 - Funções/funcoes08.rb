#Escreva uma função, chamada ordenarArray, que recebe um array como parâmetro
#e retorna o array ordenado.

def ordenarArray(array)
  begin
    trocado = false
    for i in 0..array.size - 2 do
      if array[i] > array[i+1]
        array[i], array[i+1] = array[i+1], array[i]
        trocado = true
      end
    end
  end while trocado == true

  return array
end
