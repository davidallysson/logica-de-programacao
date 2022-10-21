#São dadas as matrizes A = (aij) e B = (bij), quadradas de ordem 4, com aij = 3i + 4j e
#bij = – 4i – 3j. Considerando C = A + B, escreva um programa que calcule a matriz C.

a = [ [], [], [], [] ]
b = [ [], [], [], [] ]
c = [ [], [], [], [] ]

for i in 0..a.size - 1 do
  for j in 0..a.size - 1 do
    a[i][j] = (3 * i) + (4 * j)
    b[i][j] = (-4 * i) - (3 * j)
    c[i][j] = a[i][j] + b[i][j]
  end
end

print "#{c}"
