package contas;

public class PessoaFisica {

	public static void main(String[] args) {
		Conta cc1 = new Conta();
		cc1.cliente = "Robson Santos";
		cc1.saldo = 130000;

		System.out.println("Cliente: " + cc1.cliente);
		cc1.exibirSaldo();
		
		Conta cc2 = new Conta();
		cc1.cliente = "Cinara Passos";
		cc1.saldo = 25000;

		System.out.println("Cliente: " + cc1.cliente);
		cc1.exibirSaldo();
	}

}
