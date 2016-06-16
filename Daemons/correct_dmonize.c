pid_t pid = fork();
switch (pid) {
    case 0:
        setsid();
        pid = fork();
        if (-1 == pid) {
            exit(EXIT_FAILURE);
        }
        else if (pid > 0) {
            exit(EXIT_SUCCESS);
        }
        // Child code — hello from the daemon
        break;

    case -1:
        exit(EXIT_FAILURE);

    default:
        exit(EXIT_SUCCESS);
}
