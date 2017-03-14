#Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10.
#O usuário deve informar de qual numero ele deseja ver a tabuada.

num = 0
loop do
  puts "Digite um número inteiro entre 1 a 10:"
  num = gets.to_i
  break if num >= 1 && num <= 10
end
for i in 1..10 do
  puts "#{num} X #{i} = #{num*i}"
end
