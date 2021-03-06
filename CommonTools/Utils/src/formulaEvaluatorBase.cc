// -*- C++ -*-
//
// Package:     CommonTools/Utils
// Class  :     reco::formula::EvaluatorBase
// 
// Implementation:
//     [Notes on implementation]
//
// Original Author:  Christopher Jones
//         Created:  Wed, 23 Sep 2015 16:26:03 GMT
//

// system include files

// user include files
#include "CommonTools/Utils/src/formulaEvaluatorBase.h"


//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
reco::formula::EvaluatorBase::EvaluatorBase():
  m_precidence(static_cast<unsigned int>(Precidence::kFunction))
{
}

reco::formula::EvaluatorBase::EvaluatorBase(Precidence iPrec):
  m_precidence(static_cast<unsigned int>(iPrec))
{
}

reco::formula::EvaluatorBase::~EvaluatorBase()
{
}

