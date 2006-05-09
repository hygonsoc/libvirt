/*
 * utils.c: test utils
 *
 * Copyright (C) 2005 Red Hat, Inc.
 *
 * See COPYING.LIB for the License of this software
 *
 * Karel Zak <kzak@redhat.com>
 *
 * $Id$
 */

#ifndef __VIT_TEST_UTILS_H__
#define __VIT_TEST_UTILS_H__

#ifdef __cplusplus
extern "C" {
#endif


double	virtTestCountAverage	(double *items, 
				 int nitems);

int	virtTestRun		(const char *title, 
				 int nloops, 
				 int (*body)(void *data), 
				 void *data);

#ifdef __cplusplus
}
#endif
#endif /* __VIT_TEST_UTILS_H__ */

