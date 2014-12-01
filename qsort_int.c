/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: Quicksort
 * File: qsort_int.c
 * Author: wielando
 * Created: April 20, 2010
 ********************************************************************
 * Implementation of library Quicksort
 ********************************************************************/

#include <bur/plctypes.h>
#include <stdlib.h>
#include "Quicksort.h"


int vergl_int(int i1, int i2)
{
	if (i1 < i2)
		return -1;
		
	if (i1 > i2)
		return 1;
	
	return 0;
}

/*Sortiert Integer in aufsteigender Reihefolge*/
unsigned short qsort_int(unsigned long pIntArray, unsigned long count)
{
	qsort(pIntArray, count, sizeof(short), vergl_int);
	return 0;
}
