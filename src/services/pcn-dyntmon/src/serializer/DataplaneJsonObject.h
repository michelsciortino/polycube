/**
* dyntmon API generated from dyntmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* DataplaneJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include <vector>
#include "DataplaneMetricsJsonObject.h"

namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  DataplaneJsonObject : public JsonObjectBase {
public:
  DataplaneJsonObject();
  DataplaneJsonObject(const nlohmann::json &json);
  ~DataplaneJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// eBPF program name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// eBPF source code
  /// </summary>
  std::string getCode() const;
  void setCode(std::string value);
  bool codeIsSet() const;
  void unsetCode();

  /// <summary>
  /// Exported Metric
  /// </summary>
  const std::vector<DataplaneMetricsJsonObject>& getMetrics() const;
  void addDataplaneMetrics(DataplaneMetricsJsonObject value);
  bool metricsIsSet() const;
  void unsetMetrics();

private:
  std::string m_name;
  bool m_nameIsSet;
  std::string m_code;
  bool m_codeIsSet;
  std::vector<DataplaneMetricsJsonObject> m_metrics;
  bool m_metricsIsSet;
};

}
}
}

