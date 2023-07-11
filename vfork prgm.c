#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t pid;
    pid=vfork();
    if(pid==-1)
    {
        perror("vfork");
        return 1;
    }
    else if (pid ==0){
        printf("Child process:Hello I'm the child\n");
        printf("Child process:My pid is %d\n",getpid());
        printf("Child process : My parent's pid is %d\n",getppid());
        _exit(0);

    }
    else {
            printf("Parent process:Hello I'm the parent\n");
            printf("Parent process:My Pid is %d\n",getpid());
            printf("Parent process:My vhild's PID is %d\n",pid);
            int status;
            waitpid(pid,&status,0);
            if (WIFEXITED(status)){
                printf("Parent process:child process terminated normally");


            }else{
                printf("Parent process: Child terminated abnormally");
            }
    }
    return 0;

}

OUTPUT:
Child process:Hello I'm the child
Child process:My pid is 17413
Child process : My parent's pid is 17412
Parent process:Hello I'm the parent
Parent process:My Pid is 17412
Parent process:My vhild's PID is 17413
Parent process:child process terminated normally
