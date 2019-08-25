#include <errno.h>
#include <reent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>

void _exit() {
    while (1) {}
}

int _close_r(struct _reent *reent, int file) {
    reent->_errno = ENOSYS;
    return -1;
}

char *__env[] = {NULL};
char **environ = __env;

int _execve_r(struct _reent *reent, char *name, char **argv, char **env) {
    reent->_errno = ENOSYS;
    return -1;
}

int _fork_r(struct _reent *reent) {
    reent->_errno = ENOSYS;
    return -1;
}

int _fstat_r(struct _reent *reent, int file, struct stat *st) {
    reent->_errno = ENOSYS;
    return -1;
}

int _getpid_r(struct _reent *reent) {
    reent->_errno = ENOSYS;
    return -1;
}

int _isatty_r(struct _reent *reent, int file) {
    reent->_errno = ENOSYS;
    return -1;
}

int _kill_r(struct _reent *reent, int pid, int sig) {
    reent->_errno = ENOSYS;
    return -1;
}

int _link_r(struct _reent *reent, char *old, char *new) {
    reent->_errno = ENOSYS;
    return -1;
}

int _lseek_r(struct _reent *reent, int file, int ptr, int dir) {
    reent->_errno = ENOSYS;
    return -1;
}

int _open_r(struct _reent *reent, const char *name, int flags, ...) {
    reent->_errno = ENOSYS;
    return -1;
}

int _read_r(struct _reent *reent, int file, char *ptr, int len) {
    reent->_errno = ENOSYS;
    return -1;
}

caddr_t _sbrk_r(struct _reent *reent, int incr) {
    reent->_errno = ENOSYS;
    return -1;
}

int _stat_r(struct _reent *reent, const char *file, struct stat *st) {
    reent->_errno = ENOSYS;
    return -1;
}

clock_t _times_r(struct _reent *reent, struct tms *buf) {
    reent->_errno = ENOSYS;
    return -1;
}

int _unlink_r(struct _reent *reent, char *name) {
    reent->_errno = ENOSYS;
    return -1;
}

int _wait_r(struct _reent *reent, int *status) {
    reent->_errno = ENOSYS;
    return -1;
}

int _write_r(struct _reent *reent, int file, char *ptr, int len) {
    reent->_errno = ENOSYS;
    return -1;
}

int _gettimeofday_r(struct _reent *reent, struct timeval *p, struct timezone *z) {
    reent->_errno = ENOSYS;
    return -1;
}
