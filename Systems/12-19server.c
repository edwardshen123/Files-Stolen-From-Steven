#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
char line[100];

//create and open WKP
mkfifo( "mario", 0644);
*from_client = open( "mario", O_RDONLY);
read( *from_client, line, sizeof(line) );
printf("<server> got connection request: +%s+\n", line);

//connect
*to_client = open( line, O_WRONLY );
line = "it's-a me, mario!";
 write( *to_client, line, sizeof(line));

return to_client;
}
