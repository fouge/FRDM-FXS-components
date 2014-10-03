<?xml version="1.0" encoding="UTF-8"?>
<TypesAndGlobals>
  <Types>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyI2CSlaveAddress</Name>
      <Items lines_count="4">
        <Line>1E</Line>
        <Line>1D</Line>
        <Line>1C</Line>
        <Line>1F</Line>
      </Items>
      <Hints lines_count="4">
        <Line>I2C Device Slave Address, with SA1 set to LOW and SA0 set to LOW.</Line>
        <Line>I2C Device Slave Address, with SA1 set to LOW and SA0 set to HIGH.</Line>
        <Line>I2C Device Slave Address, with SA1 set to HIGH and SA0 set to LOW.</Line>
        <Line>I2C Device Slave Address, with SA1 set to HIGH and SA0 set to HIGH.</Line>
      </Hints>
      <Defines lines_count="4">
        <Line>0x1E</Line>
        <Line>0x1D</Line>
        <Line>0x1C</Line>
        <Line>0x1F</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyAslpRate</Name>
      <Items lines_count="4">
        <Line>50 Hz</Line>
        <Line>12.5 Hz</Line>
        <Line>6.25 Hz</Line>
        <Line>1.56</Line>
      </Items>
      <Hints lines_count="4">
        <Line>Sample frequency when in sleep mode to 50 Hz</Line>
        <Line>Sample frequency when in sleep mode to 12.5 Hz</Line>
        <Line>Sample frequency when in sleep mode to 6.25 Hz</Line>
        <Line>Sample frequency when in sleep mode to 1.56 Hz</Line>
      </Hints>
      <Defines lines_count="4">
        <Line>(0x0 &lt;&lt; 6)</Line>
        <Line>(0x1 &lt;&lt; 6)</Line>
        <Line>(0x2 &lt;&lt; 6)</Line>
        <Line>(0x3 &lt;&lt; 6)</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typePropertyAccelDataRate</Name>
      <Items lines_count="4">
        <Line>200 Hz</Line>
        <Line>100 Hz</Line>
        <Line>50</Line>
        <Line>12.5</Line>
      </Items>
      <Hints lines_count="4">
        <Line>Accelerometer Output Data Rate (ODR) set to 200Hz.</Line>
        <Line>Accelerometer Output Data Rate (ODR) set to 200Hz.</Line>
        <Line>Accelerometer Output Data Rate (ODR) set to 200Hz.</Line>
        <Line>Accelerometer Output Data Rate (ODR) set to 200Hz.</Line>
      </Hints>
      <Defines lines_count="4">
        <Line>(0x02 &lt;&lt; 3)</Line>
        <Line>(0x03 &lt;&lt; 3)</Line>
        <Line>(0x04 &lt;&lt; 3)</Line>
        <Line>(0x04 &lt;&lt; 3)</Line>
      </Defines>
    </Type>
  </Types>
</TypesAndGlobals>

