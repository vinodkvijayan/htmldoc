/*
 * "$Id: debug.h,v 1.8 2002/09/04 05:32:11 mike Exp $"
 *
 *   Debugging macros for HTMLDOC, a HTML document processing program.
 *
 *   Copyright 1997-2002 by Easy Software Products.
 *
 *   These coded instructions, statements, and computer programs are the
 *   property of Easy Software Products and are protected by Federal
 *   copyright law.  Distribution and use rights are outlined in the file
 *   "COPYING.txt" which should have been included with this file.  If this
 *   file is missing or damaged please contact Easy Software Products
 *   at:
 *
 *       Attn: ESP Licensing Information
 *       Easy Software Products
 *       44141 Airport View Drive, Suite 204
 *       Hollywood, Maryland 20636-3111 USA
 *
 *       Voice: (301) 373-9600
 *       EMail: info@easysw.com
 *         WWW: http://www.easysw.com
 */

#ifndef _DEBUG_H_
#  define _DEBUG_H_

/*
 * Include necessary headers.
 */

#  include <stdio.h>

#  ifdef DEBUG
#    ifdef __cplusplus
#      define DEBUG_printf(x) ::printf x
#      define DEBUG_puts(x)   ::puts(x)
#    else
#      define DEBUG_printf(x) printf x
#      define DEBUG_puts(x)   puts(x)
#    endif /* __cplusplus */
#  else
#    define DEBUG_printf(x)
#    define DEBUG_puts(x)
#  endif /* DEBUG */

#endif /* !_DEBUG_H_ */

/*
 * End of "$Id: debug.h,v 1.8 2002/09/04 05:32:11 mike Exp $".
 */
