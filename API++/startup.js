window.onload = pageR()
function pageR() {
  console.log("redirecting...")
  setTimeout(function() {window.location = "index.html"}, 4000)
  console.log("redirected")
}
