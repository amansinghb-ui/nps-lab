#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

int compare_strings(char a[], char b[])
{
 int c = 0;
 while (a[c] == b[c]) 
 {
 if (a[c] == '\0' || b[c] == '\0')
 break;
 c++;
 }
 if (a[c] == '\0' && b[c] == '\0')
 return 0;

 else
 return -1;
}
int main() {
 int clientSocket;
 char buffer[1024];
 struct sockaddr_in serverAddr;
 socklen_t addr_size;
