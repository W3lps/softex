package poo;

public class Cesna {

	public static void main(String[] args) {
		Aviao cessna = new Aviao();
		cessna.ano = 2015;
		cessna.cor = "Branco";
		cessna.envergadura = 11;
		
		System.out.println("Avião Cessna");
		System.out.println("Ano: " + cessna.ano);
		System.out.println("Cor: " + cessna.cor);
		System.out.println("Envergadura: " + cessna.envergadura);
		cessna.ligar();
		cessna.acelerar();
		cessna.aterrizar();
		cessna.desligar();
	}

}
