#ifndef HEADER_TIMER_H
#define HEADER_TIMER_H 1

#include <stdint.h>

#define TIMER_FREQ 100

void timer_init (void);
int64_t timer_ticks (void);
int64_t timer_elapsed (int64_t);

void timer_msleep (int64_t ms);
void timer_usleep (int64_t us);
void timer_nsleep (int64_t ns);

#endif /* timer.h */
