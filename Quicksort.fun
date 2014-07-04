(********************************************************************
 * COPYRIGHT --  
 ********************************************************************
 * Library: Quicksort
 * File: Quicksort.fun
 * Author: wielando
 * Created: May 14, 2009
 ********************************************************************
 * Functions and function blocks of library Quicksort
 ********************************************************************)

FUNCTION qsort_str : UINT (*Sortiert Strings mit dem Quicksort-Algorithmus*)
	VAR_INPUT
		pStrings : UDINT; (*Addres of stringarray*)
		len : UDINT; (*Length of one string*)
		count : UDINT; (*Count of strings to sort*)
	END_VAR
END_FUNCTION

FUNCTION qsort_int : UINT (*Sortiert Integer in aufsteigender Reihefolge*)
	VAR_INPUT
		pIntArray : UDINT; (*Add your parameter comment*)
		count : UDINT;
	END_VAR
END_FUNCTION
