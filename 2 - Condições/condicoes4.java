//Escreva um programa que leia dois números e informe se eles são iguais.

import java.util.Scanner;

public class condicoes4 {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Digite dois números: ");
    int num1 = scan.nextInt();
    int num2 = scan.nextInt();
    if (num1 == num2) {
      System.out.println("Os números são iguais");
    } else {
      System.out.println("Os números não são iguais");
    }
  }
}
