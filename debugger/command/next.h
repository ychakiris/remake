/* 
Copyright (C) 2004, 2005, 2007, 2008, 2009, 2011 R. Bernstein 
<rocky@gnu.org>
This file is part of GNU Make (remake variant).

GNU Make is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Make is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Make; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
/* Continue until the next command to be executed. */
static debug_return_t 
dbg_cmd_next(void)
{
  char *psz_arg = psz_debugger_args;
  if (!psz_arg || !*psz_arg) {
    i_debugger_nexting  = 1;
    i_debugger_stepping = 0;
    return continue_execution;
  } 
  if (get_uint(psz_arg, &i_debugger_nexting)) 
    return continue_execution;
  else 
    return continue_execution;
}