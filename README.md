# ✈️ Flight Control System

This project consists of a logical algorithm to validate the takeoff conditions of an aircraft, considering factors such as fuel, tower authorization, distance to the destination, and mission type (civil or military).

## 📋 Business Rules

The system evaluates takeoff based on the following criteria:

### 1. Takeoff Conditions
For the pilot to receive permission to take off, the following conditions must be met:

* **Scenario A:** * Tower authorization **E** * Fuel level ≥ 70%.

* **Scenario B (Fuel Alert):** * Fuel between 50% and 69% **E**

* Destination up to 200 km away **E**

* Presence of a support aircraft.

### 2. Military Missions
If the mission is of the **Military** type, in addition to the conditions above, the following is mandatory:

* Valid activation code **OR**
* Direct approval from the commander.

---

## 📢 Post-Takeoff Messages

If takeoff is authorized, the system performs the following additional checks:

| Condition | Departure Message |

| :--- | :--- |

| Fuel ≥ 90% **and** Destination > 200 km | `"Long Range Mission"` |

| Fuel < 6% **and** Civil Mission | `"Mission Risk, needs to be registered"` |

## created in C language ![C](https://img.shields.io/badge/language-C-blue.svg)
