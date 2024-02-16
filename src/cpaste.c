/*
 *  cpaste
 */

#include <stdio.h>

#define CPASTE_NAME "cpaste"
#define CPASTE_VERSION "0.0.1"



static void version(void);
static void usage(void);



static void
version(void)
{
    printf("Version: %s\n", CPASTE_VERSION);
}



static void
usage(void)
{
    printf("Usage: %s [OPTIONS] <file1> <file...>\n", CPASTE_NAME);

    printf("\nOptions:\n");
    printf(" -e, --expire-time NUM          Expire time (w/given is 4 hours)\n");
    printf("                                NUM is '0' for 4 hours and '1-7' for days\n");
    printf(" -s, --save-session             Save session in history\n");

    printf("\nOutput:\n");
    printf(" -o, --output-format FORMAT     Print links at the end of the session\n");
    printf("                                FORMAT is 'all', 'editor', 'plain', 'lined'\n");
    
    printf("\nHistory:\n");
    printf(" -l, --history FORMAT           Show normal history (links)\n");
    printf(" -L, --history-table FORMAT     Show formatted history (table)\n");
    printf("                                FORMAT is 'alive', 'dead', 'all'\n");
    printf(" -r, --delete-history           Delete history\n");
    
    printf("\nDownload:\n");
    printf(" -d, --download <url>[,<hash>]  Download file using url or hash\n");
    printf(" -D, --download-alive           Download alive links\n");
    printf(" -R, --delete-download          Delete download folder\n");

    printf("\nUtilities:\n");
    printf(" -c, --check <url>[,<hash>]     Check expiration date via url or hash\n");

    printf("\nMisc:\n");
    printf(" -u, --upgrade                  Upgrade\n");
    printf(" -U, --force-upgrade            Force upgrade\n");
    printf(" -h, --help                     Help page\n");
    printf(" -v, --version                  Version\n");

    printf("\nExamples\n");
    printf(" %s file1.txt file2.txt\n", CPASTE_NAME);
    printf(" %s --save-session -e 1 file1.txt file2.txt\n", CPASTE_NAME);
    printf(" %s file1.txt -e 1 -s file2.txt\n", CPASTE_NAME);

    printf("\n");

    version();
}



int
main(void)
{
    usage();

    return 0;
}


