#define MAX 50          /* maximo de clientes que o banco aceita */

/*
   MOLDE DA FICHA DO CLIENTE
   Cada cliente pode ter ate 3 contas. Para cada tipo guardamos
   "tem ou nao tem" (1 = sim) e o saldo.
*/
struct cliente {
    char nome[50];
    int numero;              

    int temCorrente;         
    int temSalario;           
    int temPoupanca;          

    float saldoCorrente;
    float saldoSalario;
    float saldoPoupanca;

    int pegouEmprestimo;      
    int temTitulo;            
    float premio;             
};


/* opcoes do menu */
int  abrirBanco(struct cliente c[]);                 /* devolve quantos clientes (n) */
void consultarHistorico(struct cliente c[], int n);
void efetuarSorteio(struct cliente c[], int n);
void movimentarConta(struct cliente c[], int n);

/* funcoes do Fibonacci (𝐹𝑛=𝐹𝑛−1+𝐹𝑛−2)⁠ - obs.: servem para entender padroes de crescimento, otimizar sistemas */
int fibonacci(int valor);
int somafibonacci(int valor);
int ehprimo(int valor);
