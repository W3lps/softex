package contas;

public class Conta {
	String cliente;
	double saldo;
	
	public Conta() {
		System.out.println("Ag�ncia 0265");
	}
	
	void exibirSaldo() {
		System.out.println("Saldo: R$:" + saldo);
	}
}
