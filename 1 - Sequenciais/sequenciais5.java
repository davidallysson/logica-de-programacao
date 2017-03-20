//Faça um programa que converta metros para centímetros

import java.util.Scanner;

public class sequenciais5 {

  public static void main(String[] args) {
    System.out.println("Digite um valor, em metros: ");
    int metros = new Scanner(System.in).nextInt();
    System.out.println("O valor, em centimetros, eh de: " + (metros * 100));
  }

}
