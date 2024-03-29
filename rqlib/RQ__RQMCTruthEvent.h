//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jul  8 14:49:55 2019 by ROOT version 6.16/00)
//      from the StreamerInfo in file /global/projecta/projectdirs/lz/data/MDC2/calibration/LZAP-3.12.0-PHYSICS-3.12.1/AmLi_1336/lz_AmLi_1336000010_0005_lzap.root
//////////////////////////////////////////////////////////


#ifndef RQ__RQMCTruthEvent_h
#define RQ__RQMCTruthEvent_h
namespace RQ {
class RQMCTruthEvent;
} // end of namespace.

#include "Rtypes.h"
#include "TObject.h"
#include "Riostream.h"
#include <string>

namespace RQ {
class RQMCTruthEvent : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int runNumber;    //
   unsigned int derEvent;     //
   unsigned int baccEvent;    //
   string       parentParticle;    //
   string       parentVolume;      //
   double       parentPositionX_mm;    //
   double       parentPositionY_mm;    //
   double       parentPositionZ_mm;    //
   double       parentEnergy_keV;      //
   double       parentDirectionX;      //
   double       parentDirectionY;      //
   double       parentDirectionZ;      //
   double       parentTime_ns;         //

   RQMCTruthEvent();
   RQMCTruthEvent(const RQMCTruthEvent & );
   virtual ~RQMCTruthEvent();

   ClassDef(RQMCTruthEvent,2); // Generated by MakeProject.
};
} // namespace
#endif
