#include "utils.h"

using namespace std{

    namespace {
        void CreatePipe(int fd[]) {
            if (pipe(fd) != 0) {
                cout << "INVALID CREATE" << endl;
                exit(EXIT_FAILURE);
            }
        }

        void GetForkError() {
            cout << "FORK ERROR" << endl;
            exit(EXIT_FAILURE);
        }

        void MakeDup2(int oldFd, int newFd) {
            if (dup2(oldFd, newFd) == -1) {
                cout << "dup2 ERROR" << endl;
                exit(EXIT_FAILURE);
            }
        }

        void GetExecError(std::string const &executableFile) {
            std::cout << "Exec \"" << executableFile << "\" error." << std::endl;
        }
    }
}