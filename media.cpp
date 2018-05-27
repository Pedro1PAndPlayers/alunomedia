#include <iostream>

using namespace std;

int main() {
    int n1,n2,n3,nr,nq ;
    float m , mr = 0 ;
    
    cout<<"Bem vindo ao programa que ira calcular a media de um aluno" << endl;
    cout<<"Digite a primeira nota do aluno" << endl;
    cin>>n1;
    cout<<"Digite a segunda nota do aluno" << endl;
    cin>>n2;
    cout<<"Digite a terceira nota do aluno" << endl;
    cin>>n3;
    cout<<"Digite a nota qualitativa do aluno" << endl;
    cin>>nq;
    m = (n1+n2+n3+nq)/4;
    cout<<"A media do aluno é "<< m << endl;
    
    if ((m < 0) || (m>10)) {
        cout<<"Você digitou valores invalidos que deram a media menor que 0 ou maior que 10" << endl ;
        cout<<"Obrigado por usar o programa" ;
        return 0;
    };
    if ((m >=6) && (m <=10)) {
        cout<<"Aprovado com sucesso" << endl;
        cout<<"Obrigado por usar o programa";
    }
    if ((m < 6) && (m >=5)) {
        cout<<"Recuperação" << endl ;
        cout<<"Digite a nota de recuperação do aluno" << endl;
        cin>>nr ;
        mr = (n1+n2+n3+nr+nq)/5 ;
        if ((mr >=6) && (mr <=10)) {
            cout<<"Aprovado com sucesso" << endl;
            cout<<"Obrigado por usar o programa";
            
        } else if ((mr < 6) && (mr >= 0)) {
            cout<<"Reprovado" << endl;
            cout<<"Obrigado por usar o programa";
        }
    if ((m >= 0) && (m < 5)) {
        cout<<"Reprovado" << endl;
        cout<<"Obrigado por usar o programa" ;
    }    
    }
}
