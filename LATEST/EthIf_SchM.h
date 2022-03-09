#pragma once
/*****************************************************/
/* File   : EthIf_SchM.h                             */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_EthIf.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class infEthIf_SchM{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, ETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionState (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern infSchMClient* gptrinfSchMClient_EthIf;
extern infEthIf_SchM* gptrinfEthIf_SchM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

