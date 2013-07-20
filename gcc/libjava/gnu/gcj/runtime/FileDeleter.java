/* Copyright (C) 2000  Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

package gnu.gcj.runtime;

import java.io.File;
import java.util.Vector;

public final class FileDeleter
{
    public static void add (File f)
  {
        deleteOnExitStack.add (f);
  }

  // Helper method called by java.lang.Runtime.exit() to perform
  // pending deletions.
    public static void deleteOnExitNow ()
  {
        for (int i = 0; i < deleteOnExitStack.size(); ++i) 
            ((File)(deleteOnExitStack.remove(i))).delete ();
  }

  // A stack of files to delete upon normal termination.
    private static Vector deleteOnExitStack = new Vector();
}
