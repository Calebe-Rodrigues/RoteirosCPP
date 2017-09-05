#include <iostream>
#include "Data.h"
#include "Invoice.h"
#include "Empregado.h"
#include "ControleDeGastos.h"
#include "ControleDePagamentos.h"

using namespace std;

void DataTest (){
    cout << "----- Testando classe: Data -----" << endl;
    Data data1 = Data(32,13,-1999);

    data1.setDia(31);
    data1.setMes(12);
    data1.setAno(1999);

    cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;

    data1.avancarDia();

    cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;
}

void InvoiceTest(){
    cout << "----- Testando classe: Invoice -----" << endl;

    Invoice invoice1 = Invoice("Cyber Jujubas", 3, 15, 0.75);

    cout << invoice1.getDescricao() << ": Numero " << invoice1.getNumero() << ", " << invoice1.getQuantidade() << " unidades por " << invoice1.getPreco() << " cada." << endl;
    cout << "Total = " << invoice1.getInvoiceAmount() << endl;

    invoice1.setDescricao("Cyber Balas Juquinha");
    invoice1.setNumero(42);
    invoice1.setQuantidade(75);
    invoice1.setPreco(15.45);

    cout << invoice1.getDescricao() << ": Numero " << invoice1.getNumero() << ", " << invoice1.getQuantidade() << " unidades por " << invoice1.getPreco() << " cada." << endl;
    cout << "Total = " << invoice1.getInvoiceAmount() << endl;
}

void EmpregadoTeste (){
    cout << "----- Testando classe: Empregado -----" << endl;

    Empregado empregado1 = Empregado("Regina", "Falange", 1143.56);
    Empregado empregado2 = Empregado("Reginaldo", "Falango", 1043.5);

    cout << empregado1.Getnome() << " " << empregado1.Getsobrenome() << " ganha R$" << empregado1.Getsalario()*12 << " anualmente." << endl;
    cout << empregado2.Getnome() << " " << empregado2.Getsobrenome() << " ganha R$" << empregado2.Getsalario()*12 << " anualmente." << endl;

    empregado1.Setsalario(empregado1.Getsalario()*1.1);
    empregado2.Setsalario(empregado2.Getsalario()*1.1);

    cout << "Apos o aumento " << empregado1.Getnome() << " " << empregado1.Getsobrenome() << " ganha R$" << empregado1.Getsalario()*12 << " anualmente." << endl;
    cout << "Apos o aumento " <<empregado2.Getnome() << " " << empregado2.Getsobrenome() << " ganha R$" << empregado2.Getsalario()*12 << " anualmente." << endl;

}

void ControleDeGastosTeste (){
    cout << "----- Testando classe: Controle de Gastos -----" << endl;

    Despesa despesa1 = Despesa(123, "Bala juquinha");
    Despesa despesa2 = Despesa(3210, "Os 700 blockbusters de super-heroi que sairam esse ano");

    ControleDeGastos controle1 = ControleDeGastos();

    controle1.setDespesas(despesa1);
    controle1.setDespesas(despesa2);

    cout << "No total gastei R$" << controle1.calculaTotalDeDespesas() << endl;

    if (controle1.existeDespesaDoTipo("Os 700 blockbusters de super-heroi que sairam esse ano")){
        cout << "Gastei dinheiro com " << controle1.getDespesas(1).GettipoDeGasto() << endl;
    }
}
void ControleDePagamentosTeste (){
    cout << "----- Testando classe: Controle de Pagamentos -----" << endl;

    Pagamento pagamento1 = Pagamento(123, "Pedrinho Meu Sobrinho");
    Pagamento pagamento2 = Pagamento(3210, "Genaro o Profissional");

    ControleDePagamentos controle1 = ControleDePagamentos();

    controle1.setPagamentos(pagamento1);
    controle1.setPagamentos(pagamento2);

    cout << "No total pagamos R$" << controle1.CalculaTotalDePagamentos() << endl;

    if (controle1.ExistePagamentoPara("Genaro o Profissional")){
        cout << "Paguei o salario de " << controle1.getPagamento(1).getNomeDoFuncionario() << endl;
    }
}

int main(void){
    DataTest();
    InvoiceTest();
    EmpregadoTeste();
    ControleDeGastosTeste();
    ControleDePagamentosTeste();

    return 0;
}
