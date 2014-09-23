/**************************************************************************/
/*!
    @file     mrt.h
    @author   K. Townsend
    @author   ChrisMicro

    @section LICENSE see below

    Copyright (c) 2013, K. Townsend (microBuilder.eu)
    All rights reserved.

***************************************************************************/
#ifndef __MRT_H
#define __MRT_H

/* Control register bit definition. */
#define MRT_INT_ENA          (0x1<<0)
#define MRT_REPEATED_MODE    (0x00<<1)
#define MRT_ONE_SHOT_INT     (0x01<<1)
#define MRT_ONE_SHOT_STALL   (0x02<<1)

/* Status register bit definition */
#define MRT_STAT_IRQ_FLAG    (0x1<<0)
#define MRT_STAT_RUN         (0x1<<1)

void MRT_IRQHandler(void);
void mrtInit(uint32_t delay);
void mrtDelay(uint32_t ticks);
uint32_t millis();
uint32_t micros();
void delayMicroseconds(uint32_t us);

#endif
/***************************************************************************

    Software License Agreement (BSD License)

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
	1. Redistributions of source code must retain the above copyright
	notice, this list of conditions and the following disclaimer.
	2. Redistributions in binary form must reproduce the above copyright
	notice, this list of conditions and the following disclaimer in the
	documentation and/or other materials provided with the distribution.
	3. Neither the name of the copyright holders nor the
	names of its contributors may be used to endorse or promote products
	derived from this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
	EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
	DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**************************************************************************/
