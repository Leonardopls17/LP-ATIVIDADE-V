#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct recrutamento
{
    char formacao[500];
    char experiencia[500];
    char conhecimentos[500];
    char habilidades[500];
};

void cabecalho()
{
    printf("\n===========Menu===========\n");
    printf("1 RECRUTAMENTO E SELE��O\n");
    printf("2 ADMISS�O E DEMISS�O\n");
    printf("3 BENEF�CIOS FLEX�VEIS\n");
    printf("4 CONTROLE DE F�RIAS\n");
    printf("5 SAIR\n");
}

int main()
{

    setlocale(LC_ALL, "portuguese");

            int codigoAdDe;
            char emprego[200];
            char risco[200];
            char cirurgia[200];
            char doenca[200];
            char medicamento[200];
            char benefios[500], email[200];
            char colaborador[200];
            int i, faltas, DiasFerias = 0;
            float salario[12], Somasalario = 0, SalarioFerias;
    char Logincadastro[200], SenhaCadastro[200], Login[200], Senha[200];
    int codigo;
    struct recrutamento recrut;
    do
    {
        system("cls");
        printf("Cadastro\n");
        printf("Digite um nome de usu�rio ou email: ");
        gets(Logincadastro);
        printf("Digite uma senha para cadastro: ");
        gets(SenhaCadastro);

        system("cls");

        printf("Login\n");
        printf("Digite seu nome de usu�rio ou email: ");
        gets(Login);
        printf("Digite sua senha para cadastro: ");
        gets(Senha);

        if (strcmp(Logincadastro, Login) != 0 || strcmp(SenhaCadastro, Senha) != 0)
        {
            printf("Senha ou usu�rio inv�lido!\n");
            sleep(3);
        }

    } while ((Logincadastro, Login) != 0 && strcmp(SenhaCadastro, Senha) != 0);


        cabecalho();
        printf("Escolha um op��o: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
        fflush(stdin);
            printf("RECRUTAMENTO E SELE��O\n");
            printf("Informe qual a sua forma��o: ");
            gets(recrut.formacao);
            printf("Informe sua experi�ncia na �rea: ");
            gets(recrut.experiencia);
            printf("Informe seus conhecimentos na �rea: ");
            gets(recrut.conhecimentos);
            printf("Informe quais s�o suas habilidades: ");
            gets(recrut.habilidades);
            break;
        case 2:

            printf("ADMISS�O E DEMISS�O\n");
            printf("1 ADMISS�O\n");
            printf("2 DEMISS�O\n");
            printf("Escolha uma op��o: ");
            scanf("%d", &codigoAdDe);
            if (codigoAdDe == 1)
            {

                struct emprego
                {
                    char emprego[200];
                    char ambiente[200];
                };
                struct emprego emprego;

                struct saude
                {
                    char risco[200];
                    char riscos[200];
                    char Confirmacaocirurgia[200];
                    char cirurgias[200];
                    char doenca[200];
                    char tratamento[200];
                    char remedio[200];
                };
                struct saude saude;

                struct dados
                {
                    char CarteiraTrabalho[200];
                    char CertificadoMilitar[200];
                    char Certidao[200];
                    char Declaracao[200];
                    char Atestado[200];
                };
                struct dados dados;
                fflush(stdin);
                printf("ADMISS�O\n");
                printf("voc� ja teve algum emprego? ");
                gets(emprego.emprego);
                if (emprego.emprego == 'sim')
                {
                    printf("como era o ambiente de trabalho do seu ultimo emprego? ");
                    gets(emprego.ambiente);
                }

                printf("Voc� era exposto (a) a algum risco � sa�de? ");
                gets(saude.risco);
                if (saude.risco == 'sim')
                {
                    printf("quais eram?");
                    gets(saude.riscos);

                    printf("J� passou por interven��es cir�rgicas? ");
                    gets(saude.Confirmacaocirurgia);

                    printf("quais?");
                    gets(saude.cirurgias);

                    printf("Possui alguma doenca? ");
                    gets(saude.doenca);

                    printf("qual o tratamento? ");
                    gets(saude.tratamento);

                    printf("voc� faz uso de algum tipo de medicamento controlado? ");
                    gets(saude.remedio);
                }
                printf("Insira os dados da sua dados de trabalho:");
                gets(dados.CarteiraTrabalho);

                printf("Insira seu Certificado militar");
                gets(dados.CertificadoMilitar);

                printf("insira sua certid�o de casamento ou nascimento");
                gets(dados.Certidao);

                printf("Declaracao de dependentes");
                gets(dados.Declaracao);

                printf("Atestado m�dico admissional");
                gets(dados.Atestado);
            }
            else
            {
                struct demissao 
                {
                    char imagem[200];
                    char comunicacao[200];
                    char politica[200];
                    char relacao[200];
                    char ambiente[200];
                };
                struct demissao demissao;
                fflush(stdin);
                printf("DEMISS�O\n");
                printf("Entrevista de desligamento\n");
                printf("Fale sobre a imagem da empresa: ");
                gets(demissao.imagem);
                printf("Como funcionava a comunica��o interna? ");
                gets(demissao.comunicacao);
                printf("Informe sobre a Pol�tica salarial: ");
                gets(demissao.politica);
                printf("Informe como era Rela��o com superiores e equipe: ");
                gets(demissao.relacao);
                printf("Informe sobre o ambiente de trabalho e as condi��es: ");
                gets(demissao.ambiente);
            }
            break;
        case 3:
        fflush(stdin);
            printf("BENEF�CIOS FLEX�VEIS\n");
            printf("Informe seu email: ");
            gets(email);
            printf("Informe quais os benef�os que o senhor(a) deseja:");
            gets(benefios);
            printf("Iremos verificar se os beneficio(s) desejados podem ser aprovados!\n");
            printf("Manderemos um email informando-o\n");
            break;
        case 4:
        fflush(stdin);
            printf("CONTROLE DE F�RIAS\n");
            printf("Informe o nome de colaborador: ");
            gets(colaborador);
            for (i = 0; i < 12; i++)
            {
                printf("Informe o valor do %d m�s: ", i + 1);
                scanf("%f", &salario[i]);
                Somasalario += salario[i];
            }
            SalarioFerias = (Somasalario / 3) + Somasalario;
            printf("Digite o n�mero de faltas n�o justificadas: ");
            scanf("%d", &faltas);
            if (faltas <= 5)
            {
                DiasFerias = 30;
            }
            else if (faltas <= 6)
            {
                DiasFerias = 24;
            }
            else if (faltas <= 15)
            {
                DiasFerias = 18;
            }
            else if (faltas <= 24)
            {
                DiasFerias = 14;
            }
            printf("Sal�rio das F�rias: %.2f\n", SalarioFerias);
            printf("Quantidade de dias permitidos: %d\n", DiasFerias);
            break;
        case 5:
          printf("Saindo...");
          sleep(3);
            break;

        default:
        printf("C�digo inv�lido!");
          sleep(3);
            break;
        }

    

    return 0;
}