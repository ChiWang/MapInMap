#include <iostream>
#ifdef My_Debug
#include <assert.h>
#endif
#include <map>
//#include <boost/program_options.hpp>
//-------------------------------------------------------------------
typedef std::map<std::string, int>    sub_map;
typedef std::map<std::string, sub_map>  MyMap;
int main(int argc, char* argv[]){
std::cout<<"DEBUG: "<<__FILE__<<"("<<__LINE__<<"), in "<<__PRETTY_FUNCTION__<<std::endl;

//-------------------------------------------------------------------
  MyMap  myMap; // stack
//-------------------------------------------------------------------
  sub_map  eventMap, metadataMap, calibrationMap;

  myMap.insert(std::make_pair("Event",eventMap));
  myMap.insert(std::make_pair("Meta",metadataMap));
  myMap.insert(std::make_pair("Cali",calibrationMap));

  myMap["Event"].insert(std::make_pair("Sim",5));
  myMap["Event"].insert(std::make_pair("Rdc",30));

  myMap["Meta"].insert(std::make_pair("Sim",15));
  myMap["Meta"].insert(std::make_pair("Rdc",23));

  myMap["Cali"].insert(std::make_pair("Ped",115));
  myMap["Cali"].insert(std::make_pair("Mip",323));


  std::cout<<"Event: "<<myMap["Event"]["Sim"]<<"\t"<<myMap["Event"]["Rdc"]<<std::endl;
  std::cout<<"Meta:  "<<myMap["Meta"]["Sim"]<<"\t"<<myMap["Meta"]["Rdc"]<<std::endl;
  std::cout<<"Cali:  "<<myMap["Cali"]["Ped"]<<"\t"<<myMap["Cali"]["Mip"]<<std::endl;

  return 0;
}


