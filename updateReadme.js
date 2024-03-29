#!/usr/local/bin/node
const fs = require("fs");
const { exec } = require("child_process");

let content =
  "# LeetCode\n\n### Solved problems\n\n|Number|Title|Problem|Code|\n|---|---|---|---|\n";

const problems = {};
fs.readdirSync("./C++ Solutions/").forEach((file) => {
	console.log(file);
 	if (!(fs.statSync("./C++ Solutions/" + file).isDirectory()) && file.endsWith(".cpp")) {
    problems[file.split(".")[0]] = {
      title: fs
        .readFileSync("./C++ Solutions/" + file, "utf8")
        .split("\n")[3]
        .split("] ")[1],
      url: fs
        .readFileSync("./C++ Solutions/" + file, "utf8")
        .split("\n")[5]
        .slice(3)
        .replace("/description/", ""),
      filename: file.split(".")[1],
      fileExtension: file.split(".")[2],
    };
  }
});
for (var key in problems)
  content += `|${key}|${problems[key].title}|[Problem](${problems[key].url})|[Code](https://github.com/Jadhavhpranav1121/LeetCode/blob/master/${key}.${problems[key].filename}.${problems[key].fileExtension})|\n`;

fs.writeFile("README.md", content, (err) => err);
