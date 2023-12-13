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
    printf("1 RECRUTAMENTO E SELEÇÃO\n");
    printf("2 ADMISSÃO E DEMISSÃO\n");
    printf("3 BENEFÍCIOS FLEXÍVEIS\n");
    printf("4 CONTROLE DE FÉRIAS\n");
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
        printf("Digite um nome de usuário ou email: ");
        gets(Logincadastro);
        printf("Digite uma senha para cadastro: ");
        gets(SenhaCadastro);

        system("cls");

        printf("Login\n");
        printf("Digite seu nome de usuário ou email: ");
        gets(Login);
        printf("Digite sua senha para cadastro: ");
        gets(Senha);

        if (strcmp(Logincadastro, Login) != 0 || strcmp(SenhaCadastro, Senha) != 0)
        {
            printf("Senha ou usuário inválido!\n");
            sleep(3);
        }

    } while ((Logincadastro, Login) != 0 && strcmp(SenhaCadastro, Senha) != 0);


        cabecalho();
        printf("Escolha um opção: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
        fflush(stdin);
            printf("RECRUTAMENTO E SELEÇÃO\n");
            printf("Informe qual a sua formação: ");
            gets(recrut.formacao);
            printf("Informe sua experiência na área: ");
            gets(recrut.experiencia);
            printf("Informe seus conhecimentos na área: ");
            gets(recrut.conhecimentos);
            printf("Informe quais são suas habilidades: ");
            gets(recrut.habilidades);
            break;
        case 2:

            printf("ADMISSÃO E DEMISSÃO\n");
            printf("1 ADMISSÃO\n");
            printf("2 DEMISSÃO\n");
            printf("Escolha uma opção: ");
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
                printf("ADMISSÃO\n");
                printf("você ja teve algum emprego? ");
                gets(emprego.emprego);
                if (emprego.emprego == 'sim')
                {
                    printf("como era o ambiente de trabalho do seu ultimo emprego? ");
                    gets(emprego.ambiente);
                }

                printf("Você era exposto (a) a algum risco à saúde? ");
                gets(saude.risco);
                if (saude.risco == 'sim')
                {
                    printf("quais eram?");
                    gets(saude.riscos);

                    printf("Já passou por intervenções cirúrgicas? ");
                    gets(saude.Confirmacaocirurgia);

                    printf("quais?");
                    gets(saude.cirurgias);

                    printf("Possui alguma doenca? ");
                    gets(saude.doenca);

                    printf("qual o tratamento? ");
                    gets(saude.tratamento);

                    printf("você faz uso de algum tipo de medicamento controlado? ");
                    gets(saude.remedio);
                }
                printf("Insira os dados da sua dados de trabalho:");
                gets(dados.CarteiraTrabalho);

                printf("Insira seu Certificado militar");
                gets(dados.CertificadoMilitar);

                printf("insira sua certidão de casamento ou nascimento");
                gets(dados.Certidao);

                printf("Declaracao de dependentes");
                gets(dados.Declaracao);

                printf("Atestado médico admissional");
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
                printf("DEMISSÃO\n");
                printf("Entrevista de desligamento\n");
                printf("Fale sobre a imagem da empresa: ");
                gets(demissao.imagem);
                printf("Como funcionava a comunicação interna? ");
                gets(demissao.comunicacao);
                printf("Informe sobre a Política salarial: ");
                gets(demissao.politica);
                printf("Informe como era Relação com superiores e equipe: ");
                gets(demissao.relacao);
                printf("Informe sobre o ambiente de trabalho e as condições: ");
                gets(demissao.ambiente);
            }
            break;
        case 3:
        fflush(stdin);
            printf("BENEFÍCIOS FLEXÍVEIS\n");
            printf("Informe seu email: ");
            gets(email);
            printf("Informe quais os benefíos que o senhor(a) deseja:");
            gets(benefios);
            printf("Iremos verificar se os beneficio(s) desejados podem ser aprovados!\n");
            printf("Manderemos um email informando-o\n");
            break;
        case 4:
        fflush(stdin);
            printf("CONTROLE DE FÉRIAS\n");
            printf("Informe o nome de colaborador: ");
            gets(colaborador);
            for (i = 0; i < 12; i++)
            {
                printf("Informe o valor do %d mês: ", i + 1);
                scanf("%f", &salario[i]);
                Somasalario += salario[i];
            }
            SalarioFerias = (Somasalario / 3) + Somasalario;
            printf("Digite o número de faltas não justificadas: ");
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
            printf("Salário das Férias: %.2f\n", SalarioFerias);
            printf("Quantidade de dias permitidos: %d\n", DiasFerias);
            break;
        case 5:
          printf("Saindo...");
          sleep(3);
            break;

        default:
        printf("Código inválido!");
          sleep(3);
            break;
        }

    

    return 0;
}