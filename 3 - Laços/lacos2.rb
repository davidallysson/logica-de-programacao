#Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário,
#mostrando uma mensagem de erro e voltando a pedir as informações.

loop do
  puts "Usuário:"
  user = gets.to_s
  puts "Senha:"
  pass = gets.to_s
  if user == pass then
    puts "Usúario e Senha não podem ser idênticos."
  else
    break
  end
end
