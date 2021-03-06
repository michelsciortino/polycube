/**
* router API generated from router.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* ArpTableJsonObject.h
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
class  ArpTableJsonObject : public JsonObjectBase {
public:
  ArpTableJsonObject();
  ArpTableJsonObject(const nlohmann::json &json);
  ~ArpTableJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Destination IP address
  /// </summary>
  std::string getAddress() const;
  void setAddress(std::string value);
  bool addressIsSet() const;

  /// <summary>
  /// Destination MAC address
  /// </summary>
  std::string getMac() const;
  void setMac(std::string value);
  bool macIsSet() const;

  /// <summary>
  /// Outgoing interface
  /// </summary>
  std::string getInterface() const;
  void setInterface(std::string value);
  bool interfaceIsSet() const;

private:
  std::string m_address;
  bool m_addressIsSet;
  std::string m_mac;
  bool m_macIsSet;
  std::string m_interface;
  bool m_interfaceIsSet;
};

}
}
}

