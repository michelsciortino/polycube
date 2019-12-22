/**
* dynmonitor API generated from dynmonitor.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


#pragma once


#include "../base/DataplaneBase.h"

#include "DataplaneMetrics.h"

class Dynmonitor;

using namespace polycube::service::model;

class Dataplane : public DataplaneBase {
 public:
  Dataplane(Dynmonitor &parent, const DataplaneJsonObject &conf);
  virtual ~Dataplane();

  /// <summary>
  /// Program name
  /// </summary>
  std::string getName() override;
  void setName(const std::string &value) override;

  /// <summary>
  /// eBPF code
  /// </summary>
  std::string getCode() override;
  void setCode(const std::string &value) override;

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<DataplaneMetrics> getMetrics() override;
  void addMetrics(const DataplaneMetricsJsonObject &value) override;
  void replaceMetrics(const DataplaneMetricsJsonObject &conf) override;
  void delMetrics() override;
};
