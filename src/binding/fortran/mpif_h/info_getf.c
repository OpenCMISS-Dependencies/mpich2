/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INFO_GET = PMPI_INFO_GET
#pragma weak mpi_info_get__ = PMPI_INFO_GET
#pragma weak mpi_info_get_ = PMPI_INFO_GET
#pragma weak mpi_info_get = PMPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_GET = pmpi_info_get__
#pragma weak mpi_info_get__ = pmpi_info_get__
#pragma weak mpi_info_get_ = pmpi_info_get__
#pragma weak mpi_info_get = pmpi_info_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_GET = pmpi_info_get_
#pragma weak mpi_info_get__ = pmpi_info_get_
#pragma weak mpi_info_get_ = pmpi_info_get_
#pragma weak mpi_info_get = pmpi_info_get_
#else
#pragma weak MPI_INFO_GET = pmpi_info_get
#pragma weak mpi_info_get__ = pmpi_info_get
#pragma weak mpi_info_get_ = pmpi_info_get
#pragma weak mpi_info_get = pmpi_info_get
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak MPI_INFO_GET = PMPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_info_get__ = pmpi_info_get__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_info_get = pmpi_info_get
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_info_get_ = pmpi_info_get_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INFO_GET  MPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_get__  mpi_info_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_get  mpi_info_get
#else
#pragma _HP_SECONDARY_DEF pmpi_info_get_  mpi_info_get_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INFO_GET as PMPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_info_get__ as pmpi_info_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_info_get as pmpi_info_get
#else
#pragma _CRI duplicate mpi_info_get_ as pmpi_info_get_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_info_get__ = MPI_INFO_GET
#pragma weak mpi_info_get_ = MPI_INFO_GET
#pragma weak mpi_info_get = MPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_GET = mpi_info_get__
#pragma weak mpi_info_get_ = mpi_info_get__
#pragma weak mpi_info_get = mpi_info_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_GET = mpi_info_get_
#pragma weak mpi_info_get__ = mpi_info_get_
#pragma weak mpi_info_get = mpi_info_get_
#else
#pragma weak MPI_INFO_GET = mpi_info_get
#pragma weak mpi_info_get__ = mpi_info_get
#pragma weak mpi_info_get_ = mpi_info_get
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_info_get__ = PMPI_INFO_GET
#pragma weak pmpi_info_get_ = PMPI_INFO_GET
#pragma weak pmpi_info_get = PMPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INFO_GET = pmpi_info_get__
#pragma weak pmpi_info_get_ = pmpi_info_get__
#pragma weak pmpi_info_get = pmpi_info_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INFO_GET = pmpi_info_get_
#pragma weak pmpi_info_get__ = pmpi_info_get_
#pragma weak pmpi_info_get = pmpi_info_get_
#else
#pragma weak PMPI_INFO_GET = pmpi_info_get
#pragma weak pmpi_info_get__ = pmpi_info_get
#pragma weak pmpi_info_get_ = pmpi_info_get
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_info_get_ PMPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_get_ pmpi_info_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_get_ pmpi_info_get
#else
#define mpi_info_get_ pmpi_info_get_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Info_get
#define MPI_Info_get PMPI_Info_get 

#else

#ifdef F77_NAME_UPPER
#define mpi_info_get_ MPI_INFO_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_get_ mpi_info_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_get_ mpi_info_get
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_info_get_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), MPI_Fint *v3, char *v4 FORT_MIXED_LEN(d4), MPI_Fint *v5, MPI_Fint *ierr FORT_END_LEN(d2) FORT_END_LEN(d4) ){
    char *p2;
    char *p4;
    int l5;

    {char *p = v2 + d2 - 1;
     int  li;
        while (*p == ' ' && p > v2) p--;
        p++;
        p2 = (char *)MPIU_Malloc( p-v2 + 1 );
        for (li=0; li<(p-v2); li++) { p2[li] = v2[li]; }
        p2[li] = 0; 
    }
    p4 = (char *)MPIU_Malloc( d4 + 1 );
    *ierr = MPI_Info_get( (MPI_Info)(*v1), p2, (int)*v3, p4, &l5 );

    if (l5 && !*ierr) {char *p = v4, *pc=p4;
        while (*pc) {*p++ = *pc++;}
        while ((p-v4) < d4) { *p++ = ' '; }
    }
    if (*ierr == MPI_SUCCESS) *v5 = MPIR_TO_FLOG(l5);
    MPIU_Free( p2 );
    MPIU_Free( p4 );
}
