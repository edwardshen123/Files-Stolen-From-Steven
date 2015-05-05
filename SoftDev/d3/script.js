console.log("HELLO")
var thediv = d3.select("#thediv")
var ollistitems = d3.select("ol").selectAll("li")

thediv.style("border-style", "solid");
thediv.style("border-width", 2);
thediv.style("background-color", "gray");
thediv.classed("green", true);
thediv.style("font-size", "30px");
thediv.text("replacement text");

var p = thediv.append("p");

p.style("color", "yellow")
    .style("font-size", "15px")
    .text("This is now text");

var makeUL = function() {
    var list = d3.select("ul");
    for (var i=0;i<3;i++) {
	list.append("li")
    }
    var items = list.selectAll("li");
    items.text(function(d, i) {
	return "This is item " + i;
    })
	.style("font-size", function(d, i) {
	    return 15 + 10*i + "px";
	});
};

makeUL();
