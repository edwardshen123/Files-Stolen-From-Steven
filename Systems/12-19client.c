#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
int to_server;
 int from_server;
char line[100];

sprintf( line, "%d", getpid() );
mkfifio( line, 0644);

to_server = open( "mario", O_WRONLY );
write( to_server, line, sizeof(line));

*from_server = open( line, O_RDONLY );
read( *from_server, line, sizeof(line));
printf("<client> received +%s+\n", line);

return to_server;
}
