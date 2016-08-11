/*
 * Copyright (C) 2008 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#ifndef _LOCALE_H_
#define _LOCALE_H_

#include <sys/cdefs.h>

__BEGIN_DECLS

enum {
    LC_CTYPE     = 0,
    LC_NUMERIC   = 1,
    LC_TIME      = 2,
    LC_COLLATE   = 3,
    LC_MONETARY  = 4,
    LC_MESSAGES  = 5,
    LC_ALL       = 6,
    LC_PAPER     = 7,
    LC_NAME      = 8,
    LC_ADDRESS   = 9,

    LC_TELEPHONE      = 10,
    LC_MEASUREMENT    = 11,
    LC_IDENTIFICATION = 12
};

extern char *setlocale(int category, const char *locale);

#if 1 /* MISSING FROM BIONIC - DEFINED TO MAKE libstdc++-v3 happy */
struct lconv {
    // XXX STUB
 char    *currency_symbol;
char    *decimal_point;
char     frac_digits;
char    *grouping;
char    *int_curr_symbol;
char     int_frac_digits;
char     int_n_cs_precedes;
char     int_n_sep_by_space;
char     int_n_sign_posn;
char     int_p_cs_precedes;
char     int_p_sep_by_space;
char     int_p_sign_posn;
char    *mon_decimal_point;
char    *mon_grouping;
char    *mon_thousands_sep;
char    *negative_sign;
char     n_cs_precedes;
char     n_sep_by_space;
char     n_sign_posn;
char    *positive_sign;
char     p_cs_precedes;
char     p_sep_by_space;
char     p_sign_posn;
char    *thousands_sep;
 };
static inline struct lconv *localeconv(void) { return 0; }
#endif /* MISSING */

__END_DECLS

#endif /* _LOCALE_H_ */