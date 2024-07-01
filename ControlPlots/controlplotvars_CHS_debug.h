#ifndef _COMMONCONTROLPLOTVARS_CHS_DEBUG_H
#define _COMMONCONTROLPLOTVARS_CHS_DEBUG_H

#include "plotvar_t.h"

const plotVar_t controlplotvars_CHS_debug[] = {
    //    plotvar	MINRange  MAXRange  NBINS  slog xlabel outfile AMINRange  AMAXRange ANBINS drawleg
    //{"PV_npvsGood", 0, 100, 100, 1, "Number of good primary vertices", "PV_npvsGood", 0, 100, 100, 1},
    {"massZ1", 0, 200, 50, 1, "Z_{ll} (GeV/C2)", "massZ1", 0, 200, 50, 1},
    {"pTZ1", 0, 500, 20, 1, "Z_{ll} p_{T} (GeV/c)", "pTZ1", 0, 500, 20, 1},
    {"MET_pt", 0, 2000, 80, 1, "MET_pt (GeV)", "MET_pt", 0, 2000, 80, 1},
    {"HZZ2l2nu_ZZmT", 0, 1000, 20, 1, "HZZ2l2nu_ZZmT (GeV)", "HZZ2l2nu_ZZmT", 0, 1000, 20, 1},
    {"HZZ2l2nu_ZZpT", 0, 1000, 20, 1, "HZZ2l2nu_ZZpT (GeV)", "HZZ2l2nu_ZZpT", 0, 1000, 20, 1}, 
    // don't delete the following line!
    {"", 0.0, 0.0, 0, 0, "", "", 0., 0., 0, 0}};

#endif // _COMMONCONTROLPLOTVARS_CHS_VBF_H
