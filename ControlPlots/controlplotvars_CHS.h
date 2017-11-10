#ifndef _COMMONCONTROLPLOTVARS_CHS_H
#define _COMMONCONTROLPLOTVARS_CHS_H

#include "plotvar_t.h"

const plotVar_t commonplotvars_chs[] = {

//    plotvar	MINRange  MAXRange  NBINS  slog xlabel outfile AMINRange  AMAXRange ANBINS drawleg
//
//    LEPTONS
// { "ungroomed_AK8jet_pt+vbf_maxpt_j1_pt+vbf_maxpt_j2_pt",	500, 2100, 8, 3, "HT", "ht", 500, 2100, 8, 1},
// { "nPV",		0, 50, 50, 3,	"Number of primary vertices", "nPV", 	0, 50, 50, 1},
// { "l_pt1",		20, 810, 13, 3,		"Lepton p_{T} (GeV)",     "lepton_pt",       20,  810, 13, 1 },
// { "l_eta1",		-2.4, 2.4, 8, 1,	"Lepton #eta",            "lepton_eta",    -2.4,  2.4,  8, 0 },
//
////////	MET
// { "pfMET_Corr",	0, 900, 30, 3,	"pf MET (GeV)",		"pfMET_Corr",	 0, 900, 30, 1 },
// { "pfMET_Corr_phi",	-3.5, 3.5, 20, 6,	"pf MET #phi",		"pfMET_Corr_phi",-3.5,  3.5, 20, 0 },
//
////////	Leptonic & Hadronic W-boson 
// { "v_pt_type0",		0, 800, 16, 3,	"W p_{T} (GeV)",		"v_pt", 	 0, 800, 16, 1 },
// { "v_mt_type0",		0, 400, 8, 3,	"W Transverse Mass (GeV)",	"v_mt", 	 0, 400, 8, 0 },
//
// { "ungroomed_AK8jet_pt",	200, 1200, 20, 3, "AK8 p_{T} (GeV)",		"ungroomed_AK8jet_pt",  200, 1200, 20, 1 },
// { "ungroomed_AK8jet_eta", 	-2.4, 2.4, 12, 1,  "AK8 #eta",			"ungroomed_AK8jet_eta", -2.4, 2.4, 12, 0},
// { "ungroomed_AK8jet_phi", 	-3.4, 3.4, 12, 1,  "AK8 #phi",			"ungroomed_AK8jet_eta", -3.4, 3.4, 12, 0},
// { "AK8jet_mass", 	0, 400, 20, 1, "AK8 mass (GeV)",		"AK8_mass",    0.0, 400, 20, 1},
// { "AK8jet_mass_pr", 	0, 400, 20, 1, "AK8 pruned mass (GeV)",		"AK8_mass_pr", 0.0, 400, 20, 1},
 { "AK8jet_mass_so", 	0, 400, 20, 1, "AK8 Softdrop mass (GeV)",	"AK8_mass_so", 0.0, 400, 20, 1},
// { "AK8jet_mass_tr", 	0, 400, 20, 1, "AK8 tr mass (GeV)", 		"AK8_mass_tr", 0.0, 400, 20, 1},
 //{ "AK8jet_mass", 	55, 100, 5, 1, "AK8 mass (GeV)",		"AK8_mass",    55, 100, 5, 1},
 //{ "AK8jet_mass_pr", 	55, 100, 5, 1, "AK8 pruned mass (GeV)",		"AK8_mass_pr", 55, 100, 5, 1},
 //{ "AK8jet_mass_so", 	55, 100, 5, 1, "AK8 Softdrop mass (GeV)",	"AK8_mass_so", 55, 100, 5, 1},
 //{ "AK8jet_mass_tr", 	55, 100, 5, 1, "AK8 tr mass (GeV)", 		"AK8_mass_tr", 55, 100, 5, 1},
  
// { "mass_lvj_type0", 	0, 3000, 15, 1, "WW invariant mass (GeV)",		"mass_lvj_type0",    0, 3000, 15, 1},
//
////	Number of jets
// { "njets",  0, 10, 10, 1, "Number of VBF jets",	"njets", 0, 10, 10, 1},
// { "nBTagJet_loose", 0, 6, 6, 1, "number of VBF jets (Loose b-tag)", "nBTagJet_loose", 0, 6, 6, 1},
// { "nBTagJet_medium", 0, 6, 6, 1, "number of VBF jets (medium b-tag)", "nBTagJet_medium", 0, 6, 6, 1},
//
// 
// { "deltaphi_METak8jet",        0, 3.5, 12, 1, "#Delta #phi (AK8jet, MET)",	"deltaphi_metak8jet", 	0, 3.5, 12, 1 },
// { "AK8jet_tau2tau1", 		0, 1, 10, 1, "AK8 #tau_{2}/#tau_{1}", 		"AK8_jet_tau2tau1",0,1,10,0},
// { "vbf_maxpt_jj_m", 	500, 2500, 20, 1,		"m_{jj} (VBF) GeV",	"vbf_maxpt_jj_m",  500, 2500, 20, 1},
//
////	VBF JET 
//
// { "vbf_maxpt_j1_eta", -5.0, 5.0, 20, 1,	"Leading VBF Jet #eta",	"vbf_maxpt_j1_eta", 	-5.0, 5.0, 20, 0},
// { "vbf_maxpt_j2_eta", -5.0, 5.0, 20, 1,	"Sub-Leading VBF Jet #eta", "vbf_maxpt_j2_eta", -5.0, 5.0, 20, 0},
// { "vbf_maxpt_j2_pt", 30,330, 12, 1,		"Sub-Leading VBF Jet p_{T}", "vbf_maxpt_j2_pt", 30,330,12,0 },
// { "vbf_maxpt_j1_pt", 30, 630, 24, 1,		"Leading VBF Jet p_{T}",	"vbf_maxpt_j1_pt", 30,630,24,1 },
// { "PtBalance_type0",		0, 1.0, 10, 1,	"p_{T} Balance",	"PtBalance_type0",	0, 1.0, 10, 1 },
// { "BosonCentrality_type0",	0, 4.0, 8, 1, 	"Boson Centrality",	"BosonCentrality_type0",0, 4.0, 8, 1 },
// { "vbf_maxpt_jj_Deta",	2.5, 9, 13, 1,	"VBF #Delta #eta",	"vbf_maxpt_jj_Deta", 2.5,9, 13, 1 },
//
//// Angular variables
// //{ "LeptonProjection_run2", 	0, 2, 10, 1, "LeptonProjection_run2"  , "LeptonProjection_run2" ,0, 2, 10, 1}, 
// //{ "LeptonProjection_type2", 	0, 2, 10, 1, "LeptonProjection_type2"  , "LeptonProjection_type2" ,0, 2, 10, 1}, 
// { "LeptonProjection_type0", 	0, 2, 10, 1, "LeptonProjection_type0"  , "LeptonProjection_type0" ,0, 2, 10, 1}, 
// //{ "ZeppenfeldWL_run2", 	-5, 5, 10, 1, "ZeppenfeldWL_run2"  , "ZeppenfeldWL_run2" , -5, 5, 10, 0}, 
// //{ "ZeppenfeldWL_type2", 	-5, 5, 10, 1, "ZeppenfeldWL_type2"  , "ZeppenfeldWL_type2" , -5, 5, 10, 0}, 
// { "ZeppenfeldWL_type0", 	-5, 5, 10, 1, "ZeppenfeldWL_type0"  , "ZeppenfeldWL_type0" , -5, 5, 10, 0}, 
// { "ZeppenfeldWH", 	-5, 5, 10, 1, 		"ZeppenfeldWH"  , "ZeppenfeldWH" , -5, 5, 10, 0}, 
// //{ "RpT_run2", 		0, 80, 10, 1, 		"RpT_run2"  , "RpT_run2" ,	0, 80, 10, 1}, 
// //{ "RpT_type2", 	0, 80, 10, 1, 		"RpT_type2"  , "RpT_type2",	0, 80, 10, 1}, 
// { "RpT_type0", 	0, 80, 10, 1, 		"RpT_type0"  , "RpT_type0",	0, 80, 10, 1}, 
// { "WWRapidity", 	-2.5, 2.5, 10, 1, 	"WW Rapidity"  , "TempWWRapidity" , -2.5, 2.5, 10, 0}, 
// //{ "VBSCentrality_run2", 	0, 3, 10, 1, 	"VBSCentrality_run2"  , "VBSCentrality_run2" , 0, 3, 10, 1}, 
// //{ "VBSCentrality_type2", 	0, 3, 10, 1, 	"VBSCentrality_type2"  , "VBSCentrality_type2" , 0, 3, 10, 1}, 
// { "VBSCentrality_type0", 	0, 3, 10, 1, 	"VBSCentrality_type0"  , "VBSCentrality_type0" , 0, 3, 10, 1}, 
// //{ "costhetastar_run2", 	-1,1, 10, 1, 	"costhetastar_run2"  , "costhetastar_run2" ,-1,1, 10, 1}, 
// //{ "costhetastar_type2", 	-1,1, 10, 1, 	"costhetastar_type2"  , "costhetastar_type2" ,-1,1, 10, 1}, 
// { "costhetastar_type0", 	-1,1, 10, 1, 	"costhetastar_type0"  , "costhetastar_type0" ,-1,1, 10, 1}, 
// //{ "costheta1_run2", 	-1,1, 10, 1, 	"costheta1_run2"  , "costheta1_run2" ,-1,1, 10, 0}, 
// //{ "costheta1_type2", 	-1,1, 10, 1, 	"costheta1_type2"  , "costheta1_type2" ,-1,1, 10, 0}, 
// { "costheta1_type0", 	-1,1, 10, 1, 	"costheta1_type0"  , "costheta1_type0" ,-1,1, 10, 0}, 
// //{ "costheta2_run2", 	-1,1, 10, 1, 	"costheta2_run2"  , "costheta2_run2" ,-1,1, 10, 0}, 
// //{ "costheta2_type2", 	-1,1, 10, 1, 	"costheta2_type2"  , "costheta2_type2" ,-1,1, 10, 0}, 
// { "costheta2_type0", 	-1,1, 10, 1, 	"costheta2_type0"  , "costheta2_type0" ,-1,1, 10, 0}, 
// //{ "phi_run2", 	-3.5, 3.5, 20, 6, 	"phi_run2"  ,  "phi_run2" ,  -3.5, 3.5, 20, 0}, 
// //{ "phi_type2", 	-3.5, 3.5, 20, 6,	"phi_type2"  , "phi_type2" , -3.5, 3.5, 20, 0}, 
// { "phi_type0", 	-3.5, 3.5, 20, 6, 	"phi_type0"  , "phi_type0" , -3.5, 3.5, 20, 0}, 
// //{ "phi1_run2", 	-3.5, 3.5, 20, 6, 	"phi1_run2"  ,  "phi1_run2" ,  -3.5, 3.5, 20, 0}, 
// //{ "phi1_type2", 	-3.5, 3.5, 20, 6,	"phi1_type2"  , "phi1_type2" , -3.5, 3.5, 20, 0}, 
// { "phi1_type0", 	-3.5, 3.5, 20, 6, 	"phi1_type0"  , "phi1_type0" , -3.5, 3.5, 20, 0}, 

 { "", 0.0,0.0,0,0,"","",0.,0.,0,0 }
};


#endif // _COMMONCONTROLPLOTVARS_CHS_H
