//Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

import java.util.Scanner;

public class sequenciais10 {

  public static void main(String[] args) {
    System.out.println("Digite uma temperatura, em Celsius: ");
    float celsius = new Scanner(System.in).nextFloat();
    double farenheit = 1.80 * celsius + 32;
    System.out.printf("A temperatura, em Farenheit, eh de: %.2f graus Farenheit", farenheit);
  }

}
