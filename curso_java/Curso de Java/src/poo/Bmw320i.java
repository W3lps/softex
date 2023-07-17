package poo;

public class Bmw320i {

	public static void main(String[] args) {
		Carro bmw320i = new Carro(2023,"Azul");
		
		System.out.println("Carro 320i");
		System.out.println("Ano: " + bmw320i.ano);
		System.out.println("Cor: " + bmw320i.cor);
		bmw320i.ligar();
		bmw320i.desligar();
	}
}
