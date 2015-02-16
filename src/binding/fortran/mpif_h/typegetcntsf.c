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
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TYPE_GET_CONTENTS = PMPI_TYPE_GET_CONTENTS
#pragma weak mpi_type_get_contents__ = PMPI_TYPE_GET_CONTENTS
#pragma weak mpi_type_get_contents_ = PMPI_TYPE_GET_CONTENTS
#pragma weak mpi_type_get_contents = PMPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_GET_CONTENTS = pmpi_type_get_contents__
#pragma weak mpi_type_get_contents__ = pmpi_type_get_contents__
#pragma weak mpi_type_get_contents_ = pmpi_type_get_contents__
#pragma weak mpi_type_get_contents = pmpi_type_get_contents__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_GET_CONTENTS = pmpi_type_get_contents_
#pragma weak mpi_type_get_contents__ = pmpi_type_get_contents_
#pragma weak mpi_type_get_contents_ = pmpi_type_get_contents_
#pragma weak mpi_type_get_contents = pmpi_type_get_contents_
#else
#pragma weak MPI_TYPE_GET_CONTENTS = pmpi_type_get_contents
#pragma weak mpi_type_get_contents__ = pmpi_type_get_contents
#pragma weak mpi_type_get_contents_ = pmpi_type_get_contents
#pragma weak mpi_type_get_contents = pmpi_type_get_contents
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#pragma weak MPI_TYPE_GET_CONTENTS = PMPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#pragma weak mpi_type_get_contents__ = pmpi_type_get_contents__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#pragma weak mpi_type_get_contents = pmpi_type_get_contents
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#pragma weak mpi_type_get_contents_ = pmpi_type_get_contents_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_GET_CONTENTS  MPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_get_contents__  mpi_type_get_contents__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_get_contents  mpi_type_get_contents
#else
#pragma _HP_SECONDARY_DEF pmpi_type_get_contents_  mpi_type_get_contents_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_GET_CONTENTS as PMPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_get_contents__ as pmpi_type_get_contents__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_get_contents as pmpi_type_get_contents
#else
#pragma _CRI duplicate mpi_type_get_contents_ as pmpi_type_get_contents_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_type_get_contents__ = MPI_TYPE_GET_CONTENTS
#pragma weak mpi_type_get_contents_ = MPI_TYPE_GET_CONTENTS
#pragma weak mpi_type_get_contents = MPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_GET_CONTENTS = mpi_type_get_contents__
#pragma weak mpi_type_get_contents_ = mpi_type_get_contents__
#pragma weak mpi_type_get_contents = mpi_type_get_contents__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_GET_CONTENTS = mpi_type_get_contents_
#pragma weak mpi_type_get_contents__ = mpi_type_get_contents_
#pragma weak mpi_type_get_contents = mpi_type_get_contents_
#else
#pragma weak MPI_TYPE_GET_CONTENTS = mpi_type_get_contents
#pragma weak mpi_type_get_contents__ = mpi_type_get_contents
#pragma weak mpi_type_get_contents_ = mpi_type_get_contents
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_GET_CONTENTS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_type_get_contents__ = PMPI_TYPE_GET_CONTENTS
#pragma weak pmpi_type_get_contents_ = PMPI_TYPE_GET_CONTENTS
#pragma weak pmpi_type_get_contents = PMPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TYPE_GET_CONTENTS = pmpi_type_get_contents__
#pragma weak pmpi_type_get_contents_ = pmpi_type_get_contents__
#pragma weak pmpi_type_get_contents = pmpi_type_get_contents__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TYPE_GET_CONTENTS = pmpi_type_get_contents_
#pragma weak pmpi_type_get_contents__ = pmpi_type_get_contents_
#pragma weak pmpi_type_get_contents = pmpi_type_get_contents_
#else
#pragma weak PMPI_TYPE_GET_CONTENTS = pmpi_type_get_contents
#pragma weak pmpi_type_get_contents__ = pmpi_type_get_contents
#pragma weak pmpi_type_get_contents_ = pmpi_type_get_contents
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_CONTENTS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_CONTENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_contents_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Aint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_contents")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_type_get_contents_ PMPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_get_contents_ pmpi_type_get_contents__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_get_contents_ pmpi_type_get_contents
#else
#define mpi_type_get_contents_ pmpi_type_get_contents_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Type_get_contents
#define MPI_Type_get_contents PMPI_Type_get_contents 

#else

#ifdef F77_NAME_UPPER
#define mpi_type_get_contents_ MPI_TYPE_GET_CONTENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_get_contents_ mpi_type_get_contents__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_get_contents_ mpi_type_get_contents
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_get_contents_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint v5[], MPI_Aint * v6, MPI_Fint v7[], MPI_Fint *ierr ){
    *ierr = MPI_Type_get_contents( (MPI_Datatype)(*v1), (int)*v2, (int)*v3, (int)*v4, v5, v6, (MPI_Datatype *)(v7) );
}
