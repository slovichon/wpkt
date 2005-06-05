/* $Id$ */

/* pf test program */

int
main(int arg, char *argv[])
{
	
}

void
usage(void)
{
	extern char *__progname;

	fprintf(stderr,
	    "usage: %s [-f family] [-t type] [-p proto] [-r file] [-F file]\n");
	exit(1);
}
