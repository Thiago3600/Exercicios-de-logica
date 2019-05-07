#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>

// PREPROCESSOS DO SISTEMA
#define CHAVE "C$S@*"
#define USERADM "usuários\\Administrador\\"
#define USERSTD "usuários\\Comum\\"
#define ADM "Administrador\\"
#define STD "Comum\\"
#define USER "usuários\\"
#define UTITLE 100
#define TCHAVE 6
#define TSENHA 129
#define TNOME 100
#define TMSG 128

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    
// VARIÁVEIS GLOBAIS 	
	int lim = 0;
    int dir = 0;
    char nomeUsuario[100] = {'\0'};

//FUNÇÕES  
	void criptografar(char senha[], char nome[]);
	void LimparBuffer(void);
	char* pegarMensagem(void);
	char* pegarSenha(void);
	int verificarTipo(char nome[]);
	int tipoConta(int op);
	int deletarConta(char nome[]);
	int criarConta(char nome[]);
	int descriptografar(char nome[]);
	int compararSenha(char nome[], char senha[]);
	int criptMensagem(char msg[], char nome[]);
	int verificarNome(char nome[]);

// FUNÇÃO PRINCIPAL
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	void inicio(void);
	
	inicio();

	return 0;
}

// PRIMEIRA FUNÇÃO A SER CHAMADA PELA FUNÇÃO PRINCIPAL
void inicio(void) {
	

// VARIÁVEIS	
	char senha[TSENHA];
	char delNome[TNOME];
	char userTitle[UTITLE];
	char nome[TNOME];
	char msg[TMSG]; 
    int op, opInicio;
    
    home:
    system("title Sistema de segurança do Navio");	
    system("cls");
    printf("Escolha uma das opções abaixo: \n");
    printf("1 Criar Conta. \n");
    printf("2 Fazer login. \n");
    scanf("%i", &opInicio);

    LimparBuffer();
    
    
    
    switch (opInicio) {
    	case 1:
    		system("cls");
			system("title Sistema de segurança do Navio - CRIAR CONTA");	
            printf("Entre com o nome de usuário: \n");
            printf("NOME: ");
            scanf("%s", nome);
    		
    		strcpy(nomeUsuario, nome);
    		
    		if(criarConta(nome) == 1 ) {
    			printf("SENHA: "); 
    		    strcpy(senha, pegarSenha());
	            criptografar(senha, nome);
	            getch();
	            if (dir == 0 ) goto home;
    			printf("\nConta criada com sucesso!!");
    			
    			getch();
    			goto home;
			} else {
				printf("Usuário já cadastrado!!");
				getch();
    			goto home;
			}
    		
    		break;
    	case 2:
    		goto in;
    		break;	
		default:	
		    goto home; 
		    break;
	}
    
    in:
    system("title Sistema de segurança do Navio - LOGIN");	
    system("cls");	
    printf("Entre com o nome de usuário: \n");
    printf("NOME: ");
    scanf("%s", nome);
    strcpy(nomeUsuario, nome);
    if(verificarNome(nome) == 0) {
     	printf("Usuário não cadastrado!!");
		getch();
		goto in;
}
    printf("SENHA: ");
    strcpy(senha, pegarSenha());
    if(compararSenha(nome, senha) == 0) {
    	printf("\nSenha digita incorreta!!");
    	getch();
    	goto in;
	}
	
//  LIMPA O LIXO QUE ESTIVER ALOCADO NAS PARTES NÃO UTILIZADAS DA STRING SENHA
    int limi;
    for(limi = lim; limi < TSENHA; ++limi) {
         senha[limi] = '\0';  
    }
// TELA DE OPÇÃO
    telUs:
    sprintf(userTitle, "title Sistema de segurança do Navio - %s LOGGED", nomeUsuario);
	system(userTitle);	
    LimparBuffer();	
    system("cls");
	printf("Bem vindo %s!!", nomeUsuario);	
    printf("\n");
	printf("1 - Encriptar: \n");
    printf("2 - Descriptar: \n");
    printf("3 - Logout: \n");
    if (verificarTipo(nomeUsuario) == 1) printf("4 - Deletar conta \n");
	scanf("%i", &op);

    
    switch (op) {
       case 1: 
           system("cls"); 
           printf("Por favor digite a sua mensagem a ser encriptada:\n");
		   pegarMensagem();  
		   strcpy(msg, pegarMensagem());
            
		  
		   if(criptMensagem(msg, nomeUsuario) == 1) {
           	   printf("Mensagem encriptada com sucesso!!");
           	   getch();
           	   goto telUs;
		    } else {
		       printf("Ocorreu um erro na encriptação");
			   getch();
           	   goto telUs;
			}
		   
            break;
       case 2:   
	        if(descriptografar(nomeUsuario) == 1) {
           	   printf("\nMensagem desencriptada com sucesso!!");
           	   getch();
           	   goto telUs;
		    } else {
		       printf("\nOcorreu um erro na desencriptação");
			   getch();
           	   goto telUs;
			}
	        
			break;
			
		case 3:
		    goto home;
			break;
		case 4:
			delNome[TNOME] = '\0'; 
			if (verificarTipo(nomeUsuario) == 2) goto telUs;
			printf("\nDigite o nome de usuário a ser deletado: ");
			scanf("%s", &delNome);
			
			if (verificarNome(delNome) == 0) {
			 printf("Usuário não cadastrado");
			 getch();
			 goto telUs; 
			}
		
			if (verificarTipo(nomeUsuario) == 1 && strcmp(delNome, nomeUsuario) != 0) deletarConta(delNome);
		  	if (verificarNome(delNome) == 0){
			   printf("A conta de usuário foi deletada"); 
		    } else {
		    	printf("A conta de usuário não foi deletada"); 
			}
		  	getch();
		  	goto telUs;
			break; 	
		default:
			goto telUs;
		    break;	  
    }
}

// CRIPTOGRAFA A SENHA DO USUÁRIO
void criptografar(char senha[], char nome[]) {
	char chave[TCHAVE] = CHAVE;
	char caminho[100] = {'\0'};
	
	if(verificarTipo(nome) == 1) {
	   strcpy(caminho, USERADM);
	} else 	if(verificarTipo(nome) == 2) {
	   strcpy(caminho, USERSTD);
	}
	
	strcat(caminho, nome);
	strcat(caminho, "\\encript.txt");
	
	FILE *encript;
    encript = fopen(caminho, "w"); 
    
	int i = 0, cod, ch,volta = 0;
	while (i < TSENHA && senha[i] != '\0') {
		  if ( volta > TCHAVE) {
		  	volta = 0;
		  }
		  	ch  = (int)chave[volta];
		  	cod = (int)senha[i] + ch;
		  	fprintf(encript, "%c", cod);
		  	++volta;
		    ++i;
		}
			i = 0;
			   	
	 fclose(encript);
}

// DESCRITOGRAFA A MENSAHEM DO USUÁRIO
int descriptografar(char nome[]) {
	char chave[TCHAVE] = CHAVE;
	char caminhoD[100] = {'\0'};
	char caminhoE[100] = {'\0'};
	char pChar;
	
		
	if(verificarTipo(nome) == 1) {
	   strcpy(caminhoE, USERADM);
	} else 	if(verificarTipo(nome) == 2) {
	   strcpy(caminhoE, USERSTD);
	}
	
		
	if(verificarTipo(nome) == 1) {
	   strcpy(caminhoD, USERADM);
	} else 	if(verificarTipo(nome) == 2) {
	   strcpy(caminhoD , USERSTD);
	}
	
	
	strcat(caminhoD, nome);
	strcat(caminhoD, "\\Mensagens\\descript.txt");
	
	strcat(caminhoE, nome);
	strcat(caminhoE, "\\Mensagens\\encript.txt");
	
	FILE *descript, *encript;
	descript = fopen(caminhoD, "w");
    encript = fopen(caminhoE, "r"); 
 
    pChar = fgetc(encript);
    
	int i = 0, cod, ch,volta = 0;
	while (pChar != EOF) {
		  if ( volta > TCHAVE) {
		  	volta = 0;
		  } 
		  	
		  	ch  = (int)chave[volta];
		    cod = (int)pChar - ch;
		  	fprintf(descript, "%c", cod);
		  	pChar = fgetc(encript);
		  	++volta;
		  	++i;
		}	
	
	    printf("\n%s", caminhoD);
	    fclose(descript);
	    fclose(encript);
	   
	 if(descript && encript) {
	    return 1;	
     } else {
     	return 0;
	 }
     
   
}

// FUNÇÃO UTILIZADA PARA PEGAR O QUE O USUÁRIO DIGITOU
char* pegarMensagem(void) {
	char msg[TMSG] = {'\0'};
	char ch;
	
	int i = 0;
	do {
	    if(i >= TMSG){
	    
			 printf("\nPor favor insira um mensagem com no máximo até %d \n",  TMSG);
             
    	}
		ch = getchar();
		msg[i] = ch;
		++i;
	} while (ch != '\n' && i < 1 + TMSG);
	  
     msg[i] = '\0';
     lim = i;
	 i = 0; 
	  
	return msg;
}

// VERIFICA SE O USUÁRIO EXISTE
int verificarNome(char nome[]) {
	int tipo = 0;
	
	if ( verificarTipo(nome) == 0 ) {
		return tipo;
	} else if ( verificarTipo(nome) == 1 ) {
		tipo = 1;
		return tipo;
	} else if (verificarTipo(nome) == 2 ) {
		tipo = 2;
		return tipo;
	}
	
}

// PEGA A SENHA QUE O USUÁRIO DIGITOU
char* pegarSenha() {
	char pass[TSENHA];
	char pChar;
	int cChar = 0;
	out:
	lim = 0;
	int i;
    for(i = 0;  i < TSENHA+1; ++i) {
	     ++lim;
	     
	     	     
		 if (i == TSENHA) {
		 	pass[i] = '\0';
		 	printf("\n");
		 	printf("digite uma senha de %d caracteres", TSENHA-1);
		    if(dir == 1) { deletarConta(nomeUsuario); }
		 	dir = 0;
		 	getch();
		 	break;
		 }
		 
		 	pChar = getch();
		 if(pChar == '\r'&& i == 0) {
		 	printf("\nPor favor digite uma senha valida!!");
		 	getch();
		 	system("cls");
		 	printf("Entre com o nome de usuário: \n");
            printf("NOME: %s \n", nomeUsuario);
            printf("SENHA: ");
			 goto out;
		 }	else if(pChar != '\r' && pChar != '\b') {
		 
        	pass[i] = pChar;
    	    putchar('*');
    	    ++cChar;
        
		 } else if (pChar == '\b') {
		 	
		  if (cChar != 0) {
		  	
			if (i > 0) --i;
         	putchar('\b');
    	    putchar(' ');
    	    putchar('\b');
    	    --cChar;
    	}
    	    --i;
    	    
		
		 } else if (pChar == '\r') {
		 	
		 	int e;
		 	for(e = i; e < TSENHA; ++e) {
		 		pass[e] = '\0';
			 }
		 	
		 	break;
		 } 
	}	
	
    return pass;
} 

// COMPARA A SENHA SALVA COM A SENHA DIGITADA
int compararSenha(char nome[], char senha[]) {
	char chave[TCHAVE] = CHAVE;
	char senhaDig[20] = {'\0'};
	char caminhoE[100] = {'\0'};
	char pChar;
	
	if(verificarTipo(nome) == 1) {
	   strcpy(caminhoE, USERADM);
	} else 	if(verificarTipo(nome) == 2) {
	   strcpy(caminhoE, USERSTD);
	}
	
	
	strcat(caminhoE, nome);
	strcat(caminhoE, "\\encript.txt");
	
	FILE *encript;
    encript = fopen(caminhoE, "r"); 
 
    pChar = fgetc(encript);
    
	int i = 0, cod, ch,volta = 0;
	while (pChar != EOF) {
		  if ( volta > TCHAVE) {
		  	volta = 0;
		  } 
		  	
		  	ch  = (int)chave[volta];
		    cod = (int)pChar - ch;
		    senhaDig[i] = (char)cod;
		  	pChar = fgetc(encript);
		  	++volta;
		  	++i;
		}	
		
		if(strcmp(senha, senhaDig) != 0) {
			fclose(encript);
			return 0;
		} else {
			fclose(encript);
			return 1;
		}
		
	 

}

// CRIA CONTA DE USUÁRIO
int criarConta(char nome[]) {
	char senha[TSENHA] = {'\0'};
	char tipo = {'\0'};
	char caminho[100] = USER;
	int op = 0;
	DIR *novoUs;
   
	printf("Escolha o tipo de conta \n");
	printf("1 - Administrador       \n");
	printf("2 - Usuário padrão      \n");
    scanf("%d", &op);
    
	if (tipoConta(op) == 1) {
	  strcat(caminho, ADM);
	} else if (tipoConta(op) == 2) {
	  strcat(caminho, STD); 	
	}
     
	if(verificarNome(nome) == 1 || verificarNome(nome) == 2) {
    
	   return 0;     
	
    } else {
   	 
	strcat(caminho, nome);
	novoUs = opendir(caminho);
	mkdir(caminho);
	dir = 1;
	
	   return 1;
	}
}

// lIMPA O BUFFER DE TECLAS ARMAZENADAS
void LimparBuffer(void) {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {
		
	}
}

// CRIPTOGRAFA MENSAGEM DE USUÁRIO
int criptMensagem(char msg[], char nome[]) {
	char chave[TCHAVE] = CHAVE;
	char caminho[100] = {'\0'};
	
	DIR *mensg;
		
	if(verificarTipo(nome) == 1) {
	   strcpy(caminho, USERADM);
	} else 	if(verificarTipo(nome) == 2) {
	   strcpy(caminho, USERSTD);
	}
	
		
	strcat(caminho, nome);
	strcat(caminho, "\\Mensagens");
	mensg = opendir(caminho);

    if(!mensg) mkdir(caminho);
    
	strcat(caminho, "\\encript.txt");
	
	FILE *encript;
    encript = fopen(caminho, "w"); 
 
	int i = 0, cod, ch,volta = 0;
	while (i < TMSG && msg[i] != '\0') {
		  if ( volta > TCHAVE) {
		  	volta = 0;
		  }
		  	ch  = (int)chave[volta];
		  	cod = (int)msg[i] + ch;
		  	fprintf(encript, "%c", cod);
		  	++volta;
		    ++i;
		}
			i = 0;
			
			printf("\n%s\n", caminho );
			
			fclose(encript);
		   
	if(caminho) return 1;		
	 

}

// DELETA CONTA DE USUÁRIO
int deletarConta(char nome[]) {
	char caminho[100] = {'\0'};
	char comando[100] = {'\0'};
	DIR *delCont;
	
	if(verificarTipo(nome) == 1 ) {
		strcpy(caminho, USERADM);
	} else if (verificarTipo(nome) == 2) {
		strcpy(caminho, USERSTD);
	}

	strcat(caminho, nome);
	delCont = opendir(caminho);
	
	if(delCont) {
		sprintf(comando, "rmdir %s /S /Q", caminho);
		system(comando);
		return 1;
	} else {
		return 0;
	} 
	
	closeDIR(caminho);
	
}
// CRIA A PASTA DOS NÍVEIS DE USUÁRIOS
int tipoConta(int op) {
    
	switch (op) {
		case 1:
			mkdir(USERADM);
		break;
		case 2:
		    mkdir(USERSTD);
		break;
		default:
		break;  
	}		
	
	return op;																																																																																																																																																																																																																																																																					;	
}
// VERIFICA O NÍVEL ACESSO DO USUÁRIO
int verificarTipo(char nome[]) {
	int tipo = 0; 
	char adm[100] = USERADM;
	char std[100] = USERSTD;
	
	DIR *usuarioAdm;
	DIR *usuarioStd;
	
	strcat(adm, nome);
	strcat(std, nome);
	
	usuarioAdm = opendir(adm);
	usuarioStd = opendir(std);
	
	if(usuarioAdm) {
		tipo = 1;
		return tipo;
	} else if (usuarioStd){
		tipo = 2;
		return tipo;
	} else {
		return tipo;
	}
	
	closedir(usuarioAdm);
	closedir(usuarioStd);
}
	




