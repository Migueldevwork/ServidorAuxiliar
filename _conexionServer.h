

typedef struct{
  	WSADATA wsaData;
  	SOCKET comm_socket;
  	SOCKET conn_socket;
  	struct sockaddr_in server;
  	struct sockaddr_in client;
  	struct hostent *hp;
  	int response,stsize;
  	char ip[12];
  	int port;
  	int esServidor;
}ConexionServer;

int initDll ();
ConexionServer conection();
void waiting(ConexionServer * con1);


