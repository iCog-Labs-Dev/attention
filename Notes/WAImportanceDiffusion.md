# WAImportanceDiffusionAgent

## Overview

The `run` function and its associated methods in the `WAImportanceDiffusionAgent` class handle the diffusion of STI using specific parameters and algorithms. Here's a breakdown of the process.

---

## `run()` Function

1. **Retrieve Parameters**:
   - Fetches `hebbianMaxAllocationPercentage` from the `AttentionParamQuery`.
   - In the case of **AF**, it also retrieves:
     - `maxSpreadPercentage`
     - `spreadHebbianOnly`.

2. **Call `spreadImportance()` Function**:
   - This function manages the actual diffusion process.

---

## `spreadImportance()` Function

1. **Retrieve Vector of Atoms**:
   - Calls the `diffusionSourceVector()` method to retrieve a vector of atom handles that will diffuse STI.

2. **Inside `diffusionSourceVector()`**:
   - Returns a vector of atom handles by:
     - Calling `getRandomAtomNotInAF()` to retrieve atoms that are:
       - Stimulated.
       - Not part of the AF.
     - Removing any Hebbian link from the resulting set.

3. **Check Vector Size**:
   - If the vector size is `0`:
     - Stops the diffusion process and returns nothing.
   - Otherwise:
     - Retrieves the first item from the vector.

4. **Diffuse Importance**:
   - Passes the retrieved atom to `diffuseAtom(target)`.

---

## `diffuseAtom(target)`

- **Details Covered**:
  - Refer to the `AFImportanceDiffusionAgent` notes for a detailed explanation of the `diffuseAtom` process.

---

## `processDiffusionStack()`

- **Details Covered**:
  - Refer to the `AFImportanceDiffusionAgent` notes for more information.

---

## Function Flow Summary

1. **`run()`**
   - Fetches diffusion parameters.
   - Calls `spreadImportance()`.

2. **`spreadImportance()`**
   - Retrieves diffusion sources using `diffusionSourceVector()`.
   - If atoms exist:
     - Selects an atom and calls `diffuseAtom(target)`.

3. **`diffuseAtom(target)`**
   - Handles atom diffusion (details in `AFImportanceDiffusionAgent`).

4. **`processDiffusionStack()`**
   - Processes the diffusion stack (details in `AFImportanceDiffusionAgent`).
