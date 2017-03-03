#Escreva um programa que leia 4 números e mostre o maior.

n1 = gets.to_i
n2 = gets.to_i
n3 = gets.to_i
n4 = gets.to_i

if (n1 >= n2) and (n1 >= n3) and (n1 >= n4)
	puts n1
elsif (n2 >= n1) and (n2 >= n3) and (n2 >= n4)
	puts n2
elsif (n3 >= n1) and (n3 >= n2) and (n3 >= n4)
	puts n3
elsif (n4 >= n1) and (n4 >= n2) and (n4 >= n3)
	puts n4
end
