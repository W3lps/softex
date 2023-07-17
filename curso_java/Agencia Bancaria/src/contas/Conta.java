package contas;

public class Conta {
	String cliente;
	double saldo;
	
	public Conta() {
		System.out.println("Agência 0265");
	}
	
	void exibirSaldo() {
		System.out.println("Saldo: R$:" + saldo);
	}
}
