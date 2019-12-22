/**
* dynmonitor API generated from dynmonitor.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


// TODO: Modify these methods with your own implementation


#include "DataplaneMetrics.h"
#include "Dynmonitor.h"


DataplaneMetrics::DataplaneMetrics(Dataplane &parent, const DataplaneMetricsJsonObject &conf)
    : DataplaneMetricsBase(parent) {
  addCountersList(conf.getCounters());
}

DataplaneMetrics::~DataplaneMetrics() {}
std::shared_ptr<DataplaneMetricsCounters> DataplaneMetrics::getCounters(const std::string &name) {
  throw std::runtime_error("DataplaneMetrics::getEntry: Method not implemented");
}

std::vector<std::shared_ptr<DataplaneMetricsCounters>> DataplaneMetrics::getCountersList() {
  throw std::runtime_error("DataplaneMetrics::getCountersList: Method not implemented");
}

void DataplaneMetrics::addCounters(const std::string &name, const DataplaneMetricsCountersJsonObject &conf) {
  throw std::runtime_error("DataplaneMetrics::addCounters: Method not implemented");
}

// Basic default implementation, place your extension here (if needed)
void DataplaneMetrics::addCountersList(const std::vector<DataplaneMetricsCountersJsonObject> &conf) {
  // call default implementation in base class
  DataplaneMetricsBase::addCountersList(conf);
}

// Basic default implementation, place your extension here (if needed)
void DataplaneMetrics::replaceCounters(const std::string &name, const DataplaneMetricsCountersJsonObject &conf) {
  // call default implementation in base class
  DataplaneMetricsBase::replaceCounters(name, conf);
}

void DataplaneMetrics::delCounters(const std::string &name) {
  throw std::runtime_error("DataplaneMetrics::delCounters: Method not implemented");
}

// Basic default implementation, place your extension here (if needed)
void DataplaneMetrics::delCountersList() {
  // call default implementation in base class
  DataplaneMetricsBase::delCountersList();
}


