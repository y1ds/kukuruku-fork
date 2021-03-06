#pragma once
#ifndef METADATA_H
#define METADATA_H

#include "sdr_packet.h"
void fftw_init(int);
void calc_spectrum(sdr_packet*, int, int);
void calc_histogram(sdr_packet *, int);

#endif
