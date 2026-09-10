<div align="center">
<img src="https://capsule-render.vercel.app/api?type=waving&color=0:E23A3A,100:2a0606&height=210&section=header&text=SERVO+CURRENT+CHARACTERISATION&fontFamily=Impact&fontSize=46&fontColor=FFD5D5&fontAlignY=40" width="100%" />
<a href="#"><img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=250&size=15&pause=1200&color=FF6B6B&center=true&vCenter=true&width=760&lines=%3E+M01++%2F++small+mission;%3E+the+number+leads%2C+everything+else+is+for+the+reader+who+stayed;%3E+no+number%2C+no+ship" alt="typing" /></a>
![](https://img.shields.io/badge/mission-M01-FF6B6B?style=for-the-badge&labelColor=2a0606)
![](https://img.shields.io/badge/tier-small-E23A3A?style=for-the-badge&labelColor=2a0606)
![](https://img.shields.io/badge/status-complete-1f7a3d?style=for-the-badge&labelColor=2a0606)
</div>

> **Measured SG90 stall current of approximately 650 mA, within the quoted 500–700 mA range noted for the servo.**

`M01` small mission in the Autonomy Ladder  ·  **Video** `TODO paste link`

---

## What I was trying to find out

I wanted to understand how to use a multimeter to observe the electrical behaviour of small servo motors rather than treating their current draw as a fixed specification. The main question was how the SG90 and MG90S behaved under normal operation, while holding a small opposing load, and under a true stall condition, and how the measured current compared with the quoted values in my notes. I also wanted to observe how the battery supply voltage changed when the servo demanded a much larger current.

---

## Result

| Metric                                             | Unit |                   Measured | Instrument                                              |
| -------------------------------------------------- | ---- | -------------------------: | ------------------------------------------------------- |
| SG90 no-load sweep, stationary and loaded hold     | mA   | **25 mA, 12–14 mA, 30 mA** | Digital multimeter, 10 A current jack                   |
| SG90 stall current                                 | mA   |                **≈650 mA** | Digital multimeter, 10 A current jack                   |
| MG90S stall current                                | mA   |                **≈600 mA** | Digital multimeter, 10 A current jack                   |
| Supply terminal voltage, no-load against stalled   | V    |          **6.2 V → 5.9 V** | Digital multimeter, DC voltage mode                     |
| Effective source resistance during SG90 stall      | Ω    |                **≈0.46 Ω** | Calculated from measured voltage drop and stall current |
| SG90 stall current against quoted 500–700 mA range | mA   |                 **650 mA** | Digital multimeter vs quoted range                      |

The servo supply was a four-AA series battery pack rather than a regulated 5 V supply. The pack measured **6.2 V open-circuit** and approximately **5.9 V while the SG90 was stalled**.

The SG90 drew about **30 mA while holding the eraser**, but approximately **650 mA when the horn was physically blocked**.

---

## Method

1. Connected an SG90 servo to an Arduino Uno for position control, with the servo powered from a separate four-AA battery pack and the Arduino and servo grounds connected together.
2. Connected the multimeter in series with the servo supply to measure current. The 10 A current jack was used for the higher-current measurements.
3. Measured the SG90 under no-load sweeping, stationary no-load, a small opposing load from an eraser, and a short stall condition. The MG90S stall current was then measured using the same method. The battery-pack voltage was measured separately in DC voltage mode.
4. Compared the measured values with the quoted stall-current range recorded in my notes.

---

## Quoted against measured

| Claim               | Source said                             |  I measured | Gap                                              |
| ------------------- | --------------------------------------- | ----------: | ------------------------------------------------ |
| SG90 stall current  | **500–700 mA** quoted range in my notes | **≈650 mA** | Within quoted range; 50 mA below the upper limit |
| MG90S stall current | Quoted value not recorded here          | **≈600 mA** | —                                                |

The SG90 measurement was approximately **650 mA**, which falls within the quoted **500–700 mA** range recorded in my notes. It was 150 mA above the lower end of the range and 50 mA below the upper end.

---

## Raw data

Raw measurements should be committed in:

`data/M01-servo-current-characterisation.csv`

Suggested contents:

```csv
test,servo,condition,current_mA,voltage_V,notes
1,SG90,no_load_sweep,25,,0_to_180_deg
2,SG90,no_load_stationary,13,,12_to_14_mA_observed
3,SG90,holding_eraser,30,,eraser_on_arm
4,SG90,stall,650,5.9,horn_held_less_than_2_seconds
5,MG90S,stall,600,,same_method
6,battery,open_circuit,,6.2,4xAA_series_pack
```

The raw measurements should be committed rather than only presenting a derived plot.

---

## What I would do differently

I would use a regulated supply with a known voltage for a more controlled comparison, because the four-AA battery pack was measured at 6.2 V with no load and dropped to approximately 5.9 V during the SG90 stall. I would also repeat each current measurement several times instead of relying mainly on single observed values, and record the exact multimeter model and servo supply voltage for every test. That would make the comparison more reproducible and make the measured values easier to compare with published specifications.

---

## What I copied without understanding

`TODO — write the specific code, wiring choice, formula, or parameter that was taken on trust during the experiment.`

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:2a0606,100:E23A3A&height=110&section=footer&animation=twinkling" width="100%" />
</div>
