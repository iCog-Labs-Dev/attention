# AFImportanceDiffusionAgent.cc and ImportanceDiffusionBase.cc

The `run()` function of the **AFImportanceDiffusionAgent** first loads parameters from **AttentionParamQuery**. The retrieved values are:

- **maxSpreadPercentage**  
- **hebbianMaxAllocationPercentage**  
- **spreadHebbianOnly**  

Then it calls the main function for spreading Importance (**spreadImportance()**).

First, the function stores the result of **diffusionSourceVector()** in a vector **diffusionSourceVector** variable.

`diffusionSourceVector` retrieves atoms in attentional focus and filters the atoms by checking if there is a Hebbian link in the atom. If there is a Hebbian link, it will remove it and return the atoms found from the AF.

The atom vectors are now stored in **diffusionSourceVector**.

A loop then iterates over these atoms stored in **diffusionSourceVector** one by one and passes them to the **diffuseAtom(atomSource)** function.

---

## **diffuseAtom(source)**

The **diffuseAtom(source)** function accepts one atom at a time from the iterator and performs the following computation:

1. **Find the incident atoms** that will be diffused to based on the source:  
   `incidentAtoms = incidentAtoms(source);`

   What this **incidentAtoms** function does:
   - Retrieves **incomingSets** of the source and stores them in **resultSet**.
   - If the source is a link, it gets the outgoing atoms of that link and appends them to the **resultSet**.
   - **removeHebbianLinks** from the **resultSet**, then returns the **resultSet**.

2. After storing the **resultSet** in **incidentAtoms**, the function continues to **hebbianAdjacentAtoms(source)** and stores it in **hebbianAdjacentAtoms**.

   What the **hebbianAdjacentAtoms(source)** function does:
   - Retrieves the target neighbors (covered in [Neighbors.cc](http://Neighbors.cc)).
   - Calls `get_target_neighbors(h, ASYMMETRIC_HEBBIAN_LINK)` and stores the result in **hebbianAdjacentAtoms**.

3. **Calculate the probability vector** that determines what proportion to diffuse to each incident atom:  
   `probabilityVectorIncident(incidentAtoms)`

   - It calculates `diffusionAmount = 1 / size of the incidentAtoms`.
   - Returns the result in a key-value pair like `{{target, diffusionAmount}}` (where target is the single incident atom).  
     This is done with a loop for each **incidentAtom**.

4. **Calculate the probability vector** that determines what proportion to diffuse to each Hebbian adjacent atom:  
   `probabilityVectorHebbianAdjacent(source, hebbianAdjacentAtoms)`

   - It first calculates `maxAllocation = 1 / size of the hebbianAdjacentAtoms`.
   - Iterates through the atoms and:
     - Finds the **link** that forms `(ASYMMETRIC_HEBBIAN_LINK, source, target)` (where target is a single Hebbian adjacent atom).
     - Calculates the diffusion amount:  
       `diffusionAmount = maxAllocation * calculateHebbianDiffusionPercentage(link)`

       `calculateHebbianDiffusionPercentage` = `strength * confidence`.

     - Creates a key-value pair like `{{target, diffusionAmount}}`.

   - Returns the result.

5. **Combine the two vectors**:  
   `combineIncidentAdjacentVectors(probabilityVectorIncident, probabilityVectorHebbianAdjacent)`

---

## **Final Steps**

1. `calculateDiffusionAmount(source)` returns:  
   `STI(source) * maxSpreadPercentage`.

2. If `totalDiffusionAmount == 0`, the function returns.

3. Otherwise, it multiplies each vector's second value (diffusionAmount, which is a probability value) by `totalDiffusionAmount` and creates a vector like:  
   `{{source, target, diffusionAmount * totalDiffusionAmount}}`.

4. Calls `processDiffusionStack()`.

5. **processDiffusionStack** calls the **tradeSTI** function with the top value.

---

## **tradeSTI Function**

The **tradeSTI** function:
- Decreases the STI from the source.
- Adds it to the target using the band `set_sti` and `get_sti` methods.

---
