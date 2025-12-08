document.getElementById("testButton").addEventListener("click", () => {
  const msg = document.getElementById("message");
  msg.textContent = "✅ JavaScript is working!";
  msg.style.color = "#00ff99";
  console.log("Button clicked — JS is working!");
});
