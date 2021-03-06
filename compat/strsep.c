/*
 * Copyright 2017 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Jan Černý <jcerny@redhat.com>
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

char *strsep(char **stringp, const char *delim)
{
	char *str = *stringp;
	char *found = NULL;
	if (str == NULL) {
		return NULL;
	}
	const size_t delim_cnt = strlen(delim);
	for (size_t i = 0; i < delim_cnt && found == NULL; i++) {
		found = strchr(str, delim[i]);
	}
	if (found != NULL) {
		*found = '\0';
		*stringp = str + 1;
	} else {
		*stringp = NULL;
	}
	return str;
}
