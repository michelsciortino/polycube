/**
* dynmonitor API generated from dynmonitor.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* DynmonitorJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "DataplaneJsonObject.h"
#include "MetricsJsonObject.h"
#include "polycube/services/cube.h"

namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  DynmonitorJsonObject : public JsonObjectBase {
public:
  DynmonitorJsonObject();
  DynmonitorJsonObject(const nlohmann::json &json);
  ~DynmonitorJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Name of the dynmonitor service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

  /// <summary>
  ///
  /// </summary>
  DataplaneJsonObject getDataplane() const;
  void setDataplane(DataplaneJsonObject value);
  bool dataplaneIsSet() const;
  void unsetDataplane();

  /// <summary>
  ///
  /// </summary>
  MetricsJsonObject getMetrics() const;
  void setMetrics(MetricsJsonObject value);
  bool metricsIsSet() const;
  void unsetMetrics();

private:
  std::string m_name;
  bool m_nameIsSet;
  DataplaneJsonObject m_dataplane;
  bool m_dataplaneIsSet;
  MetricsJsonObject m_metrics;
  bool m_metricsIsSet;
};

}
}
}

