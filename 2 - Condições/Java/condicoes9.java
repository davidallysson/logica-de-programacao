//Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra e quantas voltas ele dá. (360º = uma volta)

import java.util.Scanner;

public class condicoes9 {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Digite um angulo: ");
    int angulo = scan.nextInt();
    int voltas = angulo / 360;
    angulo = angulo % 360;
    System.out.println("Voltas: " + voltas);
    System.out.println("Angulo: " + angulo);
    if (angulo >= 0 && angulo <= 90) {
      System.out.println("O angulo está no primeiro quadrante");
    } else if (angulo > 90 && angulo <= 180) {
      System.out.println("O angulo está no segundo quadrante");
    } else if (angulo > 180 && angulo <= 270) {
      System.out.println("O angulo está no terceiro quadrante");
    } else if (angulo > 270 && angulo <= 360) {
      System.out.println("O angulo está no quarto quadrante");
    }
  }
}
