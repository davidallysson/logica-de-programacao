//Faça um programa que peça o raio de um círculo, calcule e mostre sua área.

import java.util.Scanner;

public class sequenciais6 {

  public static void main(String[] args) {
    System.out.println("Digite o raio da circunferencia: ");
    float raio = new Scanner(System.in).nextFloat();
    double area = Math.PI * Math.pow(raio, 2);
    System.out.printf("A area da circunferencia eh de: %.2f", area);
  }

}
