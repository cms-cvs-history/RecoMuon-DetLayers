/** \file
 *
 *  $Date: $
 *  $Revision: $
 */

#include <FWCore/Framework/interface/Frameworkfwd.h>
#include <FWCore/Framework/interface/EDAnalyzer.h>
#include <FWCore/Framework/interface/Event.h>
#include <FWCore/Framework/interface/EventSetup.h>
#include <FWCore/Framework/interface/ESHandle.h>
#include <FWCore/ParameterSet/interface/ParameterSet.h>

#include "RecoMuon/DetLayers/interface/MuonDetLayerGeometry.h"
#include "RecoMuon/Records/interface/MuonRecoGeometryRecord.h"



class CSCRecoGeometryAnalyzer : public edm::EDAnalyzer {
 public:

  CSCRecoGeometryAnalyzer( const edm::ParameterSet& pset);

  virtual void analyze( const edm::Event&, const edm::EventSetup& );
};


  
CSCRecoGeometryAnalyzer::CSCRecoGeometryAnalyzer(const edm::ParameterSet& iConfig){}


void CSCRecoGeometryAnalyzer::analyze( const edm::Event& iEvent,
				       const edm::EventSetup& iSetup ) {

  edm::ESHandle<MuonDetLayerGeometry> geo;
  iSetup.get<MuonRecoGeometryRecord>().get( geo );     

}


//define this as a plug-in
#include <FWCore/Framework/interface/MakerMacros.h>
DEFINE_FWK_MODULE(CSCRecoGeometryAnalyzer)
