//Escreva um programa que leia um número real e faça o arredondamento para inteiro.
//Se a parte fracionária for maior do que 0.5 o arredondamento deve ser feito para o próximo inteiro.

import java.util.Scanner;

public class sequenciais13 {

  public static void main(String[] args) {
    System.out.println("Digite um numero fracionado: ");
    float numero = new Scanner(System.in).nextFloat();
    System.out.println(Math.round(numero));
  }

}
