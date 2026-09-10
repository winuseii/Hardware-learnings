# M01 — Servo Current Characterisation

> **Measured SG90 stall current: approximately 650 mA.**

**Mission:** Servo Current Characterisation

---

## What I was trying to find out

I wanted to understand how to use a multimeter to observe the electrical behaviour of small servo motors under different operating conditions. I was particularly interested in the difference between normal operation, holding a small load, and a true stall, and in comparing the measured stall current with the quoted value in my notes.

---

## Result

| Metric                         | Unit | Measured | Instrument                    |
| ------------------------------ | ---- | -------: | ----------------------------- |
| SG90 no-load sweep             | mA   |       25 | Digital multimeter, 10 A jack |
| SG90 no-load, stationary       | mA   |    12–14 | Digital multimeter            |
| SG90 holding eraser            | mA   |       30 | Digital multimeter            |
| SG90 stall                     | mA   |     ≈650 | Digital multimeter, 10 A jack |
| MG90S stall                    | mA   |     ≈600 | Digital multimeter, 10 A jack |
| Battery pack, open circuit     | V    |      6.2 | Digital multimeter            |
| Battery pack during SG90 stall | V    |     ≈5.9 | Digital multimeter            |

The AA battery pack of 4 measured **6.2 V with no load** and approximately **5.9 V during the SG90 stall**.

The SG90 drew about **30 mA while holding the eraser**, compared with approximately **650 mA when the horn was physically blocked**.

---

## Method

1. Connected the SG90 servo to an Arduino Uno for position control. The servo was powered from a separate four-AA battery pack, with the Arduino and servo grounds connected together.
2. Connected the multimeter in series with the servo power supply to measure current. The 10 A jack was used for the higher-current measurements.
3. Measured the SG90 during a no-load sweep, while stationary with no load, while holding an eraser, and during a short stall. The MG90S stall current was then measured using the same method.
4. Measured the battery-pack voltage in DC voltage mode and compared the measured SG90 stall current with the quoted value in my notes.

---

## Battery voltage and source resistance

The battery voltage dropped from approximately **6.2 V** with no load to **5.9 V** during the SG90 stall.

```text
ΔV = 6.2 V - 5.9 V
   = 0.3 V
```

Using the measured stall current:

```text
R = ΔV / I
  = 0.3 V / 0.65 A
  ≈ 0.46 Ω
```

This gives an estimated effective source resistance of approximately **0.46 Ω** under the test conditions.

---

## Observation

The main observation from the servo tests was that the current was closely related to the **position error** the servo was trying to correct.

The eraser produced a relatively small opposing torque, so the servo could maintain its commanded position with only about **30 mA**. When the horn was physically blocked, the servo could not reach the commanded position, producing a much larger position error. The current increased to approximately **650 mA**.

---

## Conclusion

This experiment gave me practical experience measuring **resistance, voltage, and current** with a multimeter and reinforced the difference between series and parallel measurement.

The servo tests also showed a clear difference between normal operation, holding a load, and a true stall. The SG90 drew about **30 mA while holding the eraser** but approximately **650 mA when the horn was blocked**.

The measured stall current was also within the **500–700 mA** range recorded in my notes.
