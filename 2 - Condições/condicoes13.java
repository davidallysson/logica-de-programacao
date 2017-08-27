//Escreva um programa que leia 4 números e mostre o maior.

import java.util.Scanner;

public class condicoes13 {

  public static void main(String[] args) {
    System.out.println("Digite quatro números: ");
    Scanner scan = new Scanner(System.in);
    int num1 = scan.nextInt();
    int num2 = scan.nextInt();
    int num3 = scan.nextInt();
    int num4 = scan.nextInt();
    if (num1 > num2 && num1 > num3 && num1 > num4) {
      System.out.println("O maior dos números é: " + num1);
    } else if (num2 > num1 && num2 > num3 && num2 > num4) {
      System.out.println("O maior dos números é: " + num2);
    } else if (num3 > num1 && num3 > num2 && num3 > num4) {
      System.out.println("O maior dos números é: " + num3);
    } else {
      System.out.println("O maior dos números é: " + num4);
    }
  }
}
