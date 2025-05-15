/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:21:14 by user              #+#    #+#             */
/*   Updated: 2025/05/15 13:25:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <sys/types.h>

/*
** ─────────────────────────────────────────────────────────────
** Boolean & Status
** ─────────────────────────────────────────────────────────────
*/

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define FAILURE -1
# define EMPTY 0

/*
** ─────────────────────────────────────────────────────────────
** Base Constants
** ─────────────────────────────────────────────────────────────
*/

# define BA2 "01"
# define BA8 "01234567"
# define BA10 "0123456789"
# define BA16L "0123456789abcdef"
# define BA16U "0123456789ABCDEF"
# define BA26L "abcdefghijklmnopqrstuvwxyz"
# define BA26U "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

/*
** ─────────────────────────────────────────────────────────────
** Generic Types
** ─────────────────────────────────────────────────────────────
*/
typedef pid_t				t_pid;

/*
** ─────────────────────────────────────────────────────────────
** String
** ─────────────────────────────────────────────────────────────
*/

typedef char				t_char;
typedef unsigned char		t_uchar;

typedef char				t_string;
typedef unsigned char		t_ustring;

/*
** ─────────────────────────────────────────────────────────────
** Signed Integers
** ─────────────────────────────────────────────────────────────
*/

/**
 * t_int8  → 1 byte signed
 * t_int16 → 2 bytes signed
 * t_int32 → 4 bytes signed
 * t_int64 → 8 bytes signed
 * t_int128 → 16 bytes signed (long long)
 */
typedef signed char			t_int8;
typedef short				t_int16;
typedef int					t_int32;
typedef long				t_int64;
typedef long long			t_int128;

/*
** ─────────────────────────────────────────────────────────────
** Unsigned Integers
** ─────────────────────────────────────────────────────────────
*/

/**
 * t_uint8  → 1 byte unsigned
 * t_uint16 → 2 bytes unsigned
 * t_uint32 → 4 bytes unsigned
 * t_uint64 → 8 bytes unsigned
 * t_uint128 → 16 bytes unsigned
 */
typedef unsigned char		t_uint8;
typedef unsigned short		t_uint16;
typedef unsigned int		t_uint32;
typedef unsigned long		t_uint64;
typedef unsigned long long	t_uint128;

/*
** ─────────────────────────────────────────────────────────────
** Floating Points
** ─────────────────────────────────────────────────────────────
*/

/**
 * t_float32  → 4 bytes
 * t_float64  → 8 bytes (double)
 * t_float128 → 16 bytes (long double)
 */
typedef float				t_float32;
typedef double				t_float64;
typedef long double			t_float128;

#endif
