#ifndef MATCH_HISTORY_IO_H
#define MATCH_HISTORY_IO_H

#include <stdio.h>
#include <string.h>

void write_match_history(char* buffer, size_t buffer_size, const char* names[], const int wins[], const int losses[], const float average_kills[], const float average_deaths[], const float average_assists[], size_t num_champs);

void read_match_history(char* buffer);

#endif