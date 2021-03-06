/**
* dynmon API generated from dynmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "DataplaneMetricsOpenMetricsMetadataJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

DataplaneMetricsOpenMetricsMetadataJsonObject::DataplaneMetricsOpenMetricsMetadataJsonObject() {
  m_helpIsSet = false;
  m_typeIsSet = false;
  m_labelsIsSet = false;
}

DataplaneMetricsOpenMetricsMetadataJsonObject::DataplaneMetricsOpenMetricsMetadataJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_helpIsSet = false;
  m_typeIsSet = false;
  m_labelsIsSet = false;


  if (val.count("help")) {
    setHelp(val.at("help").get<std::string>());
  }

  if (val.count("type")) {
    setType(string_to_DataplaneMetricsOpenMetricsMetadataTypeEnum(val.at("type").get<std::string>()));
  }

  if (val.count("labels")) {
    for (auto& item : val["labels"]) {
      DataplaneMetricsOpenMetricsMetadataLabelsJsonObject newItem{ item };
      m_labels.push_back(newItem);
    }

    m_labelsIsSet = true;
  }
}

nlohmann::json DataplaneMetricsOpenMetricsMetadataJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_helpIsSet) {
    val["help"] = m_help;
  }

  if (m_typeIsSet) {
    val["type"] = DataplaneMetricsOpenMetricsMetadataTypeEnum_to_string(m_type);
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_labels) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["labels"] = jsonArray;
    }
  }

  return val;
}

std::string DataplaneMetricsOpenMetricsMetadataJsonObject::getHelp() const {
  return m_help;
}

void DataplaneMetricsOpenMetricsMetadataJsonObject::setHelp(std::string value) {
  m_help = value;
  m_helpIsSet = true;
}

bool DataplaneMetricsOpenMetricsMetadataJsonObject::helpIsSet() const {
  return m_helpIsSet;
}

void DataplaneMetricsOpenMetricsMetadataJsonObject::unsetHelp() {
  m_helpIsSet = false;
}

DataplaneMetricsOpenMetricsMetadataTypeEnum DataplaneMetricsOpenMetricsMetadataJsonObject::getType() const {
  return m_type;
}

void DataplaneMetricsOpenMetricsMetadataJsonObject::setType(DataplaneMetricsOpenMetricsMetadataTypeEnum value) {
  m_type = value;
  m_typeIsSet = true;
}

bool DataplaneMetricsOpenMetricsMetadataJsonObject::typeIsSet() const {
  return m_typeIsSet;
}

void DataplaneMetricsOpenMetricsMetadataJsonObject::unsetType() {
  m_typeIsSet = false;
}

std::string DataplaneMetricsOpenMetricsMetadataJsonObject::DataplaneMetricsOpenMetricsMetadataTypeEnum_to_string(const DataplaneMetricsOpenMetricsMetadataTypeEnum &value){
  switch(value) {
    case DataplaneMetricsOpenMetricsMetadataTypeEnum::COUNTER:
      return std::string("counter");
    case DataplaneMetricsOpenMetricsMetadataTypeEnum::GAUGE:
      return std::string("gauge");
    case DataplaneMetricsOpenMetricsMetadataTypeEnum::HISTOGRAM:
      return std::string("histogram");
    case DataplaneMetricsOpenMetricsMetadataTypeEnum::SUMMARY:
      return std::string("summary");
    case DataplaneMetricsOpenMetricsMetadataTypeEnum::UNTYPED:
      return std::string("untyped");
    default:
      throw std::runtime_error("Bad DataplaneMetricsOpenMetricsMetadata type");
  }
}

DataplaneMetricsOpenMetricsMetadataTypeEnum DataplaneMetricsOpenMetricsMetadataJsonObject::string_to_DataplaneMetricsOpenMetricsMetadataTypeEnum(const std::string &str){
  if (JsonObjectBase::iequals("counter", str))
    return DataplaneMetricsOpenMetricsMetadataTypeEnum::COUNTER;
  if (JsonObjectBase::iequals("gauge", str))
    return DataplaneMetricsOpenMetricsMetadataTypeEnum::GAUGE;
  if (JsonObjectBase::iequals("histogram", str))
    return DataplaneMetricsOpenMetricsMetadataTypeEnum::HISTOGRAM;
  if (JsonObjectBase::iequals("summary", str))
    return DataplaneMetricsOpenMetricsMetadataTypeEnum::SUMMARY;
  if (JsonObjectBase::iequals("untyped", str))
    return DataplaneMetricsOpenMetricsMetadataTypeEnum::UNTYPED;
  throw std::runtime_error("DataplaneMetricsOpenMetricsMetadata type is invalid");
}
const std::vector<DataplaneMetricsOpenMetricsMetadataLabelsJsonObject>& DataplaneMetricsOpenMetricsMetadataJsonObject::getLabels() const{
  return m_labels;
}

void DataplaneMetricsOpenMetricsMetadataJsonObject::addDataplaneMetricsOpenMetricsMetadataLabels(DataplaneMetricsOpenMetricsMetadataLabelsJsonObject value) {
  m_labels.push_back(value);
  m_labelsIsSet = true;
}


bool DataplaneMetricsOpenMetricsMetadataJsonObject::labelsIsSet() const {
  return m_labelsIsSet;
}

void DataplaneMetricsOpenMetricsMetadataJsonObject::unsetLabels() {
  m_labelsIsSet = false;
}


}
}
}

