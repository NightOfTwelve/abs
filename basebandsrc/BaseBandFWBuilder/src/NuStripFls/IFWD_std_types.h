/**
 *       Copyright (C) Danish Wireless Design A/S. All rights reserved.
 *
 * This document contains proprietary information belonging to Danish Wireless
 * Design A/S. Passing on and copying of this document, use and communication
 * of its contents is not permitted without prior written authorisation.
 *
 * Description:
 *   <hardcoded file description - the only part to be modified manually!>
 *
 * Revision Information:
 *   File name: \dwdsrc_int\tools\NewToolChainSrc\FlsSign\Src\IFWD_std_types.h
 *   Version: \main\1
 *   Date: 2006-12-07 13:33:36
 *   Responsible: jhv
 *   Comment:
 *     Initial check in
 */ 

#ifndef _INC_STD_TYPES
#define _INC_STD_TYPES

#include <stdio.h>

#define S8  signed char
#define S16 signed short
#define S32 signed int       

#define U8 unsigned char
#define U16 unsigned short 
#define U32 unsigned int   

#ifndef EGOLD
#define U64 unsigned long long
#define S64 signed long long  
#endif

#define IFX_CHAR char

#ifdef NULL
#undef NULL
#endif
#define NULL  ((void*)0)


/* basic data type definitions */
#define IFX_BOOL unsigned char  
#define FALSE 0
#define TRUE  1

#define IFX_FILE FILE
#endif