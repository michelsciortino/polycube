/**
* dyntmon API generated from dyntmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "DataplaneJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

DataplaneJsonObject::DataplaneJsonObject() {
  m_nameIsSet = false;
  m_codeIsSet = false;
  m_metricsIsSet = false;
}

DataplaneJsonObject::DataplaneJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_codeIsSet = false;
  m_metricsIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("code")) {
    setCode(val.at("code").get<std::string>());
  }

  if (val.count("metrics")) {
    for (auto& item : val["metrics"]) {
      DataplaneMetricsJsonObject newItem{ item };
      m_metrics.push_back(newItem);
    }

    m_metricsIsSet = true;
  }
}

nlohmann::json DataplaneJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_codeIsSet) {
    val["code"] = m_code;
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_metrics) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["metrics"] = jsonArray;
    }
  }

  return val;
}

std::string DataplaneJsonObject::getName() const {
  return m_name;
}

void DataplaneJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool DataplaneJsonObject::nameIsSet() const {
  return m_nameIsSet;
}

void DataplaneJsonObject::unsetName() {
  m_nameIsSet = false;
}

std::string DataplaneJsonObject::getCode() const {
  return m_code;
}

void DataplaneJsonObject::setCode(std::string value) {
  m_code = value;
  m_codeIsSet = true;
}

bool DataplaneJsonObject::codeIsSet() const {
  return m_codeIsSet;
}

void DataplaneJsonObject::unsetCode() {
  m_codeIsSet = false;
}

const std::vector<DataplaneMetricsJsonObject>& DataplaneJsonObject::getMetrics() const{
  return m_metrics;
}

void DataplaneJsonObject::addDataplaneMetrics(DataplaneMetricsJsonObject value) {
  m_metrics.push_back(value);
  m_metricsIsSet = true;
}


bool DataplaneJsonObject::metricsIsSet() const {
  return m_metricsIsSet;
}

void DataplaneJsonObject::unsetMetrics() {
  m_metricsIsSet = false;
}


}
}
}

