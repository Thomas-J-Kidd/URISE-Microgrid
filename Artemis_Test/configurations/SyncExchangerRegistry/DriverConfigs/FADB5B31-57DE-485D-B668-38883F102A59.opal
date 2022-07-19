OPAL-1.0 Object
DataLogger::Configuration {
  m01_recordMode=Automatic
  m05_useRTCore=0
  m06_verbose=0
  m09_noDataLoss=0
  m13_usageMode=Basic
  m14_logLevel=Minimal
  m15_toolPriority=NORMAL
  m17_showDLTConsole=0
  name=FADB5B31-57DE-485D-B668-38883F102A59_Config810ACA22-12AC-446D-912A-597CE74F5075
  m10_signalGroupConfigList=FADB5B31-57DE-485D-B668-38883F102A59_Config810ACA22-12AC-446D-912A-597CE74F5075/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=FADB5B31-57DE-485D-B668-38883F102A59_Config810ACA22-12AC-446D-912A-597CE74F5075/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=A3673812-C041-4155-BB85-AE404FF1CCD6-default/SyncExchangerRegistry/8BB3598A-0F4C-478E-994E-80AB45C9EA98/FADB5B31-57DE-485D-B668-38883F102A59_Config810ACA22-12AC-446D-912A-597CE74F5075/SignalGroupConfigList
      instance {
        guid=C26EA77A-0F2E-4C62-8F15-6E66A3D40A26
        m003_recordMode=Inherit
        m006_exportFormat=OPREC
        m007_fileAutoNaming=1
        m010_fileName=data
        m011_decimationFactor=1
        m015_frameLength=1
        m016_frameLengthUnits=Seconds
        m020_nbRecordedFrames=10
        m021_fileLength=10
        m022_fileLengthUnits=Seconds
        m11_showTriggerConfiguration=1
        m12_triggerReferenceValue=0
        m13_triggerMode=Normal
        m14_triggerFunction=Edge
        m15_triggerPolarity=Positive
        m18_preTriggerPercent=0
        m19_triggerHoldoff=0
        m20_triggerSignalPath=
        m35_enableSubFraming=1
        m36_subFrameSizeMillis=10
      }
    }
  }
  parent=FADB5B31-57DE-485D-B668-38883F102A59_Config810ACA22-12AC-446D-912A-597CE74F5075
}