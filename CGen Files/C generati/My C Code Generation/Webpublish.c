/****************************************************************************************
 *	LabVIEW (TM) Code Generator 11.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: Webpublish.vi
 *	Generated from: E:\Programming\LabVIEW\M\My Libraby\Webpublish\Webpublish.vi
 *  Generated UI: false
 *  Generated Debug Info: false
 *  Generated Serial Only: true
 *  Generated Stack Variables: false
 *  Generated Guard Code: true
 *  Generated Interrupt Code: false
 *  Generated C Function Calls: true
 *  Generated Integer Only : false
 *  Generated Expression Folding : true
 *  Generated memory model: dynamic
*****************************************************************************************/
#define LV_MAIN
#include "LVCGenIncludes.h"
#include "WebpublishLib.h"
#if CGEN_VERSION != 11000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _Webpublish_heap { 
	float64 n_Random_Number__0_1__number__0;
	uInt32 extraEF_1;  
	uInt32 dw_milliseconds_to_wait;
	int32 l_While_Loop_i;
	Boolean b_Boolean_CS;
	Boolean b_Boolean;
	Boolean b_stop;
	Boolean b_While_Loop_End;
} _DATA_SECTION __Webpublish_heap; /* heap */

static struct _Webpublish_heap _DATA_SECTION *heap = &__Webpublish_heap; /* heap */



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION Webpublish_CleanupLSRs(void);
void _TEXT_SECTION Webpublish_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION Webpublish_AddSubVIInstanceData(void);
void _TEXT_SECTION Webpublish_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION Webpublish_AddVIGlobalConstants(void);
void _TEXT_SECTION Webpublish_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION Webpublish_InitVIConstantList(void);
void _TEXT_SECTION Webpublish_InitVIConstantList(void) {
}


/****** Block diagram code **********/


static Boolean Boolean__2B = false;
static DataType dtBoolean__2B = BooleanDataType;
static float64 Numeric__47_init_ = 0.0000000000000000000E+0 ;
static float64* Numeric__47 = &Numeric__47_init_;
static DataType dtNumeric__47 = doubleDataType;
static Boolean stop__121 = false;
static DataType dtstop__121 = BooleanDataType;
extern eRunStatus Webpublish_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	Webpublish_InitVIConstantList();
	{
		heap->l_While_Loop_i = 0;
		do {
			{
				heap->extraEF_1 = 0;
				heap->b_stop =stop__121;
				stop__121 =false;
				heap->dw_milliseconds_to_wait = 100;
				heap->b_Boolean =Boolean__2B;
				{ /* Select */
					heap->b_Boolean_CS = heap->b_Boolean;
					/* begin case */
					if ( heap->b_Boolean_CS ) {
						{
							/**/
							/* Random Number (0-1) */
							/**/
							heap->n_Random_Number__0_1__number__0 = ((float32)SysRandom(0)/(float32)sysRandomMax);
							*Numeric__47 = heap->n_Random_Number__0_1__number__0;
						}
					} /* end case */
					/* begin case */
					else {
						{
						}
					} /* end case */
				} /* end switch */
				/**/
				/* Wait (ms) */
				/**/
				{
					eRunStatus runStatLocal=eFinished;
					runStatLocal = PrimWaitMS((Boolean)(bRunToFinish && (nReady  < 2)), (uInt32)heap->dw_milliseconds_to_wait, (uInt32 *)&(heap->extraEF_1));
					if (runStatLocal == eFail) {
						CGenErr();
					}
					if (runStatLocal == eFinished) {
						heap->extraEF_1 = 0L;
					}
				};
			}
			(heap->l_While_Loop_i)++;
		}
		while(!heap->b_stop && !gAppStop && !gLastError);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr Webpublish_VIName = "Webpublish.vi";

eRunStatus Webpublish_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus Webpublish_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	Webpublish_AddSubVIInstanceData();
	return Webpublish_Run();
}


/****** Library interface **********/


void Webpublish()
{
	int32 i;
	LVCGenRTInit();

	/* Init globals */
	for (i=0;i<sizeof(globTable)/sizeof(InitFPTermsFunc);i++) {
		(*(globTable[i]))(NULL, false);
	}

	/* Init VI Constants */
	for (i=0;i<sizeof(globConstInitTable)/sizeof(VoidFn);i++) {
		(*(globConstInitTable[i]))();
	}

	Webpublish_AddSubVIInstanceData();
	Webpublish_InitVIConstantList();

	/* Call top level VI main function */
	Webpublish_Run();

	/* Cleanup VI Constants */
	for (i=0;i<sizeof(globConstCleanupTable)/sizeof(VoidFn);i++) {
		(*(globConstCleanupTable[i]))();
	}

	/* Cleanup globals */
	for (i=0;i<sizeof(globCleanupTable)/sizeof(VoidFn);i++) {
		(*(globCleanupTable[i]))(false);
	}

	for (i=0;i<sizeof(lsrCleanupTable)/sizeof(VoidFn);i++) {
		(*(lsrCleanupTable[i]))();
	}

	LVCGenRTEnd();
	return;
}



/****** End of generated code **********/


