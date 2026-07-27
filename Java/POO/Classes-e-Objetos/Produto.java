public class Produto {
    private String nome;
    private double preco;

    public Produto(String nome, double preco) {
        this.nome = nome;
        this.preco = preco;
    }

    public double calcularDesconto(double percentual) {
        return preco * (1 - percentual / 100);
    }

    public static void main(String[] args) {
        Produto p = new Produto("Notebook", 3000.0);
        System.out.println("Preco com desconto: " + p.calcularDesconto(10));
    }
}
