typedef struct{
	WSADATA wsaData;
  	SOCKET conn_socket;
  	struct sockaddr_in server;
  	struct hostent *hp;
  	int resp;
  	int esServidor;
}ConexionClient;

ConexionClient conectionC();

