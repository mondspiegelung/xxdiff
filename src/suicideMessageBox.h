/******************************************************************************\
 * $Id: suicideMessageBox.h 56 2000-12-25 20:15:47Z  $
 * $Date: 2000-12-25 15:15:47 -0500 (Mon, 25 Dec 2000) $
 *
 * Copyright (C) 1999, 2000  Martin Blais <blais@iro.umontreal.ca>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *****************************************************************************/

#ifndef INCL_XXDIFF_SUICIDEMESSAGEBOX
#define INCL_XXDIFF_SUICIDEMESSAGEBOX

/*==============================================================================
 * EXTERNAL DECLARATIONS
 *============================================================================*/

#ifndef INCL_XXDIFF_DEFS
#include <defs.h>
#endif

#ifndef INCL_QT_QMESSAGEBOX
#include <qmessagebox.h>
#define INCL_QT_QMESSAGEBOX
#endif

/*==============================================================================
 * FORWARD DECLARATIONS
 *============================================================================*/

XX_NAMESPACE_BEGIN

/*==============================================================================
 * LOCAL CLASS XxSuicideMessageBox
 *============================================================================*/

// <summary> simple non-modal dialog that cares after itself </summary>

class XxSuicideMessageBox : public QMessageBox {

public:

   /*----- member functions -----*/

   // Constructor.
   XxSuicideMessageBox( 
      QWidget*       parent,
      const QString& caption, 
      const QString& text, 
      Icon           icon 
   );

   // See base class.
   virtual void done( int r );

};

XX_NAMESPACE_END

#endif
