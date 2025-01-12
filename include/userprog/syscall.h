#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include <userprog/syscall.h>
#include <stdbool.h>
#include "lib/kernel/console.h"

void syscall_init (void);

// Implements
// void halt (void);
// void exit (int status);
// int exec (const char *cmd_line);
// int wait (int pid);
// bool create (const char *file, unsigned initial_size);
// bool remove (const char *file);
// int open (const char *file);
// int filesize (int fd);
// int read (int fd, void *buffer, unsigned size);
// int write (int fd, const void *buffer, unsigned size);
// void seek (int fd, unsigned position);
// unsigned tell (int fd);
// void close (int fd);

#endif /* userprog/syscall.h */