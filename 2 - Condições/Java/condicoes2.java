//Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

import java.util.Scanner;

public class condicoes2 {

  public static void main(String[] args) {
    System.out.println("Digite um número: ");
    Scanner scan = new Scanner(System.in);
    int numero = scan.nextInt();
    if (numero % 7 == 0) {
      System.out.println("O número é multiplo de 7");
    } else {
      System.out.println("O número não é multiplo de 7");
    }
  }
}
