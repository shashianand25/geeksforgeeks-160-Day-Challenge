Trying to learn DSA from GeeksforGeeks' 160 Days Challenge!!  
I am learning concepts before solving questions — let's see how this goes 🤞

---

### 📅 Day 1 – Second Largest in Array

📚 Had to learn vectors before I started solving because the code snippet had `vector` defined in it.  
⏱️ Took around 15–20 minutes.  
🧠 First solution was by sorting the array but that was O(n²), so I switched to one loop and solved it after thinking for a while.

---

### 📅 Day 2 – Push Zeroes to End

🔁 Tried using vector functions I learned on Day 1 like `.erase` and `.push_back`, but kept getting runtime errors.  
⚠️ Even when it worked, the time complexity was high.  
✅ Finally solved it using just one loop, without those vector functions.

---

### 📅 Day 3 – Reverse an Array

❓ Classic question but I had never solved it before.  
🧪 Initially solved it with two loops using a `temp_arr`.  
⚙️ Later optimized it to one loop (had to tweak a condition inside the loop).  


---

### 📅 Day 4 – Left Rotate an Array

❌ First tried solving with nested `for` loops — worked, but failed on large test cases due to too many swaps.  
💡 Then realized after one full rotation, the array returns to original — so I optimized using `rotations % size`.  
⚡ Final solution reduced time complexity to O(n).
