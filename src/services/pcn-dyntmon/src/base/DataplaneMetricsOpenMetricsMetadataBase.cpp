/**
* dyntmon API generated from dyntmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */


#include "DataplaneMetricsOpenMetricsMetadataBase.h"
#include "../Dyntmon.h"


DataplaneMetricsOpenMetricsMetadataBase::DataplaneMetricsOpenMetricsMetadataBase(DataplaneMetrics &parent)
    : parent_(parent) {}

DataplaneMetricsOpenMetricsMetadataBase::~DataplaneMetricsOpenMetricsMetadataBase() {}

void DataplaneMetricsOpenMetricsMetadataBase::update(const DataplaneMetricsOpenMetricsMetadataJsonObject &conf) {

  if (conf.helpIsSet()) {
    setHelp(conf.getHelp());
  }
  if (conf.typeIsSet()) {
    setType(conf.getType());
  }
  if (conf.labelIsSet()) {
    for (auto &i : conf.getLabel()) {
      auto name = i.getName();
      auto m = getLabel(name);
      m->update(i);
    }
  }
}

DataplaneMetricsOpenMetricsMetadataJsonObject DataplaneMetricsOpenMetricsMetadataBase::toJsonObject() {
  DataplaneMetricsOpenMetricsMetadataJsonObject conf;

  conf.setHelp(getHelp());
  conf.setType(getType());
  for(auto &i : getLabelList()) {
    conf.addDataplaneMetricsOpenMetricsMetadataLabel(i->toJsonObject());
  }

  return conf;
}
void DataplaneMetricsOpenMetricsMetadataBase::addLabelList(const std::vector<DataplaneMetricsOpenMetricsMetadataLabelJsonObject> &conf) {
  for (auto &i : conf) {
    std::string name_ = i.getName();
    addLabel(name_, i);
  }
}

void DataplaneMetricsOpenMetricsMetadataBase::replaceLabel(const std::string &name, const DataplaneMetricsOpenMetricsMetadataLabelJsonObject &conf) {
  delLabel(name);
  std::string name_ = conf.getName();
  addLabel(name_, conf);
}

void DataplaneMetricsOpenMetricsMetadataBase::delLabelList() {
  auto elements = getLabelList();
  for (auto &i : elements) {
    std::string name_ = i->getName();
    delLabel(name_);
  }
}

std::shared_ptr<spdlog::logger> DataplaneMetricsOpenMetricsMetadataBase::logger() {
  return parent_.logger();
}

