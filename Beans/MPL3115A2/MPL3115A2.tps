<?xml version="1.0" encoding="UTF-8"?>
<TypesAndGlobals>
  <Types>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyI2CSlaveAddress</Name>
      <Items lines_count="1">
        <Line>0x60</Line>
      </Items>
      <Hints lines_count="1">
        <Line>I2C slave address (Only one address accessible)</Line>
      </Hints>
      <Defines lines_count="1">
        <Line>0x60</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyBarometerAltimeter</Name>
      <Items lines_count="2">
        <Line>Altimeter</Line>
        <Line>Barometer</Line>
      </Items>
      <Hints lines_count="2">
        <Line>Part is in Altimeter mode</Line>
        <Line>Part is in Barometer mode</Line>
      </Hints>
      <Defines lines_count="2">
        <Line>1</Line>
        <Line>0</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyTimeStep</Name>
      <Items lines_count="7">
        <Line>1 second</Line>
        <Line>2 seconds</Line>
        <Line>4 seconds</Line>
        <Line>8 seconds</Line>
        <Line>16 seconds</Line>
        <Line>32 seconds</Line>
        <Line>64 seconds</Line>
      </Items>
      <Hints lines_count="7">
        <Line>Time step : 1s.</Line>
        <Line>Time step : 2s.</Line>
        <Line>Time step : 4s.</Line>
        <Line>Time step : 8s.</Line>
        <Line>Time step : 16s.</Line>
        <Line>Time step : 32s.</Line>
        <Line>Time step : 64s.</Line>
      </Hints>
      <Defines lines_count="7">
        <Line>0</Line>
        <Line>1</Line>
        <Line>2</Line>
        <Line>3</Line>
        <Line>4</Line>
        <Line>5</Line>
        <Line>6</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyOSR</Name>
      <Items lines_count="8">
        <Line>1</Line>
        <Line>2</Line>
        <Line>4</Line>
        <Line>8</Line>
        <Line>16</Line>
        <Line>32</Line>
        <Line>64</Line>
        <Line>128</Line>
      </Items>
      <Hints lines_count="8">
        <Line>Oversampling Ratio. Minimum time between data samples : 6ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 10ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 18ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 34ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 66ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 130ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 258ms</Line>
        <Line>Oversampling Ratio. Minimum time between data samples : 512ms</Line>
      </Hints>
      <Defines lines_count="8">
        <Line>(0&lt;&lt;3)</Line>
        <Line>(1&lt;&lt;3)</Line>
        <Line>(2&lt;&lt;3)</Line>
        <Line>(3&lt;&lt;3)</Line>
        <Line>(4&lt;&lt;3)</Line>
        <Line>(5&lt;&lt;3)</Line>
        <Line>(6&lt;&lt;3)</Line>
        <Line>(7&lt;&lt;3)</Line>
      </Defines>
    </Type>
  </Types>
</TypesAndGlobals>

