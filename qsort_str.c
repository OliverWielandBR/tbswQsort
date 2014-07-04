/********************************************************************
 * COPYRIGHT --  
 ********************************************************************
 * Library: Quicksort
 * File: qsort_str.c
 * Author: wielando
 * Created: May 14, 2009
 ********************************************************************
 * Implementation of library Quicksort
 ********************************************************************/

#include <bur/plctypes.h>
#include "Quicksort.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int vergl(const void *s1, const void *s2)
{
	return (strcasecmp(*(char **)s1, *(char **)s2));
}

/*Sortiert Strings mit dem Quicksort-Algorithmus*/
unsigned short qsort_str(unsigned long pStrings, unsigned long len, unsigned long count)
{
	int ii,jj;
	char *daten[count];
	char str[count][len];
	
	memcpy(str, (char *)pStrings, len * count);
	
	for (ii=0; ii<count; ii++)
	{
		daten[ii] = str[ii];
	}

	
	qsort(daten, count, sizeof(daten[0]), vergl);
	
	for (ii=0; ii<count; ii++)
	{
		strcpy((char *)pStrings + len * ii, daten[ii]);
	}
	
	return 0;
}
