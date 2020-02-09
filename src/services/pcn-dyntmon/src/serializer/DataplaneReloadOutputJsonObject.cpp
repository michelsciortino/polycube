/**
* dyntmon API generated from dyntmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "DataplaneReloadOutputJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

DataplaneReloadOutputJsonObject::DataplaneReloadOutputJsonObject() {
  m_messageIsSet = false;
}

DataplaneReloadOutputJsonObject::DataplaneReloadOutputJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_messageIsSet = false;


  if (val.count("message")) {
    setMessage(val.at("message").get<std::string>());
  }
}

nlohmann::json DataplaneReloadOutputJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_messageIsSet) {
    val["message"] = m_message;
  }

  return val;
}

std::string DataplaneReloadOutputJsonObject::getMessage() const {
  return m_message;
}

void DataplaneReloadOutputJsonObject::setMessage(std::string value) {
  m_message = value;
  m_messageIsSet = true;
}

bool DataplaneReloadOutputJsonObject::messageIsSet() const {
  return m_messageIsSet;
}

void DataplaneReloadOutputJsonObject::unsetMessage() {
  m_messageIsSet = false;
}


}
}
}

