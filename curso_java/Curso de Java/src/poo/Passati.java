package poo;

public class Passati {

	public static void main(String[] args) {
		Carro passati = new Carro();
		
		passati.ano = 2022;
		passati.cor = "Branco";
		
		System.out.println("Carro Passati");
		System.out.println("Ano :" + passati.ano);
		System.out.println("Cor :" + passati.cor);
		passati.ligar();
		passati.desligar();
	}
}
