/**
* dynmonitor API generated from dynmonitor.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "DataplaneMetricsCountersJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

DataplaneMetricsCountersJsonObject::DataplaneMetricsCountersJsonObject() {
  m_nameIsSet = false;
  m_tableNameIsSet = false;
  m_tableTypeIsSet = false;
  m_minEntriesIsSet = false;
  m_lablesIsSet = false;
}

DataplaneMetricsCountersJsonObject::DataplaneMetricsCountersJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_tableNameIsSet = false;
  m_tableTypeIsSet = false;
  m_minEntriesIsSet = false;
  m_lablesIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("table-name")) {
    setTableName(val.at("table-name").get<std::string>());
  }

  if (val.count("table-type")) {
    setTableType(val.at("table-type").get<std::string>());
  }

  if (val.count("min-entries")) {
    setMinEntries(val.at("min-entries").get<uint64_t>());
  }

  if (val.count("lables")) {
    for (auto& item : val["lables"]) {
      DataplaneMetricsCountersLablesJsonObject newItem{ item };
      m_lables.push_back(newItem);
    }

    m_lablesIsSet = true;
  }
}

nlohmann::json DataplaneMetricsCountersJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_tableNameIsSet) {
    val["table-name"] = m_tableName;
  }

  if (m_tableTypeIsSet) {
    val["table-type"] = m_tableType;
  }

  if (m_minEntriesIsSet) {
    val["min-entries"] = m_minEntries;
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_lables) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["lables"] = jsonArray;
    }
  }

  return val;
}

std::string DataplaneMetricsCountersJsonObject::getName() const {
  return m_name;
}

void DataplaneMetricsCountersJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool DataplaneMetricsCountersJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



std::string DataplaneMetricsCountersJsonObject::getTableName() const {
  return m_tableName;
}

void DataplaneMetricsCountersJsonObject::setTableName(std::string value) {
  m_tableName = value;
  m_tableNameIsSet = true;
}

bool DataplaneMetricsCountersJsonObject::tableNameIsSet() const {
  return m_tableNameIsSet;
}

void DataplaneMetricsCountersJsonObject::unsetTableName() {
  m_tableNameIsSet = false;
}

std::string DataplaneMetricsCountersJsonObject::getTableType() const {
  return m_tableType;
}

void DataplaneMetricsCountersJsonObject::setTableType(std::string value) {
  m_tableType = value;
  m_tableTypeIsSet = true;
}

bool DataplaneMetricsCountersJsonObject::tableTypeIsSet() const {
  return m_tableTypeIsSet;
}

void DataplaneMetricsCountersJsonObject::unsetTableType() {
  m_tableTypeIsSet = false;
}

uint64_t DataplaneMetricsCountersJsonObject::getMinEntries() const {
  return m_minEntries;
}

void DataplaneMetricsCountersJsonObject::setMinEntries(uint64_t value) {
  m_minEntries = value;
  m_minEntriesIsSet = true;
}

bool DataplaneMetricsCountersJsonObject::minEntriesIsSet() const {
  return m_minEntriesIsSet;
}

void DataplaneMetricsCountersJsonObject::unsetMinEntries() {
  m_minEntriesIsSet = false;
}

const std::vector<DataplaneMetricsCountersLablesJsonObject>& DataplaneMetricsCountersJsonObject::getLables() const{
  return m_lables;
}

void DataplaneMetricsCountersJsonObject::addDataplaneMetricsCountersLables(DataplaneMetricsCountersLablesJsonObject value) {
  m_lables.push_back(value);
  m_lablesIsSet = true;
}


bool DataplaneMetricsCountersJsonObject::lablesIsSet() const {
  return m_lablesIsSet;
}

void DataplaneMetricsCountersJsonObject::unsetLables() {
  m_lablesIsSet = false;
}


}
}
}

