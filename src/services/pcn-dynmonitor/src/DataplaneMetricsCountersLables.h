/**
* dynmonitor API generated from dynmonitor.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


#pragma once


#include "../base/DataplaneMetricsCountersLablesBase.h"


class DataplaneMetricsCounters;

using namespace polycube::service::model;

class DataplaneMetricsCountersLables : public DataplaneMetricsCountersLablesBase {
 public:
  DataplaneMetricsCountersLables(DataplaneMetricsCounters &parent, const DataplaneMetricsCountersLablesJsonObject &conf);
  virtual ~DataplaneMetricsCountersLables();

  /// <summary>
  /// LableName
  /// </summary>
  std::string getName() override;
};
