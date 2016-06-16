#include <stdio.h>
#include <stdlib.h>

#include <getopt.h>


int main( int argc, char **argv )
{
	int rez;
	int option_index;

    printf("1\n");

	const struct option long_options[] = {
			{"help",no_argument,NULL,'1'},
			{"cursor",required_argument,NULL,'2'},
			{"accessibility",required_argument,NULL,'3'},
			{"scale",required_argument,NULL,'4'},
			{"show",required_argument,NULL,'5'},
			{"hide",required_argument,NULL,'6'},
			{NULL,0,NULL,0}
		};

    printf("2\n");

	while ( ( rez = getopt_long_only( argc,argv, "", long_options, &option_index ) ) != -1)
	{

    printf("3\n");

		switch(rez)
		{
			case '1':
				printf("help\n");

				break;

			case '2':
				printf("cursor = %s\n", optarg);

				break;

			case '3':
				printf("cursor = %s\n",optarg);
				break;


			case '4':
				printf("accessibility = %s\n",optarg);
				break;

			case '5':
				printf("accessibility = %s\n",optarg);
				break;

			case '6':
				printf("scale = %s\n",optarg);
				break;

			default:
				printf("found unknown option\n");
				break;
		}
	}

	return 0;

}
