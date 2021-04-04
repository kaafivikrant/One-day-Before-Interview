1. What is HTML?

Answer:

HTML is the abbreviation for Hypertext Markup Language. It is the typical documents’ markup language for developing web pages to display on the web browser.

The extensions used to save HTML pages are .html and .htm.

2. What is a Tag in HTML?

Answer:

In an HTML page, tags used are to place the content and format the pages. They always defined between (<) and (>) symbols. For example, <h1>text</h1>.

An opening tag must be preceded with a closing tag and indicated with a ‘/’ symbol.

A tag instructs the browser to format the HTML. Tags have many uses, such as changing the appearance of text, displaying a graphic, or linking another page.

Read: HTML Developer Salary in India: For Freshers & Experienced

3. What is the key difference between HTML Elements and Tags?

Answer:

This is one of the most asked HTML interview questions.

HTML Elements

The sections of the web page, such as a paragraph, an image, or a link is an element, and an element has a certain way of execution. For example, the link is used to be clicked, and the text boxes can be used to input text.

HTML Tags

HTML elements communicate with the browser how to represent the text and become HTML tags when enclosed within angular brackets <>.

4. If you want to display some HTML data in a table in tabular format, which HTML tags will you use?

Answer:

The HTML has a specific tag, i.e., the table tag to display data in tabular form. Below is the list of the HTML tags used to display data in tabular form in HTML:

Tag

Description

<table>

For defining a table.

<caption>

For mentioning a caption to the table.

<tr>

For defining a row in a table.

<td>

For defining a cell in a table.

<th>

For defining a header cell in a table.

<tbody>

For grouping the body’s content in a table.

<col>

For specifying the column properties for each column of the table.

5. What are Attributes in HTML?

Answer:

An additional attribute is given to each tag to alter the behavior of the tag. Attributes are defined directly after the tag name, inside the angular brackets. They appear in opening tags and can never appear in closing tags.

For example:

You can define an attribute for the <input> tag, such as a text field, checkbox, radio button, or many more ways.


6. What is an Anchor tag in HTML?

Answer:

An anchor tag is used to link two sections, web pages, or website templates in HTML.

Its format is:

<a href=”#” target=”link”></a>

Where ‘href’ is an attribute of the anchor tag used to identify the sections in a document, the ‘link’ is defined in the target attribute, which is to be linked.

7. What are Lists in HTML?

Answer:

HTML lists are used to group a set of related items in lists. It is defined with an <li> tag.

Some commonly used HTML lists:

Ordered List (HTML tag: <ol>)
Unordered List (HTML tag: <ul>)
Description List (HTML tag: <dl>)
Menu List (HTML tag: <menu>)
Directory List (HTML tag: <dir>)
8. Define HTML Layout.

Answer:

An HTML web page is arranged in a specific layout (format). Here are the sections of an HTML webpage to specify the different parts of a webpage:

10. What is the Use of Comments in HTML?

Answer:

Comments are used in an HTML document to make important notes and help developers mention any modification to be incorporated afterward. They are not displayed in the browser when the code is executed. A comment is always written in between the ‘—‘ symbol at the beginning and end of the angular brackets.

Syntax:

<!—‘Comment’ !–>

Five Additional HTML Interview Questions and Answers

11. What is HTML5?

Answer:

HTML5 is the improved HTML version released in 2014 by the World Wide Web consortium. Nowadays, every employer wants to put this as one of the HTML interview questions.

It has set forth the following new characteristics to be learned by professionals:

DOCTYPE declaration: To declare the HTML document type to instruct the web browser about the markup language.
Main: The main tag defines the primary section in the document related to the central content of a document with a <main> tag.
Section: It is used to define specific sections in a document such as a chapter, header, footer, or any other section, and is specified with the <section> tag.
Header: The header tag defines the title or heading of a document or its section. It is specified with the <header> tag.
Footer: The footer tag defines the section of a document that contains information such as copyright or author’s information. It is designated with the <footer> tag.
Article: The article tag represents an independent or self-contained part of the content of a document with the tag <article>.
12. What is Semantic HTML?

Answer:

Semantic HTML is one style of coding, where the tags convey the meaning of the text. HTML uses semantics to reinforce the semantics or purpose of the content.

For Example:

<b> </b> and <i> </i> tags which are used to bold and italic statements in HTML are replaced with <strong></strong> and <em></em> tags in semantic HTML. 

This is because they represent formatting and provide no meaning or structure.

13. What is an Image Map?

Answer:

An Image map lets you link different web pages with a single image. It is represented with the <map> tag. Every employer expects the applicant to know about this, and this has been one of the most commonly asked HTML interview questions.

14. Why is the Embed Tag Used in HTML?

Answer:

An Embed Tag is used for including a Video or Audio in an HTML Document. A source of audio or video file to be displayed on the webpage is defined within an Embed tag as:

<EMBED> Source </EMBED>.

How do you insert an image in the HTML webpage?
 You can insert an image in the HTML webpage by using the following code:

<!DOCTYPE html>

<html>

  <body>

    <h2>HTML Image Example</h2>

    <img src="tulip.jpeg" />

  </body>

</html>

25. What is the alt attribute in HTML?
The alt attribute is used for displaying a text in place of an image whenever the image cannot be loaded due to any technical issue.

<!DOCTYPE html>

<html>

  <body>

    <h2>HTML Alt Example</h2>

    <img src="tulip.jpeg" alt="Tulip Garden" />

  </body>

</html>

26. How are hyperlinks inserted in the HTML webpage?
 You can insert a hyperlink in the HTML webpage by using the following code:

<!DOCTYPE html>

<html>

  <body>

    <h2>HTML Hyperlink Example</h2>

    <a href="url">link text</a>

  </body>

</html>

27. How do you add colour to the text in HTML?
 You can add colour to the text in HTML by using the following code:

<!DOCTYPE html>

<html>

  <body>

    <h2>HTML Color Text Example</h2>

    <h1 style="color: Red">Hello HTML</h1>

    <p style="color: Blue">Line 1</p>

    <p style="color: Green">Line 2</p>

  </body>

</html>

28. How do you add CSS styling in HTML?
There are three ways to include the CSS with HTML:

Inline CSS: It is used when less amount of styling is needed or in cases where only a single element has to be styled. To use inline styles add the style attribute in the relevant tag.
External Style Sheet: This is used when the style is applied to many elements or HTML pages. Each page must link to the style sheet using the <link> tag:
<head>

  <link rel="stylesheet" type="text/css" href="mystyle.css" />

</head>

Internal Style Sheet: It is used when a single HTML document has a unique style and several elements need to be styled to follow the format. Internal styles sheet is added in the head section of an HTML page, by using the <style> tag:
<head>

  <style type="text/css">

    hr {

      color: sienna;

    }

    p {

      margin-left: 20px;

    }

    body {

      background-image: url("images/back40.gif");

    }

  </style>

</head>

29. What hierarchy do the style sheets follow?
If a single selector includes three different style definitions, the definition that is closest to the actual tag takes precedence. Inline style takes priority over embedded style sheets, which takes priority over external style sheets.

30. How do you add JavaScript to an HTML webpage?
JavaScript is used for making HTML web pages more interactive, and user-friendly. It is a scripting language that allows you to interact with certain elements on the page, based on user input. As with CSS, there are three major ways of including JavaScript:

Inline:
You can add JavaScript to your HTML elements directly whenever a certain event occurs. We can add the JavaScript code using attributes of the HTML tags that support it. Here is an example that shows an alert with a message when the user clicks on it:

<button onclick="alert('Click the Button!');">

Click!

</button>

Script block:
You can define a script block anywhere on the HTML code, which will get executed as soon as the browser reaches that part of the document. This is why script blocks are usually added at the bottom of HTML documents.

<html>

  <script>

    var x = 1;

    var y = 2;

    var result = x + y;

    alert("X + Y is equal to " + result);

  </script>

</html>

External JavaScript file:
You can also import the JavaScript code from a separate file and keep your HTML code clutter-free. This is especially useful if there is a large amount of scripting added to an HTML webpage.

<html>

  <script src="my-script.js"></script>

</html>

