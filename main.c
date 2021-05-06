#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <process.h>
#include <pthread.h> 
#include "_conexionClient.h"
#include "_conexionServer.h"
#include "_funcionesMensaje.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	ConexionClient conC1 = conectionC();
	char recvBuffer[1024];
	 recvBuffer[1024] = receiving(&conC1);
	
  /*int contSock = 0; //Indice de cada socket asignado en un hilo          
  while(1){

	  waiting(&conS1,  contSock);
	            
	  pthread_t thread1; 
	  pthread_create(&thread1, NULL, (void *)sending, (void *)&conS1.SocketState[contSock]);
	  
	  
	  contSock++;
  }*/

	getchar();            

  //closesocket(con1.SocketState[contSock].comm_socket);                  //CIERRA - Socket primera escucha                  //<--- Cambiado de posición
  
  // Cerramos liberia winsock
  WSACleanup();
  return (EXIT_SUCCESS);
}
