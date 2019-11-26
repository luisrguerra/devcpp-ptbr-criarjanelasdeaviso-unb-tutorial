///https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
#include <windows.h>
int main() {
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo1", 0); //ok
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo2", MB_HELP ); //ajuda e ok
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo3", MB_OKCANCEL ); // ok cancelar
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo4", MB_RETRYCANCEL ); // tentar novamente cancela
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo5", MB_YESNO ); // sim ou n�o
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo6", MB_YESNOCANCEL ); // sim ou n�o ou cancelar
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo6.1", MB_ABORTRETRYIGNORE ); // abortar, tentar novamente, ignorar
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo6.2", MB_CANCELTRYCONTINUE ); // cancelar, tentar, continuar
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo7", 0 | MB_ICONEXCLAMATION ); ///mostra um icone de exclam��o em um tri�ngulo amarelo
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo8", 0 | MB_ICONINFORMATION ); ///mostra um icone de informa��o, "i" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo10", 0 | MB_ICONQUESTION ); ///mostra um icone de pergunta, "?" em uma bola azul
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo11", 0 | MB_ICONERROR ); ///mostra um icone de erro, "x" em uma bola vermelha
  MessageBox( 0, "Linha 1\nLinha 2", "T�tulo12", 0 | MB_RIGHT); // O texto  fica alinhado do lado direito
  
  ///aperta o bot�o e o progrma responde
  
  int janela1 = MessageBox( 0, "Deseja Finalizar o Programa?", "T�tulo12", MB_OKCANCEL );
  switch (janela1){
  	case IDOK:
        return 0;
        break;
    case IDCANCEL:
        //codigo
        break;
  }
  
  int janela2 = MessageBox( 0, "Deseja Finalizar o Programa?", "T�tulo13", MB_YESNOCANCEL ); 
  switch (janela2){
  	case IDYES:
        return 0;
        break;
    case IDNO:
        //codigo
        break;
    case IDCANCEL:
        //codigo
        break;
  }
    
	int janela3 = MessageBox( 0, "Deseja Finalizar o Programa?", "T�tulo13", MB_YESNOCANCEL ); 
  switch (janela3){
  	case IDYES:
        return 0;
        break;
    case IDNO:
        //codigo
        break;
    case IDCANCEL:
        //codigo
        break;
  }
  
  int janela4 = MessageBox( 0, "Texto", "T�tulo14", MB_RETRYCANCEL ); 
  switch (janela4){
  	case IDRETRY:
        //codigo
        break;
    case IDCANCEL:
        //codigo
        break;
  }
  
  int janela5 = MessageBox( 0, "Texto", "T�tulo5", MB_HELP ); 
  switch (janela5){
  	case IDOK:
        //codigo
        break;
    case IDHELP:
        //codigo
        break;
  }

}

