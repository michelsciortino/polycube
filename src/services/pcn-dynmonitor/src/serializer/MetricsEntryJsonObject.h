/**
* dynmonitor API generated from dynmonitor.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* MetricsEntryJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "MetricsEntryLablesJsonObject.h"
#include <vector>

namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  MetricsEntryJsonObject : public JsonObjectBase {
public:
  MetricsEntryJsonObject();
  MetricsEntryJsonObject(const nlohmann::json &json);
  ~MetricsEntryJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Metric&#39;s name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

  /// <summary>
  ///
  /// </summary>
  const std::vector<MetricsEntryLablesJsonObject>& getLables() const;
  void addMetricsEntryLables(MetricsEntryLablesJsonObject value);
  bool lablesIsSet() const;
  void unsetLables();

  /// <summary>
  /// Metric&#39;s value
  /// </summary>
  double getValue() const;
  void setValue(double value);
  bool valueIsSet() const;
  void unsetValue();

  /// <summary>
  /// Timestamp
  /// </summary>
  int64_t getTimestamp() const;
  void setTimestamp(int64_t value);
  bool timestampIsSet() const;
  void unsetTimestamp();

private:
  std::string m_name;
  bool m_nameIsSet;
  std::vector<MetricsEntryLablesJsonObject> m_lables;
  bool m_lablesIsSet;
  double m_value;
  bool m_valueIsSet;
  int64_t m_timestamp;
  bool m_timestampIsSet;
};

}
}
}

