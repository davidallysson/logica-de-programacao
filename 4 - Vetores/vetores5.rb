#Dadas as matrizes:
#
#     |  1  2  3  |     | -7 -8  9  |     |  2  3 -4  |
# A = | -4  5  6  | B = | 12  6  5  | C = |  6  7  1  |
#     |  4  6  8  |     |  8  7  4  |     |  2  8  7  |
#
#determine a matriz D resultante da operação A + B – C.

a = [ [1, 2, 3], [-4, 5, 6], [4, 6, 8] ]
b = [ [-7, -8, 9], [12, 6, 5], [8, 7, 4] ]
c = [ [2, 3, -4], [6, 7, 1], [2, 8, 7] ]
d = []

for i in 0..a.size - 1 do
  d << []
  for j in 0..a.size - 1 do
    d[i][j] = a[i][j] + b[i][j] - c[i][j]
  end
end

print "#{d}"
