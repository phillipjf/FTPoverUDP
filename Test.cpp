#include "Socket.h"

int main() {
	Socket sock;
	cout << sock.receive(true) << endl;
}