# AtomSpace Neighbor Query Logic

## `get_target_neighbors(Source, Type, false)`

1. **Initial Checks**:
   - If the `Type` is `UNORDERED_LINK`, return an empty result.

2. **Variable Declaration**:
   - Declare a variable `answer` to hold the result.

3. **Retrieve Incoming Set**:
   - Find the incoming set of the `Source`.

   Example:
   - Let’s say we have two links:
     - `L1 = (ASYMMETRIC_HEBBIAN_LINK Source T1)`
     - `L2 = (ASYMMETRIC_HEBBIAN_LINK Source T2)`
   - Both can be part of the incoming set of `Source`.

4. **Iterate Over Incoming Links**:
   - Iterate on these links (in this case, `L1` and `L2`).

5. **Process Each Link**:
   - For `L1`:
     - Check if the `Type` of `L1` is the desired link type (`ASYMMETRIC_HEBBIAN_LINK`).
     - Check if the first element of the outgoing set of `L1` is equal to `Source`.

   - If both conditions are satisfied, proceed with an **inner loop**.

6. **Inner Loop**:
   - Iterate over the outgoing set of `L1` (which are `[Source, T1]`).
   - Let the iterator be `H`.
   - If `H != Source`, skip it.
   - Otherwise:
     - Check if `H` is in the target.
     - If yes, add it to the `answer`.

7. **Repeat for `L2`**:
   - The same process is applied, resulting in `T2` being added to the `answer`.

8. **Final Result**:
   - The `answer` will be `{T1, T2}`.

---

## `get_source_neighbors(Source, Type, false)`

1. **Initial Checks**:
   - If the `Type` is `UNORDERED_LINK`, return an empty result.

2. **Variable Declaration**:
   - Declare a variable `answer` to hold the result.

3. **Retrieve Incoming Set**:
   - Find the incoming set of the `Source`.

4. **Iterate Over Incoming Links**:
   - Iterate on these links.

5. **Process Each Link**:
   - For each link (e.g., `L3` and `L4`):
     - Check if the `Type` of the link matches the desired type (`ASYMMETRIC_HEBBIAN_LINK`).
     - Check if the first element of the outgoing set of the link is equal to `Source`.

   - If both conditions are satisfied, proceed with an **inner loop**.

6. **Inner Loop**:
   - Iterate over the outgoing set of the link.
   - Let the iterator be `H`.
   - If `H == Source`, skip it.
   - Otherwise:
     - Check if `H` is in the source.
     - If yes, add it to the `answer`.

7. **Final Result**:
   - If the Atomspace contains:
     - `L3 = (ASYMMETRIC_HEBBIAN_LINK Source1 Source)`
     - `L4 = (ASYMMETRIC_HEBBIAN_LINK Source2 Source)`
   - The `answer` will be `{Source1, Source2}`.
