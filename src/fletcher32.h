/*
 * Fletcher-32 functions
 *
 * Copyright (C) 2008-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _FLETCHER32_H )
#define _FLETCHER32_H

#include <common.h>
#include <types.h>

#include "assorted_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

int fletcher32_calculate(
     uint32_t previous_key,
     uint8_t *buffer,
     size_t size,
     uint32_t *fletcher32,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

