/**
* dyntmon API generated from dyntmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* DataplaneReloadOutputJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  DataplaneReloadOutputJsonObject : public JsonObjectBase {
public:
  DataplaneReloadOutputJsonObject();
  DataplaneReloadOutputJsonObject(const nlohmann::json &json);
  ~DataplaneReloadOutputJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Reload the ebpf code
  /// </summary>
  std::string getMessage() const;
  void setMessage(std::string value);
  bool messageIsSet() const;
  void unsetMessage();

private:
  std::string m_message;
  bool m_messageIsSet;
};

}
}
}

