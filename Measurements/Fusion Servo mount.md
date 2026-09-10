# M02 — Parametric Servo Mount in Fusion 360

---

## What I was trying to find out

I wanted to learn how to create a simple mechanical part in Fusion 360 using constraints and parameters instead of drawing fixed geometry. The goal was to design a servo mount and verify that the model could be modified without breaking.

---

## Result

| Metric                                   |       Measured |
| ---------------------------------------- | -------------: |
| Sketch degrees of freedom remaining      |          **0** |
| Parameter change, plate width 60 → 50 mm |          **0** |
| Servo mounting holes                     |       **5 mm** |
| Servo mounting slot                      | **32 × 12 mm** |
| Re-model time, first attempt             |         **25** |
| Re-model time, second attempt            |          **5** |

The sketch was fully constrained with **0 degrees of freedom**.

The plate width was changed from **60 mm to 50 mm**, and the model rebuilt without errors.

The servo mounting geometry uses **5 mm radius holes** and a **32 × 12 mm slot**.

The second modelling attempt took **5 minutes**, compared with **25 minutes** for the first attempt, reducing the modelling time by **80%**.

---

## Method

1. Created a 60 × 40 mm sketch and fully constrained it until the remaining degrees of freedom were 0.
2. Modelled a simple servo mounting plate with two 5 mm radius mounting holes and a 32 × 12 mm slot.
3. Used parameters and sketch constraints so that the plate width could be changed without breaking the model.
4. Changed the plate width from **60 mm to 50 mm** and verified that the model rebuilt without errors.
5. Re-modelled the part from scratch and recorded the time taken.

---

## Parameter test

The initial plate width was:

```text
60 mm
```

It was changed to:

```text
50 mm
```

The model rebuilt successfully with:

```text
0 rebuild errors
```

The original mission target specified testing **60 → 75 mm**. This run instead tested **60 → 50 mm**, so the original target has not been reproduced exactly.

---

## Servo mounting geometry

| Feature                |      Dimension |
| ---------------------- | -------------: |
| Mounting hole radius   |       **5 mm** |
| Mounting hole diameter |      **10 mm** |
| Servo slot             | **32 × 12 mm** |

A precise physical fit measurement against the servo has not yet been recorded.

---

## What I would do differently

i wanted to make a second miniature slot for aesthetics in my first attempt and didn't know that i could do that in an easier way using the fillet tool and i struggled a bit though it was unnecessary. 

---

## Conclusion

The model was successfully fully constrained and could be modified parametrically without producing rebuild errors. The second attempt was also significantly faster than the first, taking only 5 minutes compared with 25 minutes.

The parameter test used **60 → 50 mm** rather than the original **60 → 75 mm** target, and a precise physical fit measurement has not yet been recorded.
