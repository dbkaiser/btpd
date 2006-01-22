#ifndef BTPD_SUBR_H
#define BTPD_SUBR_H

#include <stdio.h>
#include <stdarg.h>

#define min(x, y) ((x) <= (y) ? (x) : (y))

int set_nonblocking(int fd);
int set_blocking(int fd);

int mkdirs(char *path);

int vaopen(int *resfd, int flags, const char *fmt, va_list ap);
int vopen(int *resfd, int flags, const char *fmt, ...);
int vfopen(FILE **ret, const char *mode, const char *fmt, ...);
int vfsync(const char *fmt, ...);

void set_bit(uint8_t *bits, unsigned long index);
int has_bit(const uint8_t *bits, unsigned long index);
void clear_bit(uint8_t *bits, unsigned long index);

int canon_path(const char *path, char **res);

long rand_between(long min, long max);

#endif
