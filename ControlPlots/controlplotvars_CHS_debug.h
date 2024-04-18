#ifndef _COMMONCONTROLPLOTVARS_CHS_DEBUG_H
#define _COMMONCONTROLPLOTVARS_CHS_DEBUG_H

#include "plotvar_t.h"

const plotVar_t controlplotvars_CHS_debug[] = {
    //    plotvar	MINRange  MAXRange  NBINS  slog xlabel outfile AMINRange  AMAXRange ANBINS drawleg
    {"PV_npvsGood", 0, 100, 100, 1, "Number of good primary vertices", "PV_npvsGood", 0, 100, 100, 1},

    // don't delete the following line!
    {"", 0.0, 0.0, 0, 0, "", "", 0., 0., 0, 0}};

#endif // _COMMONCONTROLPLOTVARS_CHS_VBF_H
