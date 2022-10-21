//Escreva um programa que leia dois números inteiros e informe se o maior é múltiplo do menor

import java.util.Scanner;

public class condicoes10 {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Digite dois numeros: ");
    int num1 = scan.nextInt();
    int num2 = scan.nextInt();
    if (num1 > num2) {
      System.out.println(num1 % num2 == 0 ? num1 + " é múltiplo de " + num2 : num1 + " não é múltiplo de " + num2);
    }
    else {
      System.out.println(num2 % num1 == 0 ? num2 + " é múltiplo de " + num1 : num2 + " não é múltiplo de " + num1);
    }
  }
}
