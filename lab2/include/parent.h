#ifndef LAB2_PARENT_H
#define LAB2_PARENT_H

#include <sys/wait.h>
#include <iostream>
#include <fstream>
#include <vector>

enum PipeEnd {
    READ_END,
    WRITE_END
};

void CreatePipe(int fd[]);
void GetForkError();
void MakeDup2(int oldFd, int newFd);
void GetExecError(std::string const &executableFile);

std::vector<std::string> ParentRoutine(char const *pathToChild1, char const *pathToChild2,
                                       const std::vector<std::string> &input);

#endif //LAB2_PARENT_H