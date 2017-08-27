//Escreva um programa que leia um número e mostre se ele é positivo.

import java.util.Scanner;

public class condicoes7 {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Digite um numero: ");
    int num1 = scan.nextInt();
    System.out.println( num1 >= 0 ? "O numero é positivo" : "O numero é negativo");
  }
}
