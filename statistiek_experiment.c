/*
 * statistiek_experiment.c
 * 
 * Copyright 2016 John van Dam <john@john-Satellite-C660>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
/*#include <time.h>
#include <math.h>*/



int main(int argc, char **argv)
{
	int c, i, data_array[365];
	FILE *ifp, *ofp;
	if (argc !=3){
		printf("\n%s%s%s\n\n%s\n",
		"Gebruik:", argv[0], " infile outfile",
		"Dit programma doet iets met statistiek");
		exit(1);
		}
	ifp = fopen(argv[1], "r");
	ofp = fopen(argc[2], "w");
	for (i=0; i<365; ++i)
		data_array[i]=0;
	while((c = getc(ifp)) != EOF)
	    	
		
	
}

