#ifndef TRACKDISCONTINUITY_INFRALIB_INTERFACE
#define TRACKDISCONTINUITY_INFRALIB_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "TrackDiscontinuity_InfraLib.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_TrackDiscontinuity_InfraLib inputs_ctx;
extern outC_TrackDiscontinuity_InfraLib outputs_ctx;

/* separate_io: inputs declaration */

/* separate_io: outputs declaration */
/*******************************
 * Validity
 *******************************/
extern int valid(void*);
extern int notvalid(void*);

#ifdef EXTENDED_SIM
void BeforeSimInit();
void AfterSimInit();
void BeforeSimStep();
void AfterSimStep();
void ExtendedSimStop();
void ExtendedGatherDumpData(char * pData);
void ExtendedRestoreDumpData(const char * pData);
int ExtendedGetDumpSize();
void UpdateValues();
extern void UpdateSimulatorValues();
extern int GraphicalInputsConnected;
#endif /* EXTENDED_SIM */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#endif /*TRACKDISCONTINUITY_INFRALIB_INTERFACE */
