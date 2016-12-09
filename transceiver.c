/*----------------------------------------------------------------
//                                                              //
//  transceiver.c                                               //
//                                                              //
//  This file is modification of the Amber project              //
//  http://www.opencores.org/project,amber                      //
//                                                              //
//  Description                                                 //
//  Simple stand-alone example application.                     //
//                                                              //
//  Author(s):                                                  //
//      - Conor Santifort, csantifort.amber@gmail.com           //
//                                                              //
//////////////////////////////////////////////////////////////////
//                                                              //
// Copyright (C) 2010 Authors and OPENCORES.ORG                 //
//                                                              //
// This source file may be used and distributed without         //
// restriction provided that this copyright statement is not    //
// removed from the file and that any derivative work contains  //
// the original copyright notice and the associated disclaimer. //
//                                                              //
// This source file is free software; you can redistribute it   //
// and/or modify it under the terms of the GNU Lesser General   //
// Public License as published by the Free Software Foundation; //
// either version 2.1 of the License, or (at your option) any   //
// later version.                                               //
//                                                              //
// This source is distributed in the hope that it will be       //
// useful, but WITHOUT ANY WARRANTY; without even the implied   //
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      //
// PURPOSE.  See the GNU Lesser General Public License for more //
// details.                                                     //
//                                                              //
// You should have received a copy of the GNU Lesser General    //
// Public License along with this source; if not, download it   //
// from http://www.opencores.org/lgpl.shtml                     //
//                                                              //
----------------------------------------------------------------*/

#include "stdio.h"
#include "stdint.h"
// Memory mapped for the amber output
#define PORTBASE0 0xFF70FF70

// Memory mapped for the amber inputs
#define PORTBASE1 0xFF700000
#define PORTBASE2 0xFF700010
#define PORTBASE3 0xFF700020
#define PORTBASE4 0xFF700030
#define PORTBASE5 0xFF700040
#define PORTBASE6 0xFF700050
#define PORTBASE7 0xFF700060
#define PORTBASE8 0xFF700070
#define PORTBASE9 0xFF700080
#define PORTBASE10 0xFF700090
#define PORTBASE11 0xFF7000A0
#define PORTBASE12 0xFF7000B0
#define PORTBASE13 0xFF7000C0
#define PORTBASE14 0xFF7000D0
#define PORTBASE15 0xFF7000E0
#define PORTBASE16 0xFF7000F0
#define PORTBASE17 0xFF700100
#define PORTBASE18 0xFF700110
#define PORTBASE19 0xFF700120
#define PORTBASE20 0xFF700130
#define PORTBASE21 0xFF700140
#define PORTBASE22 0xFF700150
#define PORTBASE23 0xFF700160
#define PORTBASE24 0xFF700170
#define PORTBASE25 0xFF700180
#define PORTBASE26 0xFF700190
#define PORTBASE27 0xFF7001A0
#define PORTBASE28 0xFF7001B0
#define PORTBASE29 0xFF7001C0
#define PORTBASE30 0xFF7001D0
#define PORTBASE31 0xFF7001E0
#define PORTBASE32 0xFF7001F0

main () 
{
	// Fixed memory variable for amber output
	unsigned int volatile * const port0 = (unsigned int *) PORTBASE0;

	// Fixed memory variables for amber input
    unsigned int volatile * const port1 = (unsigned int *) PORTBASE1;
    unsigned int volatile * const port2 = (unsigned int *) PORTBASE2;
	unsigned int volatile * const port3 = (unsigned int *) PORTBASE3;
	unsigned int volatile * const port4 = (unsigned int *) PORTBASE4;
	unsigned int volatile * const port5 = (unsigned int *) PORTBASE5;
	unsigned int volatile * const port6 = (unsigned int *) PORTBASE6;
    unsigned int volatile * const port7 = (unsigned int *) PORTBASE7;
    unsigned int volatile * const port8 = (unsigned int *) PORTBASE8;
	unsigned int volatile * const port9 = (unsigned int *) PORTBASE9;
	unsigned int volatile * const port10 = (unsigned int *) PORTBASE10;
	unsigned int volatile * const port11 = (unsigned int *) PORTBASE11;
	unsigned int volatile * const port12 = (unsigned int *) PORTBASE12;
	unsigned int volatile * const port13 = (unsigned int *) PORTBASE13;
	unsigned int volatile * const port14 = (unsigned int *) PORTBASE14;
	unsigned int volatile * const port15 = (unsigned int *) PORTBASE15;
	unsigned int volatile * const port16 = (unsigned int *) PORTBASE16;
	unsigned int volatile * const port17 = (unsigned int *) PORTBASE17;
	unsigned int volatile * const port18 = (unsigned int *) PORTBASE18;
	unsigned int volatile * const port19 = (unsigned int *) PORTBASE19;
	unsigned int volatile * const port20 = (unsigned int *) PORTBASE20;
	unsigned int volatile * const port21 = (unsigned int *) PORTBASE21;
	unsigned int volatile * const port22 = (unsigned int *) PORTBASE22;
	unsigned int volatile * const port23 = (unsigned int *) PORTBASE23;
	unsigned int volatile * const port24 = (unsigned int *) PORTBASE24;
	unsigned int volatile * const port25 = (unsigned int *) PORTBASE25;
	unsigned int volatile * const port26 = (unsigned int *) PORTBASE26;
	unsigned int volatile * const port27 = (unsigned int *) PORTBASE27;
	unsigned int volatile * const port28 = (unsigned int *) PORTBASE28;
	unsigned int volatile * const port29 = (unsigned int *) PORTBASE29;
	unsigned int volatile * const port30 = (unsigned int *) PORTBASE30;
	unsigned int volatile * const port31 = (unsigned int *) PORTBASE31;
	unsigned int volatile * const port32 = (unsigned int *) PORTBASE32;

	// Sends (64)decimal to amber_output
    a = 64;
    *port0 = a;
	
	printf ("C-language file: \n");
	// Printout the sent amber output data
	printf ("amber_outputs: %d \n",*port0);

	// Printout the amber input data
	printf ("amber_inputs: %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",*port32,*port31,*port30,*port29,*port28,*port27,*port26,*port25,*port24,*port23,*port22,*port21,*port20,*port19,*port18,*port17,*port16,*port15,*port14,*port13,*port12,*port11,*port10,*port9,*port8,*port7,*port6,*port5,*port4,*port3,*port2,*port1);

    /* Flush out UART FIFO */
    printf ("                ");
    _testpass();
}


