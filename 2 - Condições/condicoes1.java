//Escreva um programa que leia um número e mostre se ele é igual a 10.

import java.util.Scanner;

public class condicoes1 {

  public static void main(String[] args) {
    System.out.println("Digite um numero: ");
    Scanner scan = new Scanner(System.in);
    int numero = scan.nextInt();
    if (numero == 10) {
      System.out.println("O valor é igual a 10");
    } else {
      System.out.println("O valor não é igual a 10");
    }
  }
}
