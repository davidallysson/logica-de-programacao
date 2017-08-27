//Escreva um programa que leia dois nomes de times de futebol, a quantidade de gols do primeiro time, a quantidade de gols do segundo time e mostre o nome do time vencedor da partida.

import java.util.Scanner;

public class condicoes11 {

  public static void main(String[] args) {
    System.out.println("Digite o nome dos dois times: ");
    Scanner scan = new Scanner(System.in);
    String time1 = scan.nextLine();
    String time2 = scan.nextLine();
    System.out.println("Digite a quantidade  dos gols de cada time: ");
    int gol1 = scan.nextInt();
    int gol2 = scan.nextInt();
    if (gol1 > gol2) {
      System.out.println(time1 + " venceu!");
    } else if (gol1 == gol2) {
      System.out.println("Deu empate!");
    } else {
      System.out.println(time2 + " venceu!");
    }
  }
}
